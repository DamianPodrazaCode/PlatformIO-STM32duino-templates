#include <Arduino.h>

#ifdef __cplusplus
extern "C" {
#endif
    // 120MHz, dla USB i bez USB
    void SystemClock_Config(void) {
        RCC_OscInitTypeDef RCC_OscInitStruct = { 0 };
        RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSE;
        RCC_OscInitStruct.HSEState = RCC_HSE_BYPASS;
        RCC_OscInitStruct.PLL.PLLState = RCC_PLL_ON;
        RCC_OscInitStruct.PLL.PLLSource = RCC_PLLSOURCE_HSE;
        RCC_OscInitStruct.PLL.PLLM = 8;
        RCC_OscInitStruct.PLL.PLLN = 240;
        RCC_OscInitStruct.PLL.PLLP = RCC_PLLP_DIV2;
        RCC_OscInitStruct.PLL.PLLQ = 5;
        HAL_RCC_OscConfig(&RCC_OscInitStruct);
        RCC_ClkInitTypeDef RCC_ClkInitStruct = { 0 };
        RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK | RCC_CLOCKTYPE_SYSCLK | RCC_CLOCKTYPE_PCLK1 | RCC_CLOCKTYPE_PCLK2;
        RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_PLLCLK;
        RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
        RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV4;
        RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV2;
        HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_3);
        HAL_RCC_EnableCSS();
        SystemCoreClock = 120000000UL;
        HAL_SYSTICK_Config(SystemCoreClock / (1000U / uwTickFreq));
    }

#ifdef __cplusplus
}
#endif
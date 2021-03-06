/* 
 **************************************************************************************************
 *
 * @file    : stm32f7xx_it.h
 * @author  : Bayrem GHARSELLAOUI
 * @version : 1.4.0
 * @date    : May 2020
 * @brief   : Interrupt Service Routines header file
 * 
 **************************************************************************************************
 * 
 * @project   : {pio-freertos}
 * @board     : {Nucleo 144 STM32F767Zi}
 * @compiler  : {PlatformIO, version 4.3.3}
 * @framework : {stm32cube}
 * 
 **************************************************************************************************
 */

/** @defgroup stm32f7xx_it STM32F7XX_IT
  * @brief Interrupt Service Routines.
  * @{
  */

#ifndef __STM32F7xx_IT_H
#define __STM32F7xx_IT_H

/*-----------------------------------------------------------------------------------------------*/
/* Exported function prototypes -----------------------------------------------------------------*/
/*-----------------------------------------------------------------------------------------------*/
/** @defgroup stm32f7xx_it_exported_function_prototypes Exported function prototypes
  * @{
  */
void EXTI15_10_IRQHandler(void);
void USART3_IRQHandler(void);
void NMI_Handler(void);
void HardFault_Handler(void);
void MemManage_Handler(void);
void BusFault_Handler(void);
void UsageFault_Handler(void);
/**
  * @}
  */

#endif /* __STM32F7xx_IT_H */
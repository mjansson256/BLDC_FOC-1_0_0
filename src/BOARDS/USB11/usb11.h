/*
 * usb11.h
 *
 *  Created on: Aug 9, 2011
 *  Copyright (C) 2011 Marcus Jansson <mjansson256@gmail.com>
 */

#ifndef __BOARD_USB11_H__
#define __BOARD_USB11_H__

#include "compiler.h"

//Debug output on USART? remove to get rid of usart output
#define DEBUG

/*! \name Oscillator Definitions
 */
//! @{

// RCOsc has no custom calibration by default. Set the following definition to
// the appropriate value if a custom RCOsc calibration has been applied to your
// part.
//#define FRCOSC          AVR32_PM_RCOSC_FREQUENCY              //!< RCOsc frequency: Hz.

#define FOSC32          32768                                 //!< Osc32 frequency: Hz.
#define OSC32_STARTUP   AVR32_PM_OSCCTRL32_STARTUP_8192_RCOSC //!< Osc32 startup time: RCOsc periods.

#define FOSC0           8000000UL                             //!< Osc0 frequency: Hz.
#define FCPU_HZ        48000000UL                             //!< PLL frequency: Hz.
#define FPBA_HZ        (FCPU_HZ / 2)


#define OSC0_STARTUP    AVR32_PM_OSCCTRL0_STARTUP_2048_RCOSC  //!< Osc0 startup time: RCOsc periods.

//! @}

/*! \name USB11 pin definitions
 */
//! @{
//These are found in the file:
// /BLDC_FOC-1_0_0/src/APPLICATIONS/EVK110x-MOTOR-CONTROL/BLDC-FOC/APPLICATION/CONF/usb11.h
//~ #define MOTEN AVR32_PIN_PA11
//~ #define POWER_DOWN_INT AVR32_PIN_PB01

#define TC_CHANNEL_0 0

//TODO: Remove MLED and BUT definitions and relevant debug code
//~ #define MLED0 AVR32_PIN_PB27
//~ #define MLED1 AVR32_PIN_PB28
//~ #define MLED2 AVR32_PIN_PB29
//~ #define MLED3 AVR32_PIN_PB30
//~
//~ #define BUT0 AVR32_PIN_PX16
//~ #define BUT1 AVR32_PIN_PX19
//~ #define BUT2 AVR32_PIN_PX22
//! @}

/* TODO: Not used yet. Remove if still unused at end of project. */
#define MOTPWMA AVR32_PWM_0_PIN	//AVR32_PIN_PB19 for AVR32UC3A1512
#define MOTPWMB AVR32_PWM_0_PIN	//AVR32_PIN_PB20 for AVR32UC3A1512
#define MOTPWMC AVR32_PWM_0_PIN	//AVR32_PIN_PB21 for AVR32UC3A1512

/* Connectors defines used during debug */
#define J13_10 AVR32_PIN_PA05
#define J13_11 AVR32_PIN_PA06
#define J13_12 AVR32_PIN_PA14
#define J13_13 AVR32_PIN_PA13

/* Usart definitions */
#define STDIO_USART               (&AVR32_USART0)
#define STDIO_USART_BAUDRATE      115200	//57600
#define STDIO_USART_RX_PIN        AVR32_USART0_RXD_0_0_PIN
#define STDIO_USART_RX_FUNCTION   AVR32_USART0_RXD_0_0_FUNCTION
#define STDIO_USART_TX_PIN        AVR32_USART0_TXD_0_0_PIN
#define STDIO_USART_TX_FUNCTION   AVR32_USART0_TXD_0_0_FUNCTION


#endif /* __BOARD_USB11_H__ */

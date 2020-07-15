/*
  Copyright (c) 2014-2015 Arduino LLC.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
  See the GNU Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/


#include "variant.h"

/*
 * Pins descriptions
 */
const PinDescription g_APinDescription[]=
{
   // 0 - Connected to radio DIO0 external interrupt 4 
  { PORTA,  3, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD ), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), TCC0_CH1, No_ADC_Channel, EXTERNAL_INT_4, GCLK_CCL_NONE },  // DIO0
   
   // GPIO 1--2 I2C (original xtal pins) SERCOM1
  { PORTA,  0, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // SDA
  { PORTA,  1, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // SCL
  
   //GPIO 3--6 ANALOG PINS
  { PORTA,  2, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_ADC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel0, EXTERNAL_INT_1, GCLK_CCL_NONE }, // A0 (Same as ENVOL)
  { PORTA,  4, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_ADC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel4, EXTERNAL_INT_4, GCLK_CCL_NONE }, // A1 (Same as ADC_OX)
  { PORTA,  5, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_ADC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel5, EXTERNAL_INT_5, GCLK_CCL_NONE }, // A2 (Same as ADC_RED)
  { PORTA,  6, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_ADC|PIN_ATTR_DIGITAL), NOT_ON_TIMER, ADC_Channel6, EXTERNAL_INT_6, GCLK_CCL_NONE }, // A3 (Same as BATTLEVEL)
  
  //GPIO 7--13 DIGITAL PINS 
  { PORTA,  7, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE },//INTCSS
  { PORTA,  8, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE },//INT                   
  { PORTA,  9, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE },//PRE_HEALTING                    
  { PORTA, 10, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE },//WAKE 
  { PORTA, 15, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE },//DIO5                    
  { PORTA, 16, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE },//RFM_RST                    
  { PORTA, 27, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE },//DIO2                    
    
   // 14 (LED)
  { PORTA, 11, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_TIMER_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_TIMER), TCC2_CH1, No_ADC_Channel, EXTERNAL_INT_1, GCLK_CCL_NONE }, // GPIO D13 / RED GREEN
    
  //15...19 SPI= MISO-PA22, MOSI-PA18, SCK-PA19, SS-PA17 
  { PORTA,  22, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, 
	{ PORTA,  18, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, 
	{ PORTA,  19, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, 
	{ PORTA,  17, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_ATTR_SERCOM_STD), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, 
  { PORTA,  28, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE  },
   
  // GPIO 20, 21 (USB interface)
  // ----------------------------
  { PORTA, 24, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_DIGITAL|PIN_ATTR_COM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // USB/D- 
  { PORTA, 25, PIO_MULTI, PER_ATTR_DRIVE_STD, (PIN_ATTR_DIGITAL|PIN_ATTR_COM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE }, // USB/D+

  // 22(SS), PA23 -DIO1 
  { PORTA, 17, PIO_MULTI, (PER_ATTR_DRIVE_STD|PER_SERCOM_ALT), (PIN_ATTR_DIGITAL|PIN_ATTR_SERCOM), NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE },
  { PORTA, 23, PIO_MULTI, PER_ATTR_DRIVE_STD, PIN_ATTR_DIGITAL, NOT_ON_TIMER, No_ADC_Channel, EXTERNAL_INT_NONE, GCLK_CCL_NONE },//DIO1
} ;
const void* g_apTCInstances[TCC_INST_NUM+TC_INST_NUM]={ TCC0, TCC1, TCC2, TC3, TC4, TC5 } ;

// Multi-serial objects instantiation
SERCOM sercom0( SERCOM0 ) ;
SERCOM sercom1( SERCOM1 ) ;
SERCOM sercom2( SERCOM2 ) ;
SERCOM sercom3( SERCOM3 ) ;

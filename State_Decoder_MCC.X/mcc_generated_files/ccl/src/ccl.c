/**
 * CCL Generated Driver File
 * 
 * @file ccl.c
 * 
 * @ingroup  ccl
 * 
 * @brief This is the generated driver implementation file for the CCL driver. 
 *
 * @version Driver Version 1.1.0
*/

/*
� [2022] Microchip Technology Inc. and its subsidiaries.

    Subject to your compliance with these terms, you may use Microchip 
    software and any derivatives exclusively with Microchip products. 
    You are responsible for complying with 3rd party license terms  
    applicable to your use of 3rd party software (including open source  
    software) that may accompany Microchip software. SOFTWARE IS ?AS IS.? 
    NO WARRANTIES, WHETHER EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS 
    SOFTWARE, INCLUDING ANY IMPLIED WARRANTIES OF NON-INFRINGEMENT,  
    MERCHANTABILITY, OR FITNESS FOR A PARTICULAR PURPOSE. IN NO EVENT 
    WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY 
    KIND WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF 
    MICROCHIP HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE 
    FORESEEABLE. TO THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP?S 
    TOTAL LIABILITY ON ALL CLAIMS RELATED TO THE SOFTWARE WILL NOT 
    EXCEED AMOUNT OF FEES, IF ANY, YOU PAID DIRECTLY TO MICROCHIP FOR 
    THIS SOFTWARE.
*/

#include "../ccl.h"

int8_t CCL_Initialize(void)
{
    //INTMODE0 INTDISABLE; INTMODE1 INTDISABLE; INTMODE2 INTDISABLE; INTMODE3 INTDISABLE; 
    CCL.INTCTRL0 = 0x0;

    //INT 0x0; 
    CCL.INTFLAGS = 0x0;

    //INSEL0 IN0; INSEL1 IN1; 
    CCL.LUT0CTRLB = 0x55;

    //INSEL2 LINK; 
    CCL.LUT0CTRLC = 0x2;

    //INSEL0 IN0; INSEL1 IN1; 
    CCL.LUT1CTRLB = 0x55;

    //INSEL2 IN2; 
    CCL.LUT1CTRLC = 0x5;

    //INSEL0 MASK; INSEL1 MASK; 
    CCL.LUT2CTRLB = 0x0;

    //INSEL2 MASK; 
    CCL.LUT2CTRLC = 0x0;

    //INSEL0 MASK; INSEL1 MASK; 
    CCL.LUT3CTRLB = 0x0;

    //INSEL2 MASK; 
    CCL.LUT3CTRLC = 0x0;

    //SEQSEL DISABLE; 
    CCL.SEQCTRL0 = 0x0;

    //SEQSEL DISABLE; 
    CCL.SEQCTRL1 = 0x0;

    //TRUTH 64; 
    CCL.TRUTH0 = 0x40;

    //TRUTH 32; 
    CCL.TRUTH1 = 0x20;

    //TRUTH 0; 
    CCL.TRUTH2 = 0x0;

    //TRUTH 0; 
    CCL.TRUTH3 = 0x0;

    //CLKSRC CLKPER; EDGEDET DIS; ENABLE enabled; FILTSEL DISABLE; OUTEN enabled; 
    CCL.LUT0CTRLA = 0x41;

    //CLKSRC CLKPER; EDGEDET DIS; ENABLE enabled; FILTSEL DISABLE; OUTEN enabled; 
    CCL.LUT1CTRLA = 0x41;

    //CLKSRC CLKPER; EDGEDET DIS; ENABLE disabled; FILTSEL DISABLE; OUTEN disabled; 
    CCL.LUT2CTRLA = 0x0;

    //CLKSRC CLKPER; EDGEDET DIS; ENABLE disabled; FILTSEL DISABLE; OUTEN disabled; 
    CCL.LUT3CTRLA = 0x0;

    //ENABLE enabled; RUNSTDBY disabled; 
    CCL.CTRLA = 0x1;
    

    return 0;
}

ISR(CCL_CCL_vect)
{
    /*
    * Insert your CCL interrupt handling code
    *
    * Interrupt flag can be cleared by writing 1 to its bit location
    * in the INTFLAGS register
    */

}

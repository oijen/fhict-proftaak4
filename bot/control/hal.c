/* 
 * ****************************************************************************
 * RP6 ROBOT SYSTEM - RP6 CONTROL M32 Examples
 * ****************************************************************************
 * HAL source file
 * ****************************************************************************
 */

/*****************************************************************************/
// Includes:

#include "RP6ControlLib.h" 		// The RP6 Control Library. 
								// Always needs to be included!

#include "RP6I2CmasterTWI.h"	// I2C Master Library
#include "RP6Control_I2CMasterLib.h"

/*****************************************************************************/


// deze functie moet nog omgevormd worden naar hal_hasWallLeft(), hal_hasWallRight(), hal_hasWallFront()
/*
void scanZijkant(void)
{
		writeString_P("\nADC3: ");
		uint16_t adc3 = readADC(ADC_3); // Read ADC Channel 3 
		writeInteger(adc3, DEC);
		writeString(" | ADC2: ");
		uint16_t adc2 = readADC(ADC_2); // Read ADC Channel 2
		writeInteger(adc2, DEC);
		writeChar('\n');
		mSleep(500);	
}
*/

void hal_turnLeft (void)
{
    rotate(50, LEFT, 90, BLOCKING);
}
void hal_turnRight (void)
{
    rotate(50, RIGHT, 90, BLOCKING);
}

void hal_moveForward(void)
{
    move(60, FWD, DIST_MM(400), BLOCKING);
}


void hal_init(void)
{
    // nothing currently
}

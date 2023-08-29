/* Calculations
PSDL_Experiments
* Fosc = 48MHz
*
* PWM Period = [(PR2) + 1] * 4 * TMR2 Prescale Value / Fosc
* PWM Period = 200us
* TMR2 Prescale = 16
* Hence, PR2 = 149 or 0x95
*
* Duty Cycle = 10% of 200us
* Duty Cycle = 20us
* Duty Cycle = (CCPR1L:CCP1CON<5:4>) * TMR2 Prescale Value / Fosc
* CCP1CON<5:4> = <1:1>
* Hence, CCPR1L = 15 or 0x0F
*/
#include <pic18f4550.h>
void main(void)
{
unsigned int i;
TRISCbits.TRISC2 = 0; // Set CCP1 pin as output for PWM signal
CCP1CON = 0b00001100; // Select PWM mode and configure the duty cycle
MSBs (CCP1CON<5:4> = <0:0>)
T2CON = 0b00000100; // Configure Timer2 with a prescaler of 16 and
turn it off
GIE = 1; // Enable global interrupts
TRISAbits.TRISA4 = 0; // Set PORTA pin 4 as an output
while(1)
{
TMR2 = 0; // Reset Timer2
PR2 = 149; // Set the period register for Timer2 to achieve a PWM
period of 200us
CCPR1L = 15; // Set the capture/compare register 1 high byte to
achieve a duty cycle of 10%
TMR2IF = 0; // Clear Timer2 interrupt flag
TMR2ON = 1; // Turn on Timer2
for(i = 15; i < 255; i += 50)
{
CCPR1L = i; // Decrease the duty cycle to decrease the speed
PSDL_Experiments
of the PWM signal
for(int j = 0; j < 1000; j++)
for(int k = 0; k < 10000; k++);
PORTAbits.RA4 = ~PORTAbits.RA4; // Toggle the value of PORTA
pin 4 (bitwise complement)
}
}
}
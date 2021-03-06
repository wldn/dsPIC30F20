///*
// * File:   adc.c
// * Author: Harry
// *
// * Created on August 28, 2017, 11:58 AM
// */
//
//#include "config.h"
//
//#define FCY 8000000 // FCY = FOSC / 2
//
//#include <xc.h>
//#include <libpic30.h>
//
//unsigned int a1 = 0;
//unsigned int a2 = 0;
//
//void ADC_Init(void);
//void __attribute__((__interrupt__)) _ADCInterrupt(void);
//
//void ADC_Init(void)
//{
////	int channel1Result;
//		
//	/* Set up the ADC Module */
//	
//	ADCONbits.ADSIDL    = 0;        /* Operate in Idle Mode	*/
//	ADCONbits.FORM      = 0;        /* Output in Integer Format	*/
//	ADCONbits.EIE       = 1;        /* Enable Early Interrupt */
//	ADCONbits.ORDER     = 0;        /* Even channel first */
//	ADCONbits.SEQSAMP   = 1;        /* Sequential Sampling Enabled */
//	ADCONbits.ADCS      = 5;        /* Clock Divider is set up for Fadc/14 */
//	
//	ADPCFG              = 0;        /* ANx are analog input */
//	ADSTAT              = 0;        /* Clear the ADSTAT register */
//	ADCPC0bits.TRGSRC0  = 1;        /* Use SW trigger */
//	ADCPC0bits.IRQEN0	= 1;		  /* Enable the interrupt	*/
//    
//    /* Set up the conversion rate (sampling rate) */
//    // ADCON3              = 0x0C04;   // Sample time = 12 Tad = 138.89 ns @ 18 MIPS -> 1/(12 * 138/89) = 600 ksps
//	
//	ADCONbits.ADON 	    = 1;        /* Start the ADC module	*/	
//			
//	/* Set up the Interrupts */
//	
//	IFS0bits.ADIF       = 0;        /* Clear AD Interrupt Flag */	
//	IPC2bits.ADIP       = 4;        /* Set ADC Interrupt Priority */
//	IEC0bits.ADIE       = 1;        /* Enable the ADC Interrupt */
//	
//	ADCPC0bits.SWTRG0   = 1;        /* Trigger the Conversion Pair 0 */	
//	
////	while (1)
////	{
////		while(ADCPC0bits.PEND0);    /* Wait for the 2nd conversion to
////		                               complete	*/
////		channel1Result 	= ADCBUF1;  /* Read the result of the second
////		                               conversion	*/	
////		ADCPC0bits.SWTRG0	= 1;    /* Trigger another conversion */		
////        
////	}
//}
//
//void __attribute__ ((interrupt, no_auto_psv)) _ADCInterrupt(void)
//{
//	/* AD Conversion complete early interrupt handler */
//	
////	int channel0Result;
//	
//    a1 = ADCBUF0;
//    a2 = ADCBUF1;
//    
//	IFS0bits.ADIF       = 0;        /* Clear ADC Interrupt Flag */
////	channel0Result      = ADCBUF0;  /* Get the conversion result */
////	ADSTATbits.P0RDY    = 0;        /* Clear the ADSTAT bits */	
//}
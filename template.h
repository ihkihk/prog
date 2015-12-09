/*****************************************************************************
*
* @copyright (c) 2014 ETEL S.A. All rights reserved.
*
* This software is provided "AS IS" without a warranty or representations of 
* any kind. ALL EXPRESS OR IMPLIED CONDITIONS, REPRESENTATIONS AND WARRANTIES, 
* INCLUDING ANY IMPLIED WARRANTY OF MERCHANTABILITY, FITNESS FOR A PARTICULAR 
* PURPOSE OR NON-INFRINGEMENT ARE HEREBY EXCLUDED. ETEL AND ITS LICENSORS SHALL
* NOT BE LIABLE FOR ANY DAMAGES SUFFERED BY LICENSEE AS A RESULT OF USING, 
* MODIFYING OR DISTRIBUTING THE SOFTWARE OR ITS DERIVATIVES. IN NO EVENT WILL 
* ETEL OR ITS LICENSORS BE LIABLE FOR ANY LOST REVENUE, PROFIT OR DATA, OR FOR 
* DIRECT, INDIRECT, SPECIAL, CONSEQUENTIAL, INCIDENTAL OR PUNITIVE DAMAGES, 
* HOWEVER CAUSED AND REGARDLESS OF THE THEORY OF LIABILITY, ARISING OUT OF THE 
* USE OF OR INABILITY TO USE SOFTWARE, EVEN IF ETEL HAS BEEN ADVISED OF THE 
* POSSIBILITY OF SUCH DAMAGES. THE ENTIRE RISK ARISING OUT OF USE, PERFORMANCE 
* OR NON-PERFORMANCE OF THE SOFTWARE REMAINS WITH THE CUSTOMER. IF ETEL SHOULD 
* NEVERTHELESS BE FOUND LIABLE, WHETER DIRECTLY OR INDRECTLY, FOR ANY LOSS, 
* DAMAGE OR INJURY ARISING UNDER THIS AGREEMENT OR OTHERWISE, REGARDLESS OF 
* CAUSE OR ORIGIN, ON ANY BASIS WHATSOEVER, ITS TOTAL MAXIMUM LIABILITY IS 
* LIMITED TO CHF 100.000 WHICH WILL BE THE COMPLETE AND EXCLUSIVE REMEDY 
* AGAINST ETEL.
*
* This software is in particular not designed or intended .for use in on-line 
* control of aircraft, air traffic, aircraft navigation or aircraft 
* communications; or in the design, construction, Operation or maintenance of
* any nuclear facility. Licensee represents and warrants that it will not use
* or redistribute the Software for such purposes. 
*
*****************************************************************************/
/****************************************************************************/
/**
*
* @file xemacps_example_intr_dma.c
* 
* @brief Implements examples that utilize the EmacPs's interrupt driven DMA
* packet transfer mode to send and receive frames.
* 
* @details
* These examples demonstrate:
*
* - How to perform simple send and receive.
* - Interrupt
* - Error handling
* - Device reset
*
* Functional guide to example:
*
* - EmacPsDmaSingleFrameIntrExample demonstrates the simplest way to send and
*   receive frames in in interrupt driven DMA mode.
*
* - EmacPsErrorHandler() demonstrates how to manage asynchronous errors.
*
* - EmacPsResetDevice() demonstrates how to reset the driver/HW without
*   loosing all configuration settings.
*
* NOTE:
* Define PEEP in xemacps_example.h to run the example on a PEEP board.
*
* LANGUAGE:
* PLATFORM:
* COMPILER:
*
* CONFIGURATION DEFINES:
*
* @author IKA <ikassamakov@etel.ch>
* 
* @date Created 2014-07-07
* 
*****************************************************************************/



/****************************************************************************/
/******************************** INCLUDES **********************************/
/****************************************************************************/

// Other project's headers

// Third-party lib headers

// System-wide header



/****************************************************************************/
/******************************* PUBLIC API *********************************/
/****************************************************************************/


/************************** Constants and Macros ****************************/

/*
 * The following constants map to the XPAR parameters created in the
 * xparameters.h file. They are defined here such that a user can easily
 * change all the needed parameters in one place.
 */
 
 #define PI 3.14

 
/**************************** Type Declarations *****************************/

typedef int a;


/************************** Variable Definitions ****************************/

/*
 * Counters to be incremented by callbacks
 */
extern int aVar;	/* Frames that have been received */


/*************************** Function Prototypes ****************************/

/*
 * Interrupt setup and Callbacks for examples
 */
int func();

/* EOF vim: */

/****************************************************************************/
/*                          MODIFICATION HISTORY                            */
/****************************************************************************/
/*
* <pre>
* MODIFICATION HISTORY:
*
* Ver   Who  Date     Changes
* ----- ---- -------- -------------------------------------------------------
* 1.00a wsy  01/10/10 First release
* 1.00a asa  11/25/11 The cache disable routines are removed. So now both
*		      I-cache and D-cache are enabled. The array RxBuffer is
*		      removed to avoid an extra copy from RxBuffer to RxFrame.
*		      Now the address of RxFrame is submitted to the Rx BD
*		      instead of the address of RxBuffer.
*		      In function EmacPsDmaSingleFrameIntrExample, BdRxPtr
*		      is made as a pointer instead of array of pointers. This
*		      is done since on the Rx path we now submit a single BD
*		      instead of all 32 BDs. Because of this change, relevant
*		      changes are made throughout the function
*		      EmacPsDmaSingleFrameIntrExample.
* </pre>
*/
/****************************************************************************/
/*                SW Configuration Management (ClearCase)                   */
/****************************************************************************/
/*
$CC_KEYWORD_EXPAND$
*/

/* Rules:
   - comments end at column 80
   - only spaces, and no tabs, tab is 4 spaces
   - comments parsable by JSDoc
   - 'global' comment at beginning used by C9.io
*/

/*******************************************************************************
 * @file       Auxiliary functions used by the SVG viz engine
 * @name       drawPrimitives.js
 * Project     DATAN P6
 * @author     Ivailo Kassamakov (c) 2016
 * Created     15-Jul-2016
 * Last change
 * @version    2.3
 * @license    MIT
 * Standard    ECMA-2015
 * Notes
 ******************************************************************************/

/**
 * @license
 * Copyright (c) 2015 Example Corporation Inc.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */
 
"use strict";

/* global d3, View, dbgRect, page0Ctrl, page1Ctrl, page2Ctrl, drawTextButton */

/**
 * Draw SVG clickable button with a centered & wrapped text inside.
 *
 * Inputs:
 * @arg {(string|string[]) parent - A d3-selected object to contain the button
 * @arg {number} x - number: SVG x-coordinate in user space (i.e. px) of the 
 *     upper right corner
 * @arg {number} [y=0]
 * @arg {drawButton~clickCb} cb - function to call when the button is clicked
 *
 * @return None
 *
 * Notes:
 *     The text inside of the button will be automatically wrapped.
 *     The button can be styled by CSS-selecting ".<cls> rect" and ".<cls> text"
 *
 * @version 1.2.3
 */
function drawButton(parent, x, y, cb) {
	// # >>> Level 1 comment
	
	// ## >>> Level 2 comment
	
	// Single line comment
	code();
	
	/*
	 * Block comment
	 */
	code();
	
	// ## <<< Level 2 comment
	// # <<< Level 1 comment
	
}; // end function drawButton(...)

/**
 * This callback is displayed as part of the Requester class.
 * @callback drawButton~clickCb
 * @param {event}  event
 * @param {Object} eventTarget
 */
 
/******************************************************************************/

 
/* EOF */
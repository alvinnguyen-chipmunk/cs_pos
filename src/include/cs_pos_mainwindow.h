/*******************************************************************************
 *  (C) Copyright 2017 Chipmunk Solutions Co., Ltd. , All rights reserved      *
 *                                                                             *
 *  This source code and any compilation or derivative thereof is the sole     *
 *  property of Chipmunk Solutions Co., Ltd. and is provided pursuant to a     *
 *  Software License Agreement.  This code is the proprietary information      *
 *  of Chipmunk Solutions Co., Ltd and is confidential in nature.  Its use and *
 *  dissemination by any party other than Chipmunk Solutions Co., Ltd is       *
 *  strictly limited by the confidential information provisions of the         *
 *  Agreement referenced above.                                                *
 ******************************************************************************/

/** @file cs_pos_mainwindow.h
 *  @brief Function prototypes for the main windows of POS application of chipmunk solutions
 *
 *  This contains the prototypes for the main windows of POS application of chipmunk solutions
 *  eventually any macros, constants, or global variables will need.
 *
 *  @author 	Alvin Nguyen (alvin.nguyen@styl.solutions)
 *  @author 	Khuong Nguyen (khuongnguyen00331@gmail.com)
 *  @date      	10/12/2017
 *  @bug 		No known bugs.
 *  @Copyright	GNU Public License.
 */

#ifndef CS_POS_MAINWINDOW_H_INCLUDED
#define CS_POS_MAINWINDOW_H_INCLUDED
#ifdef __cplusplus
extern "C"
{
#endif
/********** Include section ***************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <gtk/gtk.h>
#include <glib.h>

#include "common/cs_common_console.h"

/********** Constant and compile switch definition section ********************/
/********** Type definition section *******************************************/
/********** Macro definition section*******************************************/
/********** Function declaration section **************************************/

/** @brief Declare function which initialize all objects of main window.
     *
     *  The function which initialize all objects of main window.
     *  Such as widgets, signal, callback routine, ...
     *
     *  @param  None
     *
     *  @return CS_POS_SUCCESS: If success.
     *  @return CS_POS_FAILURE: If failure.
     */
CS_POS_RETVALUE cs_pos_mainwindow_init(void);

/** @brief Declare function which finalize all objects of main window.
     *
     *  The function which finalize all objects of main window.
     *  Such as widgets, signal, callback routine, ...
     *
     *  @param  None
     *
     *  @return None.
     */
void cs_pos_mainwindow_finalize(void);

/** @brief Declare function which show main window.
     *
     *  The function which show main window.
     *  Such as widgets, signal, callback routine, ...
     *
     *  @param  None
     *
     *  @return None.
     */
void cs_pos_mainwindow_show (void);

#endif // CS_POS_MAINWINDOW_H_INCLUDED
#ifdef __cplusplus
}
#endif

/** @} */ // End of groupTemplateHello

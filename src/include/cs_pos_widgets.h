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

/** @file cs_pos_widgets.h
 *  @brief Function prototypes for the all widgets of POS application of chipmunk solutions.
 *
 *  This contains the prototypes for the all widgets of POS application of chipmunk solutions
 *  eventually any macros, constants, or global variables will need.
 *
 *  @author 	Alvin Nguyen (alvin.nguyen@styl.solutions)
 *  @author 	Khuong Nguyen (khuongnguyen00331@gmail.com)
 *  @date      	10/12/2017
 *  @bug 		No known bugs.
 *  @Copyright	GNU Public License.
 */

#ifndef CS_POS_WIDGETS_H_INCLUDED
#define CS_POS_WIDGETS_H_INCLUDED
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
extern GtkBuilder * cs_pos_builder;
/********** Type definition section *******************************************/
/********** Macro definition section*******************************************/
#ifndef CS_POS_UI_LOCATION
    #define CS_POS_UI_LOCATION  "cs_pos.ui"
#endif // CS_POS_UI_LOCATION

#define CS_GET_WIDGET(widget_name)  gtk_builder_get_object (cs_pos_builder, widget_name);

#define CS_MAINWINDOW           "cs_mainwindow"

/********** Function declaration section **************************************/

/** @brief Declare function which initialize widgets and builder.
     *
     *  The function which initialize widgets and builder
     *
     *  @param None
     *
     *  @return CS_POS_SUCCESS If success.
     *  @return CS_POS_FAILURE If failure.
     */
CS_POS_RETVALUE cs_pos_widgets_init (void);

/** @brief Declare function which finalize widgets and builder.
     *
     *  The function which finalize widgets and builder
     *
     *  @param None
     *
     *  @return None
     */
void cs_pos_widgets_finalize (void);

#endif // CS_POS_WIDGETS_H_INCLUDED
#ifdef __cplusplus
}
#endif

/** @} */ // End of groupTemplateHello

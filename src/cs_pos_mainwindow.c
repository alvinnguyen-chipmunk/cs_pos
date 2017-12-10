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

/** @file cs_pos_mainwindow.c
 *  @brief The main windows of POS application of chipmunk solutions.
 *
 *  The main windows of POS application of chipmunk solutions.
 *
 *  @author 	Alvin Nguyen (alvin.nguyen@styl.solutions)
 *  @author 	Khuong Nguyen (khuongnguyen00331@gmail.com)
 *  @date      	00/12/2017
 *  @bug	No known bugs.
 *  @Copyright	GNU Public License.
 */

#ifdef __cplusplus
extern "C"
{
#endif

/********** Include section ***************************************************/
#include "cs_pos_mainwindow.h"
#include "cs_pos_widgets.h"

extern void cs_pos_main_quit (void);

/********** Local Constant and compile switch definition section **************/
/********** Local Type definition section *************************************/
/********** Local Macro definition section ************************************/
/********** Local (static) variable definition ********************************/
/********** Local (static) function declaration section ***********************/
/********** Local function definition section *********************************/
/********** Global function definition section ********************************/

CS_POS_RETVALUE cs_pos_mainwindow_init(void)
{
    CS_DEBUG_0();
    GtkWidget * main_window = CS_GET_WIDGET(CS_MAINWINDOW);

    gtk_window_set_title (GTK_WINDOW (main_window), "Chipmunk POS");
    gtk_window_maximize (GTK_WINDOW (main_window));
    g_signal_connect (main_window, "destroy", G_CALLBACK (cs_pos_main_quit), NULL);

    return CS_POS_SUCCESS;
}

void cs_pos_mainwindow_finalize(void)
{
    CS_DEBUG_0();
}

void cs_pos_mainwindow_show (void)
{
    GtkWidget * main_window = CS_GET_WIDGET(CS_MAINWINDOW);

    gtk_widget_show (main_window);
}

#ifdef __cplusplus
}
#endif
/** @} */ // end of groupTemplate

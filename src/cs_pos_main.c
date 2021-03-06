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

/** @file cs_pos_main.c
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
#include <stdio.h>
#include <stdlib.h>

#include "common/cs_common_console.h"
#include "cs_pos_main.h"
#include "cs_pos_widgets.h"
#include "cs_pos_mainwindow.h"

/********** Local Constant and compile switch definition section **************/
/********** Local Type definition section *************************************/
/********** Local Macro definition section ************************************/
/********** Local (static) variable definition ********************************/
/********** Local (static) function declaration section ***********************/
/********** Local function definition section *********************************/
/********** Global function definition section ********************************/
int
main (int argc, char *argv[])
{
    CS_INFO("Start POS application.");
    CS_SHOW("Start POS application.");
    CS_DEBUG_0();
    CS_DEBUG("Start POS application.");

    CS_DEBUG("CS_POS_UI_LOCATION: %s", CS_POS_UI_LOCATION);

    CS_POS_RETVALUE ret_value = CS_POS_FAILURE;

    /* ================================= INITIALIZE ================================= */
    #if 1
    /* Initialize GTK basic object */
    gtk_init (NULL, NULL);

    /* Initialize widgets and builder */
    cs_pos_widgets_init();
    if(ret_value == CS_POS_FAILURE)
    {
        CS_INFO("Initialize widgets success.");
    }
    else
    {
        CS_INFO("Initialize widgets failure.");
    }

    /* Initialize main window */
    ret_value = cs_pos_mainwindow_init();
    if(ret_value == CS_POS_FAILURE)
    {
        CS_INFO("Initialize main window success.");
    }
    else
    {
        CS_INFO("Initialize main window failure.");
    }


    /* ================================= RUN ======================================== */

    /* Show main window */
    cs_pos_mainwindow_show ();

    /* main loop */
    gtk_main ();

    /* ================================= FINALIZE =================================== */

    cs_pos_main_quit (NULL, NULL);

    #endif // 0

    return EXIT_SUCCESS;
}

void
cs_pos_main_quit (GtkWidget *object, gpointer user_data)
{
    /* Finalize main window */
    cs_pos_mainwindow_finalize();

    /* Finalize widgets and builder */
    cs_pos_widgets_finalize();

    /* quit main loop */
    gtk_main_quit();
}
#ifdef __cplusplus
}
#endif
/** @} */ // end of groupTemplate

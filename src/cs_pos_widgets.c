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

/** @file cs_pos_widgets.c
 *  @brief Implement all widgets of POS application of chipmunk solutions.
 *
 *  Implement all widgets of POS application of chipmunk solutions.
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
#include "cs_pos_widgets.h"

/********** Local Constant and compile switch definition section **************/
/********** Local Type definition section *************************************/
/********** Local Macro definition section ************************************/
/********** Local (static) variable definition ********************************/
GtkBuilder * cs_pos_builder = NULL;

/********** Local (static) function declaration section ***********************/
/********** Local function definition section *********************************/
/********** Global function definition section ********************************/

CS_POS_RETVALUE
cs_pos_widgets_init (void)
{
    CS_DEBUG_0();

    guint ret_value = 0;
    /* Construct a GtkBuilder instance and load our UI description */
    cs_pos_builder = gtk_builder_new_from_file (CS_POS_UI_LOCATION);
    if(cs_pos_builder == NULL)
        return CS_POS_FAILURE;

    return CS_POS_SUCCESS;
}

void
cs_pos_widgets_finalize (void)
{
    CS_DEBUG_0();
}

#ifdef __cplusplus
}
#endif
/** @} */ // end of groupTemplate

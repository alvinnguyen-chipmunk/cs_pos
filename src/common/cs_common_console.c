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

/**
 *  @file   cs_common_console.h
 *  @brief  Some common utility methods.
 *
 *  This contains the prototypes for the some common utility methods.
 *
 *  @author 	Alvin Nguyen (alvin.nguyen@styl.solutions)
 *  @author 	Khuong Nguyen (khuongnguyen00331@gmail.com)
 *  @date      	10/12/2017
 *  @bug 		No known bugs.
 *  @Copyright	GNU Public License.
 */

/********** Include section ***************************************************/
#include "common/cs_common_console.h"

/********** Include section ***************************************************/
/********** Local Constant and compile switch definition section **************/
/********** Local Type definition section *************************************/
/********** Local Macro definition section ************************************/
/********** Local (static) variable definition ********************************/
/********** Local (static) function declaration section ***********************/
/********** Local function definition section *********************************/
/********** Global function definition section ********************************/

void
cs_common_console_print(gint i_error, gchar * s_format, ...)
{
    if (i_error == 0)
        if(getenv("CS_DEBUG")==NULL)
            return;

    va_list args;
    va_start(args, s_format);
    vprintf(s_format, args);
    va_end(args);
}

/*@}*/

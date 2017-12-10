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
 *  @brief  Function prototypes for the some common utility methods..
 *
 *  This contains the prototypes for the ome common utility methods..
 *
 *  @author 	Alvin Nguyen (alvin.nguyen@styl.solutions)
 *  @author 	Khuong Nguyen (khuongnguyen00331@gmail.com)
 *  @date      	10/12/2017
 *  @bug 		No known bugs.
 *  @Copyright	GNU Public License.
 */

#ifndef CS_COMMON_CONSOLE_H_INCLUDED
#define CS_COMMON_CONSOLE_H_INCLUDED

#ifdef __cplusplus
extern "C"
{
#endif

/********** Include section ***************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <glib.h>

/********** Constant  and compile switch definition section *******************/
/********** Type definition section *******************************************/
typedef enum CS_POS_RETVALUE
{
    CS_POS_SUCCESS = 0,
    CS_POS_FAILURE = 1

}CS_POS_RETVALUE;

typedef enum CS_POS_ERROR
{
    CS_POS_ERROR_0 = 0,
    CS_POS_ERROR_1 = 1

}CS_POS_ERROR;

/********** Macro definition section ******************************************/
#define ANSI_COLOR_RED     "\x1b[1;31m"
#define ANSI_COLOR_GREEN   "\x1b[1;32m"
#define ANSI_COLOR_YELLOW  "\x1b[1;33m"
#define ANSI_COLOR_BLUE    "\x1b[1;34m"
#define ANSI_COLOR_MAGENTA "\x1b[1;35m"
#define ANSI_COLOR_CYAN    "\x1b[1;36m"
#define ANSI_COLOR_RESET   "\x1b[0m"

#ifndef PACKAGE_NAME
    #define PACKAGE_NAME    "Chipmunk"
#endif // PACKAGE_NAME

#define CS_RED_PRINT(format, ...)  \
    cs_common_console_print(0, "%s[ %s ]: " format " %s\n", ANSI_COLOR_RED, PACKAGE_NAME, ##__VA_ARGS__, ANSI_COLOR_RESET);
#define CS_GREEN_PRINT(format, ...)  \
    cs_common_console_print(0, "%s[ %s ]: " format " %s\n", ANSI_COLOR_GREEN, PACKAGE_NAME, ##__VA_ARGS__, ANSI_COLOR_RESET);
#define CS_YELLOW_PRINT(format, ...)  \
    cs_common_console_print(0, "%s[ %s ]: " format " %s\n", ANSI_COLOR_YELLOW, PACKAGE_NAME, ##__VA_ARGS__, ANSI_COLOR_RESET);
#define CS_BLUE_PRINT(format, ...)  \
    cs_common_console_print(0, "%s[ %s ]: " format " %s\n", ANSI_COLOR_BLUE, PACKAGE_NAME, ##__VA_ARGS__, ANSI_COLOR_RESET);
#define CS_MAGENTA_PRINT(format, ...)  \
    cs_common_console_print(0, "%s[ %s ]: " format " %s\n", ANSI_COLOR_MAGENTA, PACKAGE_NAME, ##__VA_ARGS__, ANSI_COLOR_RESET);
#define CS_CYAN_PRINT(format, ...)  \
    cs_common_console_print(0, "%s[ %s ]: " format " %s\n", ANSI_COLOR_CYAN, PACKAGE_NAME, ##__VA_ARGS__, ANSI_COLOR_RESET);

#define CS_RED_PRINT_FORCE(format, ...)  \
    cs_common_console_print(1, "%s[ %s ]: " format " %s\n", ANSI_COLOR_RED, PACKAGE_NAME, ##__VA_ARGS__, ANSI_COLOR_RESET);
#define CS_GREEN_PRINT_FORCE(format, ...)  \
    cs_common_console_print(1, "%s[ %s ]: " format " %s\n", ANSI_COLOR_GREEN, PACKAGE_NAME, ##__VA_ARGS__, ANSI_COLOR_RESET);
#define CS_YELLOW_PRINT_FORCE(format, ...)  \
    cs_common_console_print(1, "%s[ %s ]: " format " %s\n", ANSI_COLOR_YELLOW, PACKAGE_NAME, ##__VA_ARGS__, ANSI_COLOR_RESET);
#define CS_BLUE_PRINT_FORCE(format, ...)  \
    cs_common_console_print(1, "%s[ %s ]: " format " %s\n", ANSI_COLOR_BLUE, PACKAGE_NAME, ##__VA_ARGS__, ANSI_COLOR_RESET);
#define CS_MAGENTA_PRINT_FORCE(format, ...)  \
    cs_common_console_print(1, "%s[ %s ]: " format " %s\n", ANSI_COLOR_MAGENTA, PACKAGE_NAME, ##__VA_ARGS__, ANSI_COLOR_RESET);
#define CS_CYAN_PRINT_FORCE(format, ...)  \
    cs_common_console_print(1, "%s[ %s ]: " format " %s\n", ANSI_COLOR_CYAN, PACKAGE_NAME, ##__VA_ARGS__, ANSI_COLOR_RESET);

#ifdef __RELEASE__
#define __DEBUG__(format, ...)
#else
#define __DEBUG__(format, ...)  fprintf (stderr, format, ## __VA_ARGS__)
#endif // __RELEASE__
#define DEBUG(format, args...) __DEBUG__("[ %s ]: %s||%s():[%d] " format, PACKAGE_NAME, __FILE__,__FUNCTION__, __LINE__, ##args)


#define CS_DEBUG_0()            DEBUG("\n")
#define CS_DEBUG(format, ...)   DEBUG(format "\n", ##__VA_ARGS__)

#define CS_INFO(format, ...)    CS_GREEN_PRINT(format, ##__VA_ARGS__)
#define CS_SHOW(format, ...)    CS_BLUE_PRINT(format, ##__VA_ARGS__)
#define CS_ERROR(format, ...)   CS_RED_PRINT_FORCE(format, ##__VA_ARGS__)

/********** Function declaration section **************************************/

/** @brief Declare function which print information.
     *
     *  The function which print some information to console with color marker
     *
     *  @param i_error      0: for a error message; 1: others
     *  @param s_format     format of string will be effect when print out
     *
     *  @return None
     */
void cs_common_console_print(gint i_error, gchar * s_format, ...);

#ifdef __cplusplus
}
#endif
#endif // CS_COMMON_CONSOLE_H_INCLUDED
/*@}*/

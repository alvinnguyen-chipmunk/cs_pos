AC_INIT([CS_POS], [0.0.1], [khuong.linux@gmail.com])
AC_CONFIG_SRCDIR([configure.ac])

# Version information
CS_MAJOR_VERSION=0
CS_MINOR_VERSION=0
CS_MICRO_VERSION=1
CS_MICRO_VERSION_SUFFIX=
CS_VERSION=$CS_MAJOR_VERSION.$CS_MINOR_VERSION.$CS_MICRO_VERSION$CS_MICRO_VERSION_SUFFIX
CS_VERSION_INFO=`expr $CS_MAJOR_VERSION + $CS_MINOR_VERSION`:$CS_MICRO_VERSION:$CS_MINOR_VERSION
CS_VERSION_NUMBER=`expr $CS_MAJOR_VERSION \* 10000 + $CS_MINOR_VERSION \* 100 + $CS_MICRO_VERSION`

AC_SUBST(CS_MAJOR_VERSION)
AC_SUBST(CS_MINOR_VERSION)
AC_SUBST(CS_MICRO_VERSION)
AC_SUBST(CS_VERSION)
AC_SUBST(CS_VERSION_INFO)
AC_SUBST(CS_VERSION_NUMBER)
AC_SUBST(CS_VERSION_EXTRA)

VERSION=${CS_VERSION}

dnl Must come before AM_INIT_AUTOMAKE.

# Auxiliary files go "build-aux" directory
AC_CONFIG_AUX_DIR([build-aux])

AM_INIT_AUTOMAKE([-Wall subdir-objects])
AC_CONFIG_MACRO_DIR([m4])

AC_PROG_CC
AM_PROG_CC_C_O
AC_PROG_INSTALL
AC_PROG_LN_S

dnl ================================================================

# Checks for typedefs, structures, and compiler characteristics.
AC_TYPE_OFF_T
AC_TYPE_SIZE_T
AC_STRUCT_TM

## LIBUDEV checks
#udev_module="libudev"
#PKG_CHECK_MODULES(LIBUDEV, [$udev_module])
#AC_SUBST(LIBUDEV_CFLAGS)
#AC_SUBST(LIBUDEV_LIBS)
#LIBUDEV_VERSION=`$PKG_CONFIG --modversion ${udev_module}`

# Glib-2.0 checks
glib_modules="glib-2.0"
PKG_CHECK_MODULES([GLIB], [$glib_modules])
AC_SUBST(GLIB_CFLAGS)
AC_SUBST(GLIB_LIBS)
GLIB_VERSION=`$PKG_CONFIG --modversion ${glib_modules}`

# Gtk-3.0 checks
gtk_3_modules="gtk+-3.0"
PKG_CHECK_MODULES([GTK3], [$gtk_3_modules])
AC_SUBST(GTK3_CFLAGS)
AC_SUBST(GTK3_LIBS)
GTK3_VERSION=`$PKG_CONFIG --modversion ${gtk_3_modules}`

# Check MYSQL library
cssql_modules="cssql"
PKG_CHECK_MODULES([CSSQL], [$cssql_modules])
AC_SUBST(CSSQL_CFLAGS)
AC_SUBST(CSSQL_LIBS)
CSSQL_VERSION=`$PKG_CONFIG --modversion ${cssql_modules}`

dnl ================================================================

AC_ARG_ENABLE([debug],[  --enable-debug            Turn on print debug information to console.],
[case "${enableval}" in
	yes) debug=true ;;
	no)  debug=false ;;
	*) AC_MSG_ERROR([bad value ${enableval} for --enable-debug]) ;;
esac],[debug=false])
AM_CONDITIONAL([DEBUG], [test x$debug = xtrue])

dnl ================================================================
# Check allow compile document and check needed tool if document is enable.

AC_ARG_ENABLE([doc],
		AS_HELP_STRING([--disable-doc],
					   [Disable building (with Doxygen) and intalling API documentation @<:@default=auto@:@>]))

AS_IF([test "x$enable_doc" != "xno"],[AC_PATH_PROG([DOXYGEN], [doxygen])])
AS_IF([test "x$DOXYGEN" = "x"],
		[AS_IF([test "x$enable_doc" = "xyes"],
			[AC_MSG_ERROR([You need Doxygen to build API documentation])
		])
     ])
AM_CONDITIONAL([CS_DOC], [test "x$DOXYGEN" != "x"])

AC_PATH_PROG([GIT], [git])
AM_CONDITIONAL([CS_GIT], [test "x$GIT" != "x"])

dnl ================================================================

AC_CONFIG_FILES([ Makefile src/Makefile ])
AC_OUTPUT([])


dnl ================================================================

echo "----------------------------------------------------------------"
echo "----------------------------------------------------------------"
echo ""
echo "Install CS_SQL_QUERY in     : ${prefix}"
echo ""
echo "Using GLIB-2.0 version          : ${GLIB_VERSION}"
echo "Using GTK+3.0 version           : ${GTK3_VERSION}"
echo "Using CSSQL version             : ${CSSQL_VERSION}"
echo ""
echo "Configuration is done OK."
echo ""

######################### CS COMMON VARIABLE ###########################
if DEBUG
DEBUG_CFLAGS = -g -ggdb
else
DEBUG_CFLAGS =
endif

CS_UI = -DCS_POS_UI_LOCATION=\""$(DESTDIR)/$(pkgdatadir)/cs_pos.ui"\"

CS_INCLUDE_FILES = 	include/cs_pos_main.h		\
			include/cs_pos_mainwindow.h	\
			include/cs_pos_widgets.h	\
			include/common/cs_common_console.h

CS_SOURCE_FILES = 	common/cs_common_console.c	\
			cs_pos_main.c			\
			cs_pos_mainwindow.c		\
			cs_pos_widgets.c

CS_SOURCES = ${CS_INCLUDE_FILES} ${CS_SOURCE_FILES}

CS_CPPFLAGS = 

CS_CFLAGS = $(DEBUG_CFLAGS) -std=c99 -D_BSD_SOURCE -D_DEFAULT_SOURCE -I$(srcdir)/include 	\
	    $(CS_UI)										\
	    $(GLIB_CFLAGS) $(GTK3_CFLAGS)

#CS_LDFLAGS = -version-info @CS_VERSION_INFO@

CS_LDADD = $(GLIB_LIBS) $(GTK3_LIBS)

######################## CS POS APPLICATION ##########################

bin_PROGRAMS = cs_pos
cs_pos_SOURCES = $(CS_SOURCES)
cs_pos_CPPFLAGS = $(CS_CPPFLAGS)
cs_pos_CFLAGS = $(CS_CFLAGS)
cs_pos_LDADD = $(CS_LDADD)
cs_pos_LDFLAGS = $(CS_LDFLAGS)

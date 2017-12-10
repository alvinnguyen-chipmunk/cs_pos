## Process this file with automake to produce Makefile.in
ACLOCAL_AMFLAGS = -I m4

SUBDIRS = src

EXTRA_DIST = autogen.sh INSTALL

# ============= Document and ChangeLog =============== #

dist_doc_DATA = AUTHORS COPYING NEWS README.md ChangeLog

MAINTAINERCLEANFILES = ChangeLog

ChangeLog: $(wildcard $(srcdir)/.git/logs/HEAD)
	
if CS_GIT
	-cd $(srcdir) && git log > $(abs_builddir)/$(@)-tmp
	test -s $(@)-tmp && mv $(@)-tmp $(@)
	-rm -f $(@)-tmp
endif
	test -e $(@) || touch $(@)

## Process this file with automake to produce Makefile.in
ACLOCAL_AMFLAGS = -I m4

SUBDIRS = src

EXTRA_DIST = autogen.sh INSTALL

BUILT_SOURCES = ${builddir}/data/cs_pos.ui

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

# Compile rule for user interface (ui) file
${builddir}/data/cs_pos.ui: $(top_srcdir)/data/cs_pos.ui.in
	${MKDIR_P} ${builddir}/data
	cp $(top_srcdir)/data/cs_pos.ui.in ${builddir}/data/cs_pos.ui

install-data-local: install-data-ui-only
	@$(NORMAL_INSTALL)

# Install rule for user interface (ui) file
install-data-ui-only:
	${MKDIR_P} $(DESTDIR)$(pkgdatadir)
	for file in $(builddir)/data/*; do					\
		if test -f $$file; then						\
			$(INSTALL_DATA) $$file $(DESTDIR)$(pkgdatadir)/;	\
		fi								\
        done

# Uninstall rule for user interface (ui) file
uninstall-local:
	@$(NORMAL_UNINSTALL)
	${RM} $(DESTDIR)$(pkgdatadir)

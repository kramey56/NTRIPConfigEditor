#############################################################################
# Makefile for building: NTRIPConfigEditor
# Generated by qmake (2.01a) (Qt 4.7.4) on: Sun Oct 30 15:36:56 2011
# Project:  NTRIPConfigEditor.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile NTRIPConfigEditor.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -g -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -I.
LINK          = g++
LFLAGS        = 
LIBS          = $(SUBLIBS)  -L/usr/lib/i386-linux-gnu -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		editmainwindow.cpp \
		iniparser.c \
		dictionary.c moc_editmainwindow.cpp \
		qrc_configEdit.cpp
OBJECTS       = main.o \
		editmainwindow.o \
		iniparser.o \
		dictionary.o \
		moc_editmainwindow.o \
		qrc_configEdit.o
DIST          = /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		NTRIPConfigEditor.pro
QMAKE_TARGET  = NTRIPConfigEditor
DESTDIR       = 
TARGET        = NTRIPConfigEditor

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_editmainwindow.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: NTRIPConfigEditor.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/g++.conf \
		/usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/debug.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/i386-linux-gnu/libQtGui.prl \
		/usr/lib/i386-linux-gnu/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile NTRIPConfigEditor.pro
/usr/share/qt4/mkspecs/common/g++.conf:
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/debug.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/i386-linux-gnu/libQtGui.prl:
/usr/lib/i386-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ CONFIG+=debug -o Makefile NTRIPConfigEditor.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/NTRIPConfigEditor1.0.0 || $(MKDIR) .tmp/NTRIPConfigEditor1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/NTRIPConfigEditor1.0.0/ && $(COPY_FILE) --parents editmainwindow.h iniparser.h dictionary.h .tmp/NTRIPConfigEditor1.0.0/ && $(COPY_FILE) --parents configEdit.qrc .tmp/NTRIPConfigEditor1.0.0/ && $(COPY_FILE) --parents main.cpp editmainwindow.cpp iniparser.c dictionary.c .tmp/NTRIPConfigEditor1.0.0/ && $(COPY_FILE) --parents editmainwindow.ui .tmp/NTRIPConfigEditor1.0.0/ && (cd `dirname .tmp/NTRIPConfigEditor1.0.0` && $(TAR) NTRIPConfigEditor1.0.0.tar NTRIPConfigEditor1.0.0 && $(COMPRESS) NTRIPConfigEditor1.0.0.tar) && $(MOVE) `dirname .tmp/NTRIPConfigEditor1.0.0`/NTRIPConfigEditor1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/NTRIPConfigEditor1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_editmainwindow.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_editmainwindow.cpp
moc_editmainwindow.cpp: iniparser.h \
		dictionary.h \
		editmainwindow.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) editmainwindow.h -o moc_editmainwindow.cpp

compiler_rcc_make_all: qrc_configEdit.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_configEdit.cpp
qrc_configEdit.cpp: configEdit.qrc \
		HGPS_Logo.bmp
	/usr/bin/rcc -name configEdit configEdit.qrc -o qrc_configEdit.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_editmainwindow.h
compiler_uic_clean:
	-$(DEL_FILE) ui_editmainwindow.h
ui_editmainwindow.h: editmainwindow.ui
	/usr/bin/uic-qt4 editmainwindow.ui -o ui_editmainwindow.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

main.o: main.cpp editmainwindow.h \
		iniparser.h \
		dictionary.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

editmainwindow.o: editmainwindow.cpp editmainwindow.h \
		iniparser.h \
		dictionary.h \
		ui_editmainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o editmainwindow.o editmainwindow.cpp

iniparser.o: iniparser.c iniparser.h \
		dictionary.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o iniparser.o iniparser.c

dictionary.o: dictionary.c dictionary.h
	$(CC) -c $(CFLAGS) $(INCPATH) -o dictionary.o dictionary.c

moc_editmainwindow.o: moc_editmainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_editmainwindow.o moc_editmainwindow.cpp

qrc_configEdit.o: qrc_configEdit.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_configEdit.o qrc_configEdit.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:


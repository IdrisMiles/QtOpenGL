
QT       += core gui opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = qtOpenGL
DESTDIR = ./bin
TEMPLATE = app


SOURCES += $$PWD/src/*.cpp
HEADERS  += $$PWD/include/*.h
OTHER_FILES += shader/*

INCLUDEPATH += $$PWD/include /usr/local/include /usr/include

LIBS += -L/usr/local/lib -L/usr/lib -lGL -lGLU -lGLEW

OBJECTS_DIR = ./obj
MOC_DIR = ./moc
FORMS    += ./form/mainwindow.ui

UI_DIR += ./ui

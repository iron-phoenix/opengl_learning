TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    display.cpp \
    shader.cpp

LIBS += -lGL
LIBS += -lGLEW
LIBS += -lSDL2

HEADERS += \
    display.h \
    shader.h

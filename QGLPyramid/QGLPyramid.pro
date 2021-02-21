TEMPLATE += app
QT += widgets

SOURCES += \
    main.cpp \
    OGLPyramid.cpp

HEADERS += \
    OGLPyramid.h

windows {
LIBS += -lopengl32
TARGET = ../OGLPyramid
}

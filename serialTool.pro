#-------------------------------------------------
#
# Project created by QtCreator 2017-12-05T10:06:49
#
#-------------------------------------------------

QT       += core gui printsupport svg


RC_ICONS = images/logo.ico

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = IMU_ARRAY
TEMPLATE = app
QMAKE_CXXFLAGS += -std=c++11

win32: DEFINES += WIN32 _WINDOWS _USE_MATH_DEFINES

win32:CONFIG(release, debug|release):    DEFINES += NDEBUG
else:win32:CONFIG(debug, debug|release): DEFINES += _DEBUG


INCLUDEPATH += ./qflightinstruments

SOURCES += main.cpp\
        mainwindow.cpp \
    workerthread.cpp \
    qcustomplot.cpp \


HEADERS  += mainwindow.h \
    workerthread.h \
    qcustomplot.h \
    defines.h \


FORMS    += mainwindow.ui


include(qextserialport/src/qextserialport.pri)

RESOURCES += \
    res.qrc

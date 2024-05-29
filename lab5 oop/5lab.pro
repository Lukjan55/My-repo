QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    addition.cpp \
    calculator.cpp \
    calculatorcontroller.cpp \
    division.cpp \
    ioccontainer.cpp \
    main.cpp \
    mainwindow.cpp \
    multiplication.cpp \
    operation.cpp \
    subtraction.cpp

HEADERS += \
    addition.h \
    calculator.h \
    calculatorcontroller.h \
    division.h \
    ioccontainer.h \
    mainwindow.h \
    multiplication.h \
    operation.h \
    subtraction.h

FORMS += \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    consulta.cpp \
    desenvolvedor.cpp \
    funcionarios.cpp \
    gerarrec.cpp \
    main.cpp \
    menu.cpp \
    paciente.cpp \
    receita.cpp \
    remedio.cpp \
    versao.cpp

HEADERS += \
    consulta.h \
    desenvolvedor.h \
    funcionarios.h \
    gerarrec.h \
    menu.h \
    paciente.h \
    receita.h \
    remedio.h \
    versao.h

FORMS += \
    consulta.ui \
    desenvolvedor.ui \
    funcionarios.ui \
    gerarrec.ui \
    menu.ui \
    paciente.ui \
    receita.ui \
    remedio.ui \
    versao.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

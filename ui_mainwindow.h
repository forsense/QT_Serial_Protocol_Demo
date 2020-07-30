/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton_connect;
    QLabel *label_port;
    QComboBox *comboBox_serial;
    QLabel *label_sta;
    QLabel *label_sta_v;
    QComboBox *comboBox_module;
    QPushButton *pushButton_Start_AHRS;
    QStackedWidget *stackedWidget;
    QWidget *page_9;
    QWidget *layoutWidget;
    QGridLayout *gridLayout_9;
    QLabel *label_accx;
    QLabel *label_gyrox;
    QLabel *label_roll;
    QLabel *label_null;
    QLabel *label_accy;
    QLabel *label_gyroy;
    QLabel *label_pitch;
    QLabel *label_normacc;
    QLabel *label_accz;
    QLabel *label_gyroz;
    QLabel *label_yaw;
    QLabel *label_temp;
    QWidget *page_11;
    QTextEdit *textEdit_CMD;
    QLabel *label_26;
    QTextEdit *textEdit_p1;
    QTextEdit *textEdit_p2;
    QTextEdit *textEdit_p3;
    QTextEdit *textEdit_p4;
    QTextEdit *textEdit_p5;
    QTextEdit *textEdit_p6;
    QPushButton *pushButton_Create_CMD;
    QLabel *label_29;
    QLabel *label_30;
    QLabel *label_33;
    QLabel *label_34;
    QLabel *label_35;
    QLabel *label_36;
    QPushButton *pushButton_Send_CMD;
    QLabel *label_52;
    QTextEdit *textEdit_cmd_id;
    QLabel *label_53;
    QComboBox *comboBox_baud;
    QLabel *label_port_2;
    QWidget *layoutWidget1;
    QGridLayout *gridLayout_13;
    QLabel *label_sta_16;
    QLabel *label_sta_sw;
    QLabel *label_sta_18;
    QLabel *label_sta_hw;
    QLabel *label_sta_board_ver;
    QLabel *label_sta_23;
    QLabel *label_sta_20;
    QLabel *label_sta_sn1;
    QLabel *label_sta_21;
    QLabel *label_sta_sn2;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1348, 856);
        MainWindow->setMouseTracking(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton_connect = new QPushButton(centralWidget);
        pushButton_connect->setObjectName(QStringLiteral("pushButton_connect"));
        pushButton_connect->setGeometry(QRect(450, 30, 101, 22));
        pushButton_connect->setStyleSheet(QLatin1String("QPushButton{color:rgb(0, 85, 255);\n"
"			border-color:rgb(122, 122, 122);\n"
"            border-width: 1px;\n"
"            border-style: solid;\n"
"			border-radius:5px;\n"
"			background-color:transparent;}\n"
"QPushButton:hover{color:rgb(0, 170, 0);}\n"
"\n"
"QPushButton:pressed{background-color:rgba(0, 170, 255,30);}"));
        label_port = new QLabel(centralWidget);
        label_port->setObjectName(QStringLiteral("label_port"));
        label_port->setGeometry(QRect(20, 30, 70, 20));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\256\213\344\275\223"));
        font.setPointSize(9);
        font.setBold(false);
        font.setWeight(50);
        label_port->setFont(font);
        label_port->setCursor(QCursor(Qt::PointingHandCursor));
        label_port->setStyleSheet(QStringLiteral("color:rgb(0, 85, 255);"));
        label_port->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        comboBox_serial = new QComboBox(centralWidget);
        comboBox_serial->setObjectName(QStringLiteral("comboBox_serial"));
        comboBox_serial->setGeometry(QRect(89, 30, 101, 22));
        comboBox_serial->setStyleSheet(QString::fromUtf8("\n"
"QComboBox {\n"
"        height: 25px;\n"
"        border-radius: 4px;  \n"
"		background: rgb(188, 200, 191,100);  \n"
"		font: 11pt \"\345\256\213\344\275\223\";\n"
"		color:rgb(55, 146, 200);\n"
"		\n"
"}\n"
"QComboBox::drop-down {\n"
"        width:20px;\n"
"        border: none;\n"
"        background: transparent;\n"
"}\n"
"QComboBox::down-arrow {\n"
"        image: url(:/images/combobox_arrow_blue.png)\n"
"}\n"
"QComboBox::down-arrow:on {\n"
"        /**top: 1px;**/\n"
"}\n"
"\n"
""));
        label_sta = new QLabel(centralWidget);
        label_sta->setObjectName(QStringLiteral("label_sta"));
        label_sta->setGeometry(QRect(1169, 820, 111, 20));
        label_sta->setFont(font);
        label_sta->setCursor(QCursor(Qt::PointingHandCursor));
        label_sta->setStyleSheet(QStringLiteral("color:rgb(255, 0, 0)"));
        label_sta->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        label_sta_v = new QLabel(centralWidget);
        label_sta_v->setObjectName(QStringLiteral("label_sta_v"));
        label_sta_v->setGeometry(QRect(1300, 820, 20, 20));
        label_sta_v->setFont(font);
        label_sta_v->setCursor(QCursor(Qt::PointingHandCursor));
        label_sta_v->setPixmap(QPixmap(QString::fromUtf8(":/images/not_ok.png")));
        label_sta_v->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        comboBox_module = new QComboBox(centralWidget);
        comboBox_module->setObjectName(QStringLiteral("comboBox_module"));
        comboBox_module->setGeometry(QRect(20, 90, 131, 22));
        comboBox_module->setStyleSheet(QString::fromUtf8("\n"
"QComboBox {\n"
"        height: 25px;\n"
"        border-radius: 4px;  \n"
"		background: rgb(188, 200, 191,100);  \n"
"		font: 11pt \"\345\256\213\344\275\223\";\n"
"		color:rgb(55, 146, 200);\n"
"		\n"
"}\n"
"QComboBox::drop-down {\n"
"        width:20px;\n"
"        border: none;\n"
"        background: transparent;\n"
"}\n"
"QComboBox::down-arrow {\n"
"        image: url(:/images/combobox_arrow_blue.png)\n"
"}\n"
"QComboBox::down-arrow:on {\n"
"        /**top: 1px;**/\n"
"}\n"
"\n"
""));
        pushButton_Start_AHRS = new QPushButton(centralWidget);
        pushButton_Start_AHRS->setObjectName(QStringLiteral("pushButton_Start_AHRS"));
        pushButton_Start_AHRS->setGeometry(QRect(20, 750, 121, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Aharoni"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        pushButton_Start_AHRS->setFont(font1);
        pushButton_Start_AHRS->setStyleSheet(QLatin1String("QPushButton{color:rgb(0, 85, 255);\n"
"			border-color:rgb(122, 122, 122);\n"
"            border-width: 1px;\n"
"            border-style: solid;\n"
"			border-radius:5px;\n"
"			background-color:transparent;}\n"
"QPushButton:hover{color:rgb(0, 170, 0);}\n"
"\n"
"QPushButton:pressed{background-color:rgba(0, 170, 255,30);}"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(180, 100, 1081, 701));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(244, 247, 251, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(255, 255, 255, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(249, 251, 253, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(122, 123, 125, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(163, 165, 167, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush2);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush3);
        QBrush brush6(QColor(255, 255, 220, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        stackedWidget->setPalette(palette);
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        stackedWidget->setFont(font2);
        page_9 = new QWidget();
        page_9->setObjectName(QStringLiteral("page_9"));
        layoutWidget = new QWidget(page_9);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(240, 470, 691, 161));
        gridLayout_9 = new QGridLayout(layoutWidget);
        gridLayout_9->setSpacing(6);
        gridLayout_9->setContentsMargins(11, 11, 11, 11);
        gridLayout_9->setObjectName(QStringLiteral("gridLayout_9"));
        gridLayout_9->setContentsMargins(0, 0, 0, 0);
        label_accx = new QLabel(layoutWidget);
        label_accx->setObjectName(QStringLiteral("label_accx"));
        QFont font3;
        font3.setPointSize(10);
        font3.setBold(true);
        font3.setWeight(75);
        label_accx->setFont(font3);

        gridLayout_9->addWidget(label_accx, 0, 0, 1, 1);

        label_gyrox = new QLabel(layoutWidget);
        label_gyrox->setObjectName(QStringLiteral("label_gyrox"));
        label_gyrox->setFont(font3);

        gridLayout_9->addWidget(label_gyrox, 0, 1, 1, 1);

        label_roll = new QLabel(layoutWidget);
        label_roll->setObjectName(QStringLiteral("label_roll"));
        label_roll->setFont(font3);

        gridLayout_9->addWidget(label_roll, 0, 2, 1, 1);

        label_null = new QLabel(layoutWidget);
        label_null->setObjectName(QStringLiteral("label_null"));
        label_null->setFont(font3);

        gridLayout_9->addWidget(label_null, 0, 3, 1, 1);

        label_accy = new QLabel(layoutWidget);
        label_accy->setObjectName(QStringLiteral("label_accy"));
        label_accy->setFont(font3);

        gridLayout_9->addWidget(label_accy, 1, 0, 1, 1);

        label_gyroy = new QLabel(layoutWidget);
        label_gyroy->setObjectName(QStringLiteral("label_gyroy"));
        label_gyroy->setFont(font3);

        gridLayout_9->addWidget(label_gyroy, 1, 1, 1, 1);

        label_pitch = new QLabel(layoutWidget);
        label_pitch->setObjectName(QStringLiteral("label_pitch"));
        label_pitch->setFont(font3);

        gridLayout_9->addWidget(label_pitch, 1, 2, 1, 1);

        label_normacc = new QLabel(layoutWidget);
        label_normacc->setObjectName(QStringLiteral("label_normacc"));
        label_normacc->setFont(font3);

        gridLayout_9->addWidget(label_normacc, 1, 3, 1, 1);

        label_accz = new QLabel(layoutWidget);
        label_accz->setObjectName(QStringLiteral("label_accz"));
        label_accz->setFont(font3);

        gridLayout_9->addWidget(label_accz, 2, 0, 1, 1);

        label_gyroz = new QLabel(layoutWidget);
        label_gyroz->setObjectName(QStringLiteral("label_gyroz"));
        label_gyroz->setFont(font3);

        gridLayout_9->addWidget(label_gyroz, 2, 1, 1, 1);

        label_yaw = new QLabel(layoutWidget);
        label_yaw->setObjectName(QStringLiteral("label_yaw"));
        label_yaw->setFont(font3);

        gridLayout_9->addWidget(label_yaw, 2, 2, 1, 1);

        label_temp = new QLabel(layoutWidget);
        label_temp->setObjectName(QStringLiteral("label_temp"));
        label_temp->setFont(font3);

        gridLayout_9->addWidget(label_temp, 2, 3, 1, 1);

        stackedWidget->addWidget(page_9);
        page_11 = new QWidget();
        page_11->setObjectName(QStringLiteral("page_11"));
        textEdit_CMD = new QTextEdit(page_11);
        textEdit_CMD->setObjectName(QStringLiteral("textEdit_CMD"));
        textEdit_CMD->setGeometry(QRect(200, 110, 631, 131));
        label_26 = new QLabel(page_11);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setGeometry(QRect(460, 80, 151, 31));
        textEdit_p1 = new QTextEdit(page_11);
        textEdit_p1->setObjectName(QStringLiteral("textEdit_p1"));
        textEdit_p1->setGeometry(QRect(350, 350, 91, 31));
        textEdit_p2 = new QTextEdit(page_11);
        textEdit_p2->setObjectName(QStringLiteral("textEdit_p2"));
        textEdit_p2->setGeometry(QRect(480, 350, 91, 31));
        textEdit_p3 = new QTextEdit(page_11);
        textEdit_p3->setObjectName(QStringLiteral("textEdit_p3"));
        textEdit_p3->setGeometry(QRect(610, 350, 91, 31));
        textEdit_p4 = new QTextEdit(page_11);
        textEdit_p4->setObjectName(QStringLiteral("textEdit_p4"));
        textEdit_p4->setGeometry(QRect(350, 400, 91, 31));
        textEdit_p5 = new QTextEdit(page_11);
        textEdit_p5->setObjectName(QStringLiteral("textEdit_p5"));
        textEdit_p5->setGeometry(QRect(480, 400, 91, 31));
        textEdit_p6 = new QTextEdit(page_11);
        textEdit_p6->setObjectName(QStringLiteral("textEdit_p6"));
        textEdit_p6->setGeometry(QRect(610, 400, 91, 31));
        pushButton_Create_CMD = new QPushButton(page_11);
        pushButton_Create_CMD->setObjectName(QStringLiteral("pushButton_Create_CMD"));
        pushButton_Create_CMD->setGeometry(QRect(350, 480, 121, 41));
        QFont font4;
        font4.setFamily(QStringLiteral("Aharoni"));
        font4.setPointSize(10);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_Create_CMD->setFont(font4);
        pushButton_Create_CMD->setStyleSheet(QLatin1String("QPushButton{color:rgb(0, 85, 255);\n"
"			border-color:rgb(122, 122, 122);\n"
"            border-width: 1px;\n"
"            border-style: solid;\n"
"			border-radius:5px;\n"
"			background-color:transparent;}\n"
"QPushButton:hover{color:rgb(0, 170, 0);}\n"
"\n"
"QPushButton:pressed{background-color:rgba(0, 170, 255,30);}"));
        label_29 = new QLabel(page_11);
        label_29->setObjectName(QStringLiteral("label_29"));
        label_29->setGeometry(QRect(300, 360, 31, 16));
        label_30 = new QLabel(page_11);
        label_30->setObjectName(QStringLiteral("label_30"));
        label_30->setGeometry(QRect(450, 360, 31, 16));
        label_33 = new QLabel(page_11);
        label_33->setObjectName(QStringLiteral("label_33"));
        label_33->setGeometry(QRect(580, 360, 31, 16));
        label_34 = new QLabel(page_11);
        label_34->setObjectName(QStringLiteral("label_34"));
        label_34->setGeometry(QRect(300, 410, 31, 16));
        label_35 = new QLabel(page_11);
        label_35->setObjectName(QStringLiteral("label_35"));
        label_35->setGeometry(QRect(450, 410, 31, 16));
        label_36 = new QLabel(page_11);
        label_36->setObjectName(QStringLiteral("label_36"));
        label_36->setGeometry(QRect(580, 410, 31, 16));
        pushButton_Send_CMD = new QPushButton(page_11);
        pushButton_Send_CMD->setObjectName(QStringLiteral("pushButton_Send_CMD"));
        pushButton_Send_CMD->setGeometry(QRect(550, 480, 121, 41));
        pushButton_Send_CMD->setFont(font4);
        pushButton_Send_CMD->setStyleSheet(QLatin1String("QPushButton{color:rgb(0, 85, 255);\n"
"			border-color:rgb(122, 122, 122);\n"
"            border-width: 1px;\n"
"            border-style: solid;\n"
"			border-radius:5px;\n"
"			background-color:transparent;}\n"
"QPushButton:hover{color:rgb(0, 170, 0);}\n"
"\n"
"QPushButton:pressed{background-color:rgba(0, 170, 255,30);}"));
        label_52 = new QLabel(page_11);
        label_52->setObjectName(QStringLiteral("label_52"));
        label_52->setGeometry(QRect(300, 320, 60, 16));
        textEdit_cmd_id = new QTextEdit(page_11);
        textEdit_cmd_id->setObjectName(QStringLiteral("textEdit_cmd_id"));
        textEdit_cmd_id->setGeometry(QRect(370, 270, 101, 31));
        label_53 = new QLabel(page_11);
        label_53->setObjectName(QStringLiteral("label_53"));
        label_53->setGeometry(QRect(300, 280, 51, 21));
        stackedWidget->addWidget(page_11);
        comboBox_baud = new QComboBox(centralWidget);
        comboBox_baud->setObjectName(QStringLiteral("comboBox_baud"));
        comboBox_baud->setGeometry(QRect(280, 30, 121, 22));
        comboBox_baud->setStyleSheet(QString::fromUtf8("\n"
"QComboBox {\n"
"        height: 25px;\n"
"        border-radius: 4px;  \n"
"		background: rgb(188, 200, 191,100);  \n"
"		font: 11pt \"\345\256\213\344\275\223\";\n"
"		color:rgb(55, 146, 200);\n"
"		\n"
"}\n"
"QComboBox::drop-down {\n"
"        width:20px;\n"
"        border: none;\n"
"        background: transparent;\n"
"}\n"
"QComboBox::down-arrow {\n"
"        image: url(:/images/combobox_arrow_blue.png)\n"
"}\n"
"QComboBox::down-arrow:on {\n"
"        /**top: 1px;**/\n"
"}\n"
"\n"
""));
        label_port_2 = new QLabel(centralWidget);
        label_port_2->setObjectName(QStringLiteral("label_port_2"));
        label_port_2->setGeometry(QRect(220, 30, 70, 20));
        label_port_2->setFont(font);
        label_port_2->setCursor(QCursor(Qt::PointingHandCursor));
        label_port_2->setStyleSheet(QStringLiteral("color:rgb(0, 85, 255);"));
        label_port_2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        layoutWidget1 = new QWidget(centralWidget);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 142, 141, 441));
        gridLayout_13 = new QGridLayout(layoutWidget1);
        gridLayout_13->setSpacing(6);
        gridLayout_13->setContentsMargins(11, 11, 11, 11);
        gridLayout_13->setObjectName(QStringLiteral("gridLayout_13"));
        gridLayout_13->setContentsMargins(0, 0, 0, 0);
        label_sta_16 = new QLabel(layoutWidget1);
        label_sta_16->setObjectName(QStringLiteral("label_sta_16"));
        label_sta_16->setFont(font);
        label_sta_16->setCursor(QCursor(Qt::PointingHandCursor));
        label_sta_16->setStyleSheet(QStringLiteral("color:rgb(255, 0, 0)"));
        label_sta_16->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_13->addWidget(label_sta_16, 0, 0, 1, 1);

        label_sta_sw = new QLabel(layoutWidget1);
        label_sta_sw->setObjectName(QStringLiteral("label_sta_sw"));
        label_sta_sw->setFont(font);
        label_sta_sw->setCursor(QCursor(Qt::PointingHandCursor));
        label_sta_sw->setStyleSheet(QStringLiteral("color:rgb(255, 0, 0)"));
        label_sta_sw->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_13->addWidget(label_sta_sw, 1, 0, 1, 1);

        label_sta_18 = new QLabel(layoutWidget1);
        label_sta_18->setObjectName(QStringLiteral("label_sta_18"));
        label_sta_18->setFont(font);
        label_sta_18->setCursor(QCursor(Qt::PointingHandCursor));
        label_sta_18->setStyleSheet(QStringLiteral("color:rgb(255, 0, 0)"));
        label_sta_18->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_13->addWidget(label_sta_18, 2, 0, 1, 1);

        label_sta_hw = new QLabel(layoutWidget1);
        label_sta_hw->setObjectName(QStringLiteral("label_sta_hw"));
        label_sta_hw->setFont(font);
        label_sta_hw->setCursor(QCursor(Qt::PointingHandCursor));
        label_sta_hw->setStyleSheet(QStringLiteral("color:rgb(255, 0, 0)"));
        label_sta_hw->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_13->addWidget(label_sta_hw, 3, 0, 1, 1);

        label_sta_board_ver = new QLabel(layoutWidget1);
        label_sta_board_ver->setObjectName(QStringLiteral("label_sta_board_ver"));
        label_sta_board_ver->setFont(font);
        label_sta_board_ver->setCursor(QCursor(Qt::PointingHandCursor));
        label_sta_board_ver->setStyleSheet(QStringLiteral("color:rgb(255, 0, 0)"));
        label_sta_board_ver->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_13->addWidget(label_sta_board_ver, 5, 0, 1, 1);

        label_sta_23 = new QLabel(layoutWidget1);
        label_sta_23->setObjectName(QStringLiteral("label_sta_23"));
        label_sta_23->setFont(font);
        label_sta_23->setCursor(QCursor(Qt::PointingHandCursor));
        label_sta_23->setStyleSheet(QStringLiteral("color:rgb(255, 0, 0)"));
        label_sta_23->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_13->addWidget(label_sta_23, 4, 0, 1, 1);

        label_sta_20 = new QLabel(layoutWidget1);
        label_sta_20->setObjectName(QStringLiteral("label_sta_20"));
        label_sta_20->setFont(font);
        label_sta_20->setCursor(QCursor(Qt::PointingHandCursor));
        label_sta_20->setStyleSheet(QStringLiteral("color:rgb(255, 0, 0)"));
        label_sta_20->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_13->addWidget(label_sta_20, 6, 0, 1, 1);

        label_sta_sn1 = new QLabel(layoutWidget1);
        label_sta_sn1->setObjectName(QStringLiteral("label_sta_sn1"));
        label_sta_sn1->setFont(font);
        label_sta_sn1->setCursor(QCursor(Qt::PointingHandCursor));
        label_sta_sn1->setStyleSheet(QStringLiteral("color:rgb(255, 0, 0)"));
        label_sta_sn1->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_13->addWidget(label_sta_sn1, 7, 0, 1, 1);

        label_sta_21 = new QLabel(layoutWidget1);
        label_sta_21->setObjectName(QStringLiteral("label_sta_21"));
        label_sta_21->setFont(font);
        label_sta_21->setCursor(QCursor(Qt::PointingHandCursor));
        label_sta_21->setStyleSheet(QStringLiteral("color:rgb(255, 0, 0)"));
        label_sta_21->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_13->addWidget(label_sta_21, 9, 0, 1, 1);

        label_sta_sn2 = new QLabel(layoutWidget1);
        label_sta_sn2->setObjectName(QStringLiteral("label_sta_sn2"));
        label_sta_sn2->setFont(font);
        label_sta_sn2->setCursor(QCursor(Qt::PointingHandCursor));
        label_sta_sn2->setStyleSheet(QStringLiteral("color:rgb(255, 0, 0)"));
        label_sta_sn2->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        gridLayout_13->addWidget(label_sta_sn2, 8, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        layoutWidget->raise();
        pushButton_connect->raise();
        label_port->raise();
        comboBox_serial->raise();
        label_sta->raise();
        label_sta_v->raise();
        comboBox_module->raise();
        pushButton_Start_AHRS->raise();
        stackedWidget->raise();
        comboBox_baud->raise();
        label_port_2->raise();

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "IMU61x\346\265\213\350\257\225\344\270\212\344\275\215\346\234\272", 0));
        pushButton_connect->setText(QApplication::translate("MainWindow", " \350\277\236\346\216\245", 0));
        label_port->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">\344\270\262\345\217\243\345\217\267\357\274\232</span></p></body></html>", 0));
        label_sta->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">\350\256\276\345\244\207\350\277\236\346\216\245\357\274\232</span></p></body></html>", 0));
        pushButton_Start_AHRS->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250AHRS", 0));
        label_accx->setText(QApplication::translate("MainWindow", "ACCX:  N/A", 0));
        label_gyrox->setText(QApplication::translate("MainWindow", "GYROX:  N/A", 0));
        label_roll->setText(QApplication::translate("MainWindow", "ROLL:  N/A", 0));
        label_null->setText(QString());
        label_accy->setText(QApplication::translate("MainWindow", "ACCY:  N/A", 0));
        label_gyroy->setText(QApplication::translate("MainWindow", "GYROY:  N/A", 0));
        label_pitch->setText(QApplication::translate("MainWindow", "PITCH:  N/A", 0));
        label_normacc->setText(QApplication::translate("MainWindow", "ACC_NORM:  N/A", 0));
        label_accz->setText(QApplication::translate("MainWindow", "ACCZ:  N/A", 0));
        label_gyroz->setText(QApplication::translate("MainWindow", "GYROZ  :N/A", 0));
        label_yaw->setText(QApplication::translate("MainWindow", "YAW:  N/A", 0));
        label_temp->setText(QApplication::translate("MainWindow", "TEMP:  N/A", 0));
        label_26->setText(QApplication::translate("MainWindow", "\345\221\275\344\273\244\347\224\237\346\210\220\345\231\250", 0));
        pushButton_Create_CMD->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220\345\221\275\344\273\244", 0));
        label_29->setText(QApplication::translate("MainWindow", "1", 0));
        label_30->setText(QApplication::translate("MainWindow", "2", 0));
        label_33->setText(QApplication::translate("MainWindow", "3", 0));
        label_34->setText(QApplication::translate("MainWindow", "4", 0));
        label_35->setText(QApplication::translate("MainWindow", "5", 0));
        label_36->setText(QApplication::translate("MainWindow", "6", 0));
        pushButton_Send_CMD->setText(QApplication::translate("MainWindow", "\345\217\221\351\200\201\345\221\275\344\273\244", 0));
        label_52->setText(QApplication::translate("MainWindow", "\345\217\202\346\225\260\357\274\232", 0));
        label_53->setText(QApplication::translate("MainWindow", "CMD ID\357\274\232", 0));
        label_port_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">BAUD\357\274\232</span></p></body></html>", 0));
        label_sta_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#0000ff;\">\345\233\272\344\273\266\347\211\210\346\234\254\357\274\232</span></p></body></html>", 0));
        label_sta_sw->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#0000ff;\">N/A</span></p></body></html>", 0));
        label_sta_18->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#0000ff;\">\347\241\254\344\273\266\347\211\210\346\234\254\357\274\232</span></p></body></html>", 0));
        label_sta_hw->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#0000ff;\">N/A</span></p></body></html>", 0));
        label_sta_board_ver->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#0000ff;\">N/A</span></p></body></html>", 0));
        label_sta_23->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#0000ff;\">\345\272\225\346\235\277\347\211\210\346\234\254\357\274\232</span></p></body></html>", 0));
        label_sta_20->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#0000ff;\">\345\272\217\345\210\227\345\217\267\357\274\232</span></p></body></html>", 0));
        label_sta_sn1->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600; color:#0000ff;\">N/A</span></p></body></html>", 0));
        label_sta_21->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
        label_sta_sn2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><br/></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

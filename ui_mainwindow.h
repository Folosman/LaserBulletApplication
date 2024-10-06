/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionhelp;
    QAction *actionme;
    QAction *actiongive;
    QAction *actionme_2;
    QAction *actionTA;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QLineEdit *transactionNumberLine;
    QLabel *label_2;
    QLabel *label_8;
    QLabel *label_5;
    QLineEdit *laserPowerLine;
    QLineEdit *logicalNumberLine;
    QLineEdit *capacityMagazineLine;
    QLineEdit *regimShootingLine;
    QLineEdit *addictionalSoundLine;
    QLabel *label;
    QSpacerItem *horizontalSpacer;
    QLabel *label_9;
    QLineEdit *voltageLine;
    QLineEdit *IdlineRifle;
    QLabel *label_10;
    QLabel *label_4;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_6;
    QFrame *line;
    QLineEdit *addictionalAmmoLine;
    QLabel *label_7;
    QLabel *label_3;
    QLineEdit *ammoLineCount;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *idkBtn;
    QMenuBar *menubar;
    QMenu *menudev_00_00_00_0;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(441, 678);
        actionhelp = new QAction(MainWindow);
        actionhelp->setObjectName(QString::fromUtf8("actionhelp"));
        actionme = new QAction(MainWindow);
        actionme->setObjectName(QString::fromUtf8("actionme"));
        actiongive = new QAction(MainWindow);
        actiongive->setObjectName(QString::fromUtf8("actiongive"));
        actionme_2 = new QAction(MainWindow);
        actionme_2->setObjectName(QString::fromUtf8("actionme_2"));
        actionTA = new QAction(MainWindow);
        actionTA->setObjectName(QString::fromUtf8("actionTA"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        transactionNumberLine = new QLineEdit(centralwidget);
        transactionNumberLine->setObjectName(QString::fromUtf8("transactionNumberLine"));
        transactionNumberLine->setEnabled(false);
        transactionNumberLine->setMaximumSize(QSize(40, 16777215));
        transactionNumberLine->setCursor(QCursor(Qt::ArrowCursor));
        transactionNumberLine->setMouseTracking(false);

        gridLayout->addWidget(transactionNumberLine, 10, 11, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 2, 3, 1, 1);

        label_8 = new QLabel(centralwidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout->addWidget(label_8, 8, 3, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout->addWidget(label_5, 5, 3, 1, 1);

        laserPowerLine = new QLineEdit(centralwidget);
        laserPowerLine->setObjectName(QString::fromUtf8("laserPowerLine"));
        laserPowerLine->setEnabled(false);
        laserPowerLine->setMaximumSize(QSize(40, 16777215));
        laserPowerLine->setCursor(QCursor(Qt::ArrowCursor));
        laserPowerLine->setMouseTracking(false);

        gridLayout->addWidget(laserPowerLine, 6, 11, 1, 1);

        logicalNumberLine = new QLineEdit(centralwidget);
        logicalNumberLine->setObjectName(QString::fromUtf8("logicalNumberLine"));
        logicalNumberLine->setEnabled(false);
        logicalNumberLine->setMaximumSize(QSize(40, 16777215));
        logicalNumberLine->setCursor(QCursor(Qt::ArrowCursor));
        logicalNumberLine->setMouseTracking(false);

        gridLayout->addWidget(logicalNumberLine, 9, 11, 1, 1);

        capacityMagazineLine = new QLineEdit(centralwidget);
        capacityMagazineLine->setObjectName(QString::fromUtf8("capacityMagazineLine"));
        capacityMagazineLine->setEnabled(false);
        capacityMagazineLine->setMaximumSize(QSize(40, 16777215));
        capacityMagazineLine->setCursor(QCursor(Qt::ArrowCursor));
        capacityMagazineLine->setMouseTracking(false);

        gridLayout->addWidget(capacityMagazineLine, 3, 11, 1, 1);

        regimShootingLine = new QLineEdit(centralwidget);
        regimShootingLine->setObjectName(QString::fromUtf8("regimShootingLine"));
        regimShootingLine->setEnabled(false);
        regimShootingLine->setMaximumSize(QSize(40, 16777215));
        regimShootingLine->setCursor(QCursor(Qt::ArrowCursor));
        regimShootingLine->setMouseTracking(false);

        gridLayout->addWidget(regimShootingLine, 7, 11, 1, 1);

        addictionalSoundLine = new QLineEdit(centralwidget);
        addictionalSoundLine->setObjectName(QString::fromUtf8("addictionalSoundLine"));
        addictionalSoundLine->setEnabled(false);
        addictionalSoundLine->setMaximumSize(QSize(40, 16777215));
        addictionalSoundLine->setCursor(QCursor(Qt::ArrowCursor));
        addictionalSoundLine->setMouseTracking(false);

        gridLayout->addWidget(addictionalSoundLine, 5, 11, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 1, 3, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 11, 0, 1, 3);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 9, 3, 1, 1);

        voltageLine = new QLineEdit(centralwidget);
        voltageLine->setObjectName(QString::fromUtf8("voltageLine"));
        voltageLine->setEnabled(false);
        voltageLine->setMaximumSize(QSize(40, 16777215));
        voltageLine->setCursor(QCursor(Qt::ArrowCursor));
        voltageLine->setMouseTracking(false);

        gridLayout->addWidget(voltageLine, 8, 11, 1, 1);

        IdlineRifle = new QLineEdit(centralwidget);
        IdlineRifle->setObjectName(QString::fromUtf8("IdlineRifle"));
        IdlineRifle->setEnabled(false);
        IdlineRifle->setMaximumSize(QSize(40, 16777215));
        IdlineRifle->setCursor(QCursor(Qt::ArrowCursor));
        IdlineRifle->setMouseTracking(false);

        gridLayout->addWidget(IdlineRifle, 1, 11, 1, 1);

        label_10 = new QLabel(centralwidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 10, 3, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout->addWidget(label_4, 4, 3, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 10, 0, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout->addWidget(label_6, 6, 3, 1, 1);

        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 0, 11, 1, 1);

        addictionalAmmoLine = new QLineEdit(centralwidget);
        addictionalAmmoLine->setObjectName(QString::fromUtf8("addictionalAmmoLine"));
        addictionalAmmoLine->setEnabled(false);
        addictionalAmmoLine->setMaximumSize(QSize(40, 16777215));
        addictionalAmmoLine->setCursor(QCursor(Qt::ArrowCursor));
        addictionalAmmoLine->setMouseTracking(false);

        gridLayout->addWidget(addictionalAmmoLine, 4, 11, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout->addWidget(label_7, 7, 3, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 3, 3, 1, 1);

        ammoLineCount = new QLineEdit(centralwidget);
        ammoLineCount->setObjectName(QString::fromUtf8("ammoLineCount"));
        ammoLineCount->setEnabled(false);
        ammoLineCount->setMaximumSize(QSize(40, 16777215));
        ammoLineCount->setCursor(QCursor(Qt::ArrowCursor));
        ammoLineCount->setMouseTracking(false);

        gridLayout->addWidget(ammoLineCount, 2, 11, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Maximum, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 10, 12, 1, 1);

        idkBtn = new QPushButton(centralwidget);
        idkBtn->setObjectName(QString::fromUtf8("idkBtn"));

        gridLayout->addWidget(idkBtn, 11, 11, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 441, 23));
        menudev_00_00_00_0 = new QMenu(menubar);
        menudev_00_00_00_0->setObjectName(QString::fromUtf8("menudev_00_00_00_0"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menudev_00_00_00_0->menuAction());
        menudev_00_00_00_0->addAction(actionhelp);
        menudev_00_00_00_0->addAction(actionme);
        menudev_00_00_00_0->addAction(actiongive);
        menudev_00_00_00_0->addAction(actionme_2);
        menudev_00_00_00_0->addAction(actionTA);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionhelp->setText(QCoreApplication::translate("MainWindow", "help", nullptr));
        actionme->setText(QCoreApplication::translate("MainWindow", "me", nullptr));
        actiongive->setText(QCoreApplication::translate("MainWindow", "give", nullptr));
        actionme_2->setText(QCoreApplication::translate("MainWindow", "me", nullptr));
        actionTA->setText(QCoreApplication::translate("MainWindow", "TA", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\274\320\260\320\263\320\260\320\267\320\270\320\275\320\276\320\262", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\277\321\200\321\217\320\266\320\265\320\275\320\270\320\265 \320\261\320\260\321\202\320\260\321\200\320\265\320\270", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\321\213\320\265 \320\267\320\262\321\203\320\272\320\276\320\262\321\213\320\265 \321\215\321\204\321\204\320\265\320\272\321\202\321\213", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Id \320\262\320\270\320\275\321\202\320\276\320\262\320\272\320\270", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\233\320\276\320\263\320\270\321\207\320\265\321\201\320\272\320\270\320\271 \320\275\320\276\320\274\320\265\321\200 \320\262\320\270\320\275\321\202\320\276\320\262\320\272\320\270", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\202\321\200\320\260\320\275\320\267\320\260\320\272\321\206\320\270\320\270", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\264\320\276\320\277\320\276\320\273\320\275\320\270\321\202\320\265\320\273\321\214\320\275\321\213\321\205 \320\277\320\260\321\202\321\200\320\276\320\275\320\276\320\262", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\234\320\276\321\211\320\275\320\276\321\201\321\202\321\214 \320\273\320\260\320\267\320\265\321\200\320\260	", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\240\320\265\320\266\320\270\320\274 \320\277\320\276\320\273\321\203\320\260\320\262\321\202\320\276\320\274\320\260\321\202\320\270\321\207\320\265\321\201\320\272\320\276\320\271 \321\201\321\202\321\200\320\265\320\273\321\214\320\261\321\213", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\225\320\274\320\272\320\276\321\201\321\202\321\214 \320\274\320\260\320\263\320\260\320\267\320\270\320\275\320\260", nullptr));
        idkBtn->setText(QCoreApplication::translate("MainWindow", "IdkButton", nullptr));
        menudev_00_00_00_0->setTitle(QCoreApplication::translate("MainWindow", "de&v.00.00.00.0", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

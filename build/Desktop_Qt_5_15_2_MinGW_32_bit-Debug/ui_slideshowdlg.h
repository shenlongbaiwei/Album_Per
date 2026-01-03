/********************************************************************************
** Form generated from reading UI file 'slideshowdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SLIDESHOWDLG_H
#define UI_SLIDESHOWDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "picanimationwid.h"
#include "picbutton.h"
#include "picstatebtn.h"
#include "prelistwid.h"

QT_BEGIN_NAMESPACE

class Ui_SlideShowDlg
{
public:
    QVBoxLayout *verticalLayout;
    QWidget *slideShow;
    QGridLayout *gridLayout;
    QWidget *slideprewid;
    QVBoxLayout *verticalLayout_2;
    PicButton *slidpreBtn;
    QWidget *slidenextwid;
    QVBoxLayout *verticalLayout_3;
    PicButton *slidenextBtn;
    PicAnimationWid *picAnimation;
    QHBoxLayout *horizontalLayout_4;
    PicStateBtn *playBtn;
    PicButton *closeBtn;
    QWidget *preShow;
    QHBoxLayout *horizontalLayout;
    QWidget *widget;
    PreListWid *preListWidget;

    void setupUi(QDialog *SlideShowDlg)
    {
        if (SlideShowDlg->objectName().isEmpty())
            SlideShowDlg->setObjectName(QString::fromUtf8("SlideShowDlg"));
        SlideShowDlg->resize(441, 311);
        verticalLayout = new QVBoxLayout(SlideShowDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        slideShow = new QWidget(SlideShowDlg);
        slideShow->setObjectName(QString::fromUtf8("slideShow"));
        slideShow->setStyleSheet(QString::fromUtf8(""));
        gridLayout = new QGridLayout(slideShow);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        slideprewid = new QWidget(slideShow);
        slideprewid->setObjectName(QString::fromUtf8("slideprewid"));
        slideprewid->setMinimumSize(QSize(80, 0));
        slideprewid->setMaximumSize(QSize(80, 16777215));
        verticalLayout_2 = new QVBoxLayout(slideprewid);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        slidpreBtn = new PicButton(slideprewid);
        slidpreBtn->setObjectName(QString::fromUtf8("slidpreBtn"));
        slidpreBtn->setIconSize(QSize(64, 64));

        verticalLayout_2->addWidget(slidpreBtn);


        gridLayout->addWidget(slideprewid, 2, 0, 1, 1);

        slidenextwid = new QWidget(slideShow);
        slidenextwid->setObjectName(QString::fromUtf8("slidenextwid"));
        slidenextwid->setMinimumSize(QSize(80, 0));
        slidenextwid->setMaximumSize(QSize(80, 16777215));
        verticalLayout_3 = new QVBoxLayout(slidenextwid);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        slidenextBtn = new PicButton(slidenextwid);
        slidenextBtn->setObjectName(QString::fromUtf8("slidenextBtn"));
        slidenextBtn->setIconSize(QSize(64, 64));

        verticalLayout_3->addWidget(slidenextBtn);


        gridLayout->addWidget(slidenextwid, 2, 2, 1, 1);

        picAnimation = new PicAnimationWid(slideShow);
        picAnimation->setObjectName(QString::fromUtf8("picAnimation"));

        gridLayout->addWidget(picAnimation, 2, 1, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        playBtn = new PicStateBtn(slideShow);
        playBtn->setObjectName(QString::fromUtf8("playBtn"));

        horizontalLayout_4->addWidget(playBtn);

        closeBtn = new PicButton(slideShow);
        closeBtn->setObjectName(QString::fromUtf8("closeBtn"));

        horizontalLayout_4->addWidget(closeBtn);


        gridLayout->addLayout(horizontalLayout_4, 1, 2, 1, 1);


        verticalLayout->addWidget(slideShow);

        preShow = new QWidget(SlideShowDlg);
        preShow->setObjectName(QString::fromUtf8("preShow"));
        horizontalLayout = new QHBoxLayout(preShow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        widget = new QWidget(preShow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setMinimumSize(QSize(0, 120));
        widget->setMaximumSize(QSize(16777215, 120));
        preListWidget = new PreListWid(widget);
        preListWidget->setObjectName(QString::fromUtf8("preListWidget"));
        preListWidget->setGeometry(QRect(10, 10, 16777215, 110));
        preListWidget->setMinimumSize(QSize(0, 110));
        preListWidget->setMaximumSize(QSize(16777215, 110));
        preListWidget->setFlow(QListView::LeftToRight);

        horizontalLayout->addWidget(widget);


        verticalLayout->addWidget(preShow);

        verticalLayout->setStretch(0, 7);
        verticalLayout->setStretch(1, 1);

        retranslateUi(SlideShowDlg);

        QMetaObject::connectSlotsByName(SlideShowDlg);
    } // setupUi

    void retranslateUi(QDialog *SlideShowDlg)
    {
        SlideShowDlg->setWindowTitle(QCoreApplication::translate("SlideShowDlg", "Dialog", nullptr));
        slidpreBtn->setText(QString());
        slidenextBtn->setText(QString());
        playBtn->setText(QString());
        closeBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class SlideShowDlg: public Ui_SlideShowDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SLIDESHOWDLG_H

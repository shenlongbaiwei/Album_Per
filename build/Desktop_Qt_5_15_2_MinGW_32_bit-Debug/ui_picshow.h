/********************************************************************************
** Form generated from reading UI file 'picshow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PICSHOW_H
#define UI_PICSHOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "picbutton.h"

QT_BEGIN_NAMESPACE

class Ui_PicShow
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout_2;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QWidget *widget_2;
    QVBoxLayout *verticalLayout_3;
    PicButton *nextBtn;
    QWidget *widget;
    QVBoxLayout *verticalLayout_2;
    PicButton *previousBtn;
    QSpacerItem *verticalSpacer;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QDialog *PicShow)
    {
        if (PicShow->objectName().isEmpty())
            PicShow->setObjectName(QString::fromUtf8("PicShow"));
        PicShow->resize(400, 300);
        horizontalLayout = new QHBoxLayout(PicShow);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 3, 1, 1);

        label = new QLabel(PicShow);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 1, 2, 1, 1);

        widget_2 = new QWidget(PicShow);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget_2->sizePolicy().hasHeightForWidth());
        widget_2->setSizePolicy(sizePolicy);
        widget_2->setMinimumSize(QSize(80, 0));
        widget_2->setMaximumSize(QSize(80, 16777215));
        widget_2->setBaseSize(QSize(80, 0));
        verticalLayout_3 = new QVBoxLayout(widget_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        nextBtn = new PicButton(widget_2);
        nextBtn->setObjectName(QString::fromUtf8("nextBtn"));
        nextBtn->setMinimumSize(QSize(80, 0));

        verticalLayout_3->addWidget(nextBtn);


        gridLayout_2->addWidget(widget_2, 1, 4, 1, 1);

        widget = new QWidget(PicShow);
        widget->setObjectName(QString::fromUtf8("widget"));
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 0));
        widget->setMaximumSize(QSize(80, 16777215));
        widget->setBaseSize(QSize(80, 0));
        verticalLayout_2 = new QVBoxLayout(widget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        previousBtn = new PicButton(widget);
        previousBtn->setObjectName(QString::fromUtf8("previousBtn"));
        previousBtn->setMinimumSize(QSize(80, 0));

        verticalLayout_2->addWidget(previousBtn);


        gridLayout_2->addWidget(widget, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 2, 1, 1);


        horizontalLayout->addLayout(gridLayout_2);


        retranslateUi(PicShow);

        QMetaObject::connectSlotsByName(PicShow);
    } // setupUi

    void retranslateUi(QDialog *PicShow)
    {
        PicShow->setWindowTitle(QCoreApplication::translate("PicShow", "Dialog", nullptr));
        label->setText(QString());
        nextBtn->setText(QString());
        previousBtn->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PicShow: public Ui_PicShow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PICSHOW_H

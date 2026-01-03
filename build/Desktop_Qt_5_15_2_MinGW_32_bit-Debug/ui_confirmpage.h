/********************************************************************************
** Form generated from reading UI file 'confirmpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMPAGE_H
#define UI_CONFIRMPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_ConfirmPage
{
public:
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;

    void setupUi(QWizardPage *ConfirmPage)
    {
        if (ConfirmPage->objectName().isEmpty())
            ConfirmPage->setObjectName(QString::fromUtf8("ConfirmPage"));
        ConfirmPage->resize(635, 324);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ConfirmPage->sizePolicy().hasHeightForWidth());
        ConfirmPage->setSizePolicy(sizePolicy);
        gridLayout = new QGridLayout(ConfirmPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(ConfirmPage);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(15);
        label->setFont(font);
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);


        retranslateUi(ConfirmPage);

        QMetaObject::connectSlotsByName(ConfirmPage);
    } // setupUi

    void retranslateUi(QWizardPage *ConfirmPage)
    {
        ConfirmPage->setWindowTitle(QCoreApplication::translate("ConfirmPage", "WizardPage", nullptr));
        label->setText(QCoreApplication::translate("ConfirmPage", "\347\202\271\345\207\273\345\256\214\346\210\220\357\274\214\345\215\263\345\217\257\345\256\214\346\210\220\351\241\271\347\233\256\345\210\233\345\273\272\357\274\214\347\202\271\345\207\273\345\217\226\346\266\210\345\210\231\350\277\224\345\233\236", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ConfirmPage: public Ui_ConfirmPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMPAGE_H

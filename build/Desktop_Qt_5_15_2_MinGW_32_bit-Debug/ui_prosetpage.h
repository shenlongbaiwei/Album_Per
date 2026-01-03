/********************************************************************************
** Form generated from reading UI file 'prosetpage.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PROSETPAGE_H
#define UI_PROSETPAGE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_ProSetPage
{
public:
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *name_lineEdit;
    QLabel *label_2;
    QLineEdit *Path_lineEdit;
    QLabel *tips_content;
    QPushButton *pushButton;

    void setupUi(QWizardPage *ProSetPage)
    {
        if (ProSetPage->objectName().isEmpty())
            ProSetPage->setObjectName(QString::fromUtf8("ProSetPage"));
        ProSetPage->resize(641, 309);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ProSetPage->sizePolicy().hasHeightForWidth());
        ProSetPage->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(ProSetPage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(5, 5, 5, 5);
        label = new QLabel(ProSetPage);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        name_lineEdit = new QLineEdit(ProSetPage);
        name_lineEdit->setObjectName(QString::fromUtf8("name_lineEdit"));

        gridLayout->addWidget(name_lineEdit, 0, 1, 1, 1);

        label_2 = new QLabel(ProSetPage);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        Path_lineEdit = new QLineEdit(ProSetPage);
        Path_lineEdit->setObjectName(QString::fromUtf8("Path_lineEdit"));

        gridLayout->addWidget(Path_lineEdit, 1, 1, 1, 1);

        tips_content = new QLabel(ProSetPage);
        tips_content->setObjectName(QString::fromUtf8("tips_content"));

        gridLayout->addWidget(tips_content, 2, 1, 1, 1);

        pushButton = new QPushButton(ProSetPage);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 1, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);


        retranslateUi(ProSetPage);

        QMetaObject::connectSlotsByName(ProSetPage);
    } // setupUi

    void retranslateUi(QWizardPage *ProSetPage)
    {
        ProSetPage->setWindowTitle(QCoreApplication::translate("ProSetPage", "WizardPage", nullptr));
        label->setText(QCoreApplication::translate("ProSetPage", "Name:", nullptr));
        label_2->setText(QCoreApplication::translate("ProSetPage", "Path:", nullptr));
        tips_content->setText(QCoreApplication::translate("ProSetPage", "content", nullptr));
        pushButton->setText(QCoreApplication::translate("ProSetPage", "browser", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ProSetPage: public Ui_ProSetPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PROSETPAGE_H

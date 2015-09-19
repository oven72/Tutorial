/********************************************************************************
** Form generated from reading UI file 'add_tel.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_TEL_H
#define UI_ADD_TEL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_add_tel
{
public:
    QAction *a_add_tel;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *le_tel;
    QComboBox *cb_type;
    QSpacerItem *horizontalSpacer;
    QToolButton *tb_ok;

    void setupUi(QDialog *add_tel)
    {
        if (add_tel->objectName().isEmpty())
            add_tel->setObjectName(QStringLiteral("add_tel"));
        add_tel->resize(295, 69);
        a_add_tel = new QAction(add_tel);
        a_add_tel->setObjectName(QStringLiteral("a_add_tel"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/pic/tick.png"), QSize(), QIcon::Normal, QIcon::Off);
        a_add_tel->setIcon(icon);
        gridLayout = new QGridLayout(add_tel);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(add_tel);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        le_tel = new QLineEdit(add_tel);
        le_tel->setObjectName(QStringLiteral("le_tel"));

        horizontalLayout->addWidget(le_tel);

        cb_type = new QComboBox(add_tel);
        cb_type->setObjectName(QStringLiteral("cb_type"));

        horizontalLayout->addWidget(cb_type);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        horizontalSpacer = new QSpacerItem(243, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 1, 0, 1, 1);

        tb_ok = new QToolButton(add_tel);
        tb_ok->setObjectName(QStringLiteral("tb_ok"));
        tb_ok->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        gridLayout->addWidget(tb_ok, 1, 1, 1, 1);


        retranslateUi(add_tel);

        QMetaObject::connectSlotsByName(add_tel);
    } // setupUi

    void retranslateUi(QDialog *add_tel)
    {
        add_tel->setWindowTitle(QApplication::translate("add_tel", "add telephone", 0));
        a_add_tel->setText(QApplication::translate("add_tel", "add tel", 0));
        label->setText(QApplication::translate("add_tel", "telephone", 0));
        tb_ok->setText(QApplication::translate("add_tel", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class add_tel: public Ui_add_tel {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_TEL_H

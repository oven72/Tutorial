/********************************************************************************
** Form generated from reading UI file 'add_user.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_USER_H
#define UI_ADD_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QToolButton>

QT_BEGIN_NAMESPACE

class Ui_add_user
{
public:
    QAction *a_add_user;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *le_fam1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *le_fam2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *le_fam3;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer;
    QToolButton *tb_ok;

    void setupUi(QDialog *add_user)
    {
        if (add_user->objectName().isEmpty())
            add_user->setObjectName(QStringLiteral("add_user"));
        add_user->resize(372, 151);
        a_add_user = new QAction(add_user);
        a_add_user->setObjectName(QStringLiteral("a_add_user"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/pic/tick.png"), QSize(), QIcon::Normal, QIcon::Off);
        a_add_user->setIcon(icon);
        gridLayout = new QGridLayout(add_user);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(add_user);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        le_fam1 = new QLineEdit(add_user);
        le_fam1->setObjectName(QStringLiteral("le_fam1"));

        horizontalLayout->addWidget(le_fam1);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(add_user);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_2->addWidget(label_2);

        le_fam2 = new QLineEdit(add_user);
        le_fam2->setObjectName(QStringLiteral("le_fam2"));

        horizontalLayout_2->addWidget(le_fam2);


        gridLayout->addLayout(horizontalLayout_2, 1, 0, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(add_user);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout_3->addWidget(label_3);

        le_fam3 = new QLineEdit(add_user);
        le_fam3->setObjectName(QStringLiteral("le_fam3"));

        horizontalLayout_3->addWidget(le_fam3);


        gridLayout->addLayout(horizontalLayout_3, 2, 0, 1, 1);

        verticalSpacer = new QSpacerItem(168, 18, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalSpacer = new QSpacerItem(131, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);

        tb_ok = new QToolButton(add_user);
        tb_ok->setObjectName(QStringLiteral("tb_ok"));
        tb_ok->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_4->addWidget(tb_ok);


        gridLayout->addLayout(horizontalLayout_4, 4, 0, 1, 1);


        retranslateUi(add_user);

        QMetaObject::connectSlotsByName(add_user);
    } // setupUi

    void retranslateUi(QDialog *add_user)
    {
        add_user->setWindowTitle(QApplication::translate("add_user", "add fio", 0));
        a_add_user->setText(QApplication::translate("add_user", "add user", 0));
        label->setText(QApplication::translate("add_user", "famely", 0));
        label_2->setText(QApplication::translate("add_user", "name", 0));
        label_3->setText(QApplication::translate("add_user", "name 2", 0));
        tb_ok->setText(QApplication::translate("add_user", "...", 0));
    } // retranslateUi

};

namespace Ui {
    class add_user: public Ui_add_user {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_USER_H

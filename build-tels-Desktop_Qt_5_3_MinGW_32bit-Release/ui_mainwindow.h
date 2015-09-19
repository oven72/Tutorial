/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QTreeWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *a_about;
    QAction *action;
    QAction *a_find;
    QAction *a_priority_number;
    QAction *a_edit_information;
    QAction *a_del;
    QAction *a_add_user;
    QAction *a_delete_relation;
    QAction *a_add_and_relation;
    QAction *a_add_telephone;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *le_search_str;
    QToolButton *tb_find;
    QLabel *history;
    QFrame *line;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QTreeWidget *tw_result;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QToolButton *tb_del_rel;
    QToolButton *tb_del;
    QFrame *line_2;
    QToolButton *tb_add_rel;
    QToolButton *tb_add_top_t;
    QToolButton *tb_add_top_u;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_2;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setWindowModality(Qt::WindowModal);
        MainWindow->resize(582, 418);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/pic/application_edit.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        a_about = new QAction(MainWindow);
        a_about->setObjectName(QStringLiteral("a_about"));
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        a_find = new QAction(MainWindow);
        a_find->setObjectName(QStringLiteral("a_find"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/pic/binocular--plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        a_find->setIcon(icon1);
        a_priority_number = new QAction(MainWindow);
        a_priority_number->setObjectName(QStringLiteral("a_priority_number"));
        a_priority_number->setCheckable(true);
        a_edit_information = new QAction(MainWindow);
        a_edit_information->setObjectName(QStringLiteral("a_edit_information"));
        a_edit_information->setCheckable(true);
        a_del = new QAction(MainWindow);
        a_del->setObjectName(QStringLiteral("a_del"));
        a_del->setEnabled(false);
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/pic/delete.png"), QSize(), QIcon::Normal, QIcon::Off);
        a_del->setIcon(icon2);
        a_add_user = new QAction(MainWindow);
        a_add_user->setObjectName(QStringLiteral("a_add_user"));
        a_add_user->setEnabled(false);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/pic/add.png"), QSize(), QIcon::Normal, QIcon::Off);
        a_add_user->setIcon(icon3);
        a_delete_relation = new QAction(MainWindow);
        a_delete_relation->setObjectName(QStringLiteral("a_delete_relation"));
        a_delete_relation->setEnabled(false);
        a_delete_relation->setIcon(icon2);
        a_add_and_relation = new QAction(MainWindow);
        a_add_and_relation->setObjectName(QStringLiteral("a_add_and_relation"));
        a_add_and_relation->setEnabled(false);
        a_add_and_relation->setIcon(icon3);
        a_add_telephone = new QAction(MainWindow);
        a_add_telephone->setObjectName(QStringLiteral("a_add_telephone"));
        a_add_telephone->setEnabled(false);
        a_add_telephone->setIcon(icon3);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        le_search_str = new QLineEdit(centralWidget);
        le_search_str->setObjectName(QStringLiteral("le_search_str"));

        horizontalLayout->addWidget(le_search_str);

        tb_find = new QToolButton(centralWidget);
        tb_find->setObjectName(QStringLiteral("tb_find"));
        tb_find->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout->addWidget(tb_find);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout->addLayout(verticalLayout, 0, 0, 1, 1);

        history = new QLabel(centralWidget);
        history->setObjectName(QStringLiteral("history"));

        gridLayout->addWidget(history, 1, 0, 1, 1);

        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout->addWidget(line, 2, 0, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        verticalLayout_2->addWidget(label_2);

        tw_result = new QTreeWidget(centralWidget);
        QTreeWidgetItem *__qtreewidgetitem = new QTreeWidgetItem();
        __qtreewidgetitem->setText(0, QStringLiteral("1"));
        tw_result->setHeaderItem(__qtreewidgetitem);
        tw_result->setObjectName(QStringLiteral("tw_result"));
        tw_result->setWordWrap(true);
        tw_result->setColumnCount(1);
        tw_result->header()->setVisible(false);

        verticalLayout_2->addWidget(tw_result);


        gridLayout->addLayout(verticalLayout_2, 3, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(408, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        tb_del_rel = new QToolButton(centralWidget);
        tb_del_rel->setObjectName(QStringLiteral("tb_del_rel"));
        tb_del_rel->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(tb_del_rel);

        tb_del = new QToolButton(centralWidget);
        tb_del->setObjectName(QStringLiteral("tb_del"));
        tb_del->setEnabled(false);
        tb_del->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(tb_del);

        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_2);

        tb_add_rel = new QToolButton(centralWidget);
        tb_add_rel->setObjectName(QStringLiteral("tb_add_rel"));
        tb_add_rel->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(tb_add_rel);

        tb_add_top_t = new QToolButton(centralWidget);
        tb_add_top_t->setObjectName(QStringLiteral("tb_add_top_t"));
        tb_add_top_t->setEnabled(false);
        tb_add_top_t->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(tb_add_top_t);

        tb_add_top_u = new QToolButton(centralWidget);
        tb_add_top_u->setObjectName(QStringLiteral("tb_add_top_u"));
        tb_add_top_u->setEnabled(false);
        tb_add_top_u->setToolButtonStyle(Qt::ToolButtonTextBesideIcon);

        horizontalLayout_2->addWidget(tb_add_top_u);


        gridLayout->addLayout(horizontalLayout_2, 4, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 582, 21));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_2 = new QMenu(menuBar);
        menu_2->setObjectName(QStringLiteral("menu_2"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_2->menuAction());
        menu->addAction(a_priority_number);
        menu->addSeparator();
        menu->addAction(a_edit_information);
        menu_2->addAction(a_about);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Programm FindTels", 0));
        a_about->setText(QApplication::translate("MainWindow", "About", 0));
#ifndef QT_NO_TOOLTIP
        a_about->setToolTip(QApplication::translate("MainWindow", "About", 0));
#endif // QT_NO_TOOLTIP
        action->setText(QApplication::translate("MainWindow", "Request history", 0));
#ifndef QT_NO_TOOLTIP
        action->setToolTip(QApplication::translate("MainWindow", "Request history", 0));
#endif // QT_NO_TOOLTIP
        a_find->setText(QApplication::translate("MainWindow", "find", 0));
        a_priority_number->setText(QApplication::translate("MainWindow", "priority number", 0));
        a_edit_information->setText(QApplication::translate("MainWindow", "edit information", 0));
        a_del->setText(QApplication::translate("MainWindow", "delete", 0));
#ifndef QT_NO_TOOLTIP
        a_del->setToolTip(QApplication::translate("MainWindow", "delete", 0));
#endif // QT_NO_TOOLTIP
        a_add_user->setText(QApplication::translate("MainWindow", "add top user", 0));
#ifndef QT_NO_TOOLTIP
        a_add_user->setToolTip(QApplication::translate("MainWindow", "add user", 0));
#endif // QT_NO_TOOLTIP
        a_delete_relation->setText(QApplication::translate("MainWindow", "delete relation", 0));
        a_add_and_relation->setText(QApplication::translate("MainWindow", "add and relation", 0));
        a_add_telephone->setText(QApplication::translate("MainWindow", "add top telephone", 0));
        label->setText(QApplication::translate("MainWindow", "Find request string", 0));
        tb_find->setText(QApplication::translate("MainWindow", "Find", 0));
        history->setText(QApplication::translate("MainWindow", "<a href=\"history\">History request</a>", 0));
        label_2->setText(QApplication::translate("MainWindow", "Result", 0));
        tb_del_rel->setText(QApplication::translate("MainWindow", "del_rel", 0));
        tb_del->setText(QApplication::translate("MainWindow", "del", 0));
        tb_add_rel->setText(QApplication::translate("MainWindow", "add and relation", 0));
        tb_add_top_t->setText(QApplication::translate("MainWindow", "add top telephone", 0));
        tb_add_top_u->setText(QApplication::translate("MainWindow", "add top user", 0));
        menu->setTitle(QApplication::translate("MainWindow", "Database", 0));
        menu_2->setTitle(QApplication::translate("MainWindow", "Help", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

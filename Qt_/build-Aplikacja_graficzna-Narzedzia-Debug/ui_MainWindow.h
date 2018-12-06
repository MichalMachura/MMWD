/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_10;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QWidget *ManipulacjaObiektemStartowym;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *factors;
    QVBoxLayout *verticalLayout_13;
    QFormLayout *formLayout_3;
    QLabel *label_2;
    QSpinBox *startFactors_y;
    QLabel *label_3;
    QDoubleSpinBox *startFactors_a;
    QPushButton *setStartFactors;
    QGroupBox *deletingRange;
    QVBoxLayout *verticalLayout_2;
    QFormLayout *formLayout_5;
    QLabel *label_8;
    QTimeEdit *deleteRangeBegin;
    QLabel *label_9;
    QTimeEdit *deleteRangeEnd;
    QPushButton *deleteRange;
    QVBoxLayout *verticalLayout_7;
    QTabWidget *actions;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_4;
    QFormLayout *formLayout_4;
    QLabel *label_4;
    QTimeEdit *sleepBegin;
    QLabel *label_5;
    QTimeEdit *sleepEnd;
    QPushButton *addSleep;
    QWidget *tab;
    QVBoxLayout *verticalLayout_5;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QTimeEdit *coffee_moment;
    QLabel *label_7;
    QSpinBox *coffee_quantity;
    QPushButton *addCoffee;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_6;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_8;
    QPushButton *check;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *removeAddedActions;
    QGroupBox *static_factors;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *spinBox;
    QLabel *minSleepLabel;
    QSpinBox *miniSleep;
    QLabel *factorACoffeeLabel;
    QSpinBox *factorACoffee;
    QLabel *wspCzynnikWpYwuSnuLabel;
    QSpinBox *factorASleep;
    QPushButton *pushButton_2;
    QScrollArea *WyswietlanieDayActions;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    QVBoxLayout *verticalLayout_9;
    QGraphicsView *graphicsView;
    QTextBrowser *textBrowser;
    QHBoxLayout *DolnePrzyciski;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *quitVievport1;
    QSpacerItem *horizontalSpacer;
    QPushButton *toAlgorithm;
    QSpacerItem *horizontalSpacer_3;
    QWidget *page_2;
    QVBoxLayout *verticalLayout_12;
    QRadioButton *radioButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(905, 597);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_10 = new QVBoxLayout(centralWidget);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayout_11 = new QVBoxLayout(page);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ManipulacjaObiektemStartowym = new QWidget(page);
        ManipulacjaObiektemStartowym->setObjectName(QString::fromUtf8("ManipulacjaObiektemStartowym"));
        verticalLayout_14 = new QVBoxLayout(ManipulacjaObiektemStartowym);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        factors = new QGroupBox(ManipulacjaObiektemStartowym);
        factors->setObjectName(QString::fromUtf8("factors"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(factors->sizePolicy().hasHeightForWidth());
        factors->setSizePolicy(sizePolicy);
        verticalLayout_13 = new QVBoxLayout(factors);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        formLayout_3 = new QFormLayout();
        formLayout_3->setSpacing(6);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        formLayout_3->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_3->setFormAlignment(Qt::AlignCenter);
        label_2 = new QLabel(factors);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);
        label_2->setMinimumSize(QSize(90, 0));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_2);

        startFactors_y = new QSpinBox(factors);
        startFactors_y->setObjectName(QString::fromUtf8("startFactors_y"));
        QSizePolicy sizePolicy2(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(startFactors_y->sizePolicy().hasHeightForWidth());
        startFactors_y->setSizePolicy(sizePolicy2);
        startFactors_y->setMinimumSize(QSize(90, 0));
        startFactors_y->setProperty("y_value", QVariant(5u));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, startFactors_y);

        label_3 = new QLabel(factors);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        sizePolicy1.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy1);
        label_3->setMinimumSize(QSize(90, 0));
        label_3->setAlignment(Qt::AlignCenter);

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_3);

        startFactors_a = new QDoubleSpinBox(factors);
        startFactors_a->setObjectName(QString::fromUtf8("startFactors_a"));
        sizePolicy2.setHeightForWidth(startFactors_a->sizePolicy().hasHeightForWidth());
        startFactors_a->setSizePolicy(sizePolicy2);
        startFactors_a->setMinimumSize(QSize(90, 0));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, startFactors_a);


        verticalLayout_13->addLayout(formLayout_3);

        setStartFactors = new QPushButton(factors);
        setStartFactors->setObjectName(QString::fromUtf8("setStartFactors"));

        verticalLayout_13->addWidget(setStartFactors);

        deletingRange = new QGroupBox(factors);
        deletingRange->setObjectName(QString::fromUtf8("deletingRange"));
        verticalLayout_2 = new QVBoxLayout(deletingRange);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        formLayout_5 = new QFormLayout();
        formLayout_5->setSpacing(6);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        formLayout_5->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_5->setFormAlignment(Qt::AlignCenter);
        label_8 = new QLabel(deletingRange);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMinimumSize(QSize(90, 0));
        label_8->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_8);

        deleteRangeBegin = new QTimeEdit(deletingRange);
        deleteRangeBegin->setObjectName(QString::fromUtf8("deleteRangeBegin"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(deleteRangeBegin->sizePolicy().hasHeightForWidth());
        deleteRangeBegin->setSizePolicy(sizePolicy3);
        deleteRangeBegin->setMinimumSize(QSize(90, 0));
        deleteRangeBegin->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(0, QFormLayout::FieldRole, deleteRangeBegin);

        label_9 = new QLabel(deletingRange);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMinimumSize(QSize(90, 0));
        label_9->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_9);

        deleteRangeEnd = new QTimeEdit(deletingRange);
        deleteRangeEnd->setObjectName(QString::fromUtf8("deleteRangeEnd"));
        sizePolicy3.setHeightForWidth(deleteRangeEnd->sizePolicy().hasHeightForWidth());
        deleteRangeEnd->setSizePolicy(sizePolicy3);
        deleteRangeEnd->setMinimumSize(QSize(90, 0));
        deleteRangeEnd->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, deleteRangeEnd);


        verticalLayout_2->addLayout(formLayout_5);

        deleteRange = new QPushButton(deletingRange);
        deleteRange->setObjectName(QString::fromUtf8("deleteRange"));

        verticalLayout_2->addWidget(deleteRange);


        verticalLayout_13->addWidget(deletingRange);


        horizontalLayout_3->addWidget(factors);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        actions = new QTabWidget(ManipulacjaObiektemStartowym);
        actions->setObjectName(QString::fromUtf8("actions"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(actions->sizePolicy().hasHeightForWidth());
        actions->setSizePolicy(sizePolicy4);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_4 = new QVBoxLayout(tab_2);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        formLayout_4 = new QFormLayout();
        formLayout_4->setSpacing(6);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        formLayout_4->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_4->setFormAlignment(Qt::AlignCenter);
        label_4 = new QLabel(tab_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setMinimumSize(QSize(90, 0));
        label_4->setAlignment(Qt::AlignCenter);

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_4);

        sleepBegin = new QTimeEdit(tab_2);
        sleepBegin->setObjectName(QString::fromUtf8("sleepBegin"));
        sizePolicy3.setHeightForWidth(sleepBegin->sizePolicy().hasHeightForWidth());
        sleepBegin->setSizePolicy(sizePolicy3);
        sleepBegin->setMinimumSize(QSize(90, 0));
        sleepBegin->setAlignment(Qt::AlignCenter);

        formLayout_4->setWidget(0, QFormLayout::FieldRole, sleepBegin);

        label_5 = new QLabel(tab_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setMinimumSize(QSize(90, 0));
        label_5->setAlignment(Qt::AlignCenter);

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_5);

        sleepEnd = new QTimeEdit(tab_2);
        sleepEnd->setObjectName(QString::fromUtf8("sleepEnd"));
        sizePolicy3.setHeightForWidth(sleepEnd->sizePolicy().hasHeightForWidth());
        sleepEnd->setSizePolicy(sizePolicy3);
        sleepEnd->setMinimumSize(QSize(90, 0));
        sleepEnd->setAlignment(Qt::AlignCenter);

        formLayout_4->setWidget(1, QFormLayout::FieldRole, sleepEnd);


        verticalLayout_4->addLayout(formLayout_4);

        addSleep = new QPushButton(tab_2);
        addSleep->setObjectName(QString::fromUtf8("addSleep"));

        verticalLayout_4->addWidget(addSleep);

        actions->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_5 = new QVBoxLayout(tab);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        formLayout_2->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout_2->setFormAlignment(Qt::AlignCenter);
        label_6 = new QLabel(tab);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy5(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy5);
        label_6->setMinimumSize(QSize(90, 0));
        label_6->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        coffee_moment = new QTimeEdit(tab);
        coffee_moment->setObjectName(QString::fromUtf8("coffee_moment"));
        sizePolicy5.setHeightForWidth(coffee_moment->sizePolicy().hasHeightForWidth());
        coffee_moment->setSizePolicy(sizePolicy5);
        coffee_moment->setMinimumSize(QSize(90, 0));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, coffee_moment);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy5.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy5);
        label_7->setMinimumSize(QSize(90, 0));
        label_7->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        coffee_quantity = new QSpinBox(tab);
        coffee_quantity->setObjectName(QString::fromUtf8("coffee_quantity"));
        sizePolicy5.setHeightForWidth(coffee_quantity->sizePolicy().hasHeightForWidth());
        coffee_quantity->setSizePolicy(sizePolicy5);
        coffee_quantity->setMinimumSize(QSize(90, 0));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, coffee_quantity);


        verticalLayout_5->addLayout(formLayout_2);

        addCoffee = new QPushButton(tab);
        addCoffee->setObjectName(QString::fromUtf8("addCoffee"));

        verticalLayout_5->addWidget(addCoffee);

        actions->addTab(tab, QString());

        verticalLayout_7->addWidget(actions);


        horizontalLayout_3->addLayout(verticalLayout_7);


        verticalLayout_14->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_6);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_7);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_8);

        check = new QPushButton(ManipulacjaObiektemStartowym);
        check->setObjectName(QString::fromUtf8("check"));

        horizontalLayout_4->addWidget(check);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        removeAddedActions = new QPushButton(ManipulacjaObiektemStartowym);
        removeAddedActions->setObjectName(QString::fromUtf8("removeAddedActions"));

        horizontalLayout_4->addWidget(removeAddedActions);


        verticalLayout_14->addLayout(horizontalLayout_4);


        horizontalLayout_2->addWidget(ManipulacjaObiektemStartowym);

        static_factors = new QGroupBox(page);
        static_factors->setObjectName(QString::fromUtf8("static_factors"));
        static_factors->setEnabled(true);
        sizePolicy.setHeightForWidth(static_factors->sizePolicy().hasHeightForWidth());
        static_factors->setSizePolicy(sizePolicy);
        static_factors->setMinimumSize(QSize(250, 0));
        verticalLayout_6 = new QVBoxLayout(static_factors);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignCenter);
        formLayout->setHorizontalSpacing(0);
        label = new QLabel(static_factors);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy5.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy5);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spinBox = new QSpinBox(static_factors);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        sizePolicy2.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy2);
        spinBox->setMinimumSize(QSize(90, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox);

        minSleepLabel = new QLabel(static_factors);
        minSleepLabel->setObjectName(QString::fromUtf8("minSleepLabel"));
        sizePolicy5.setHeightForWidth(minSleepLabel->sizePolicy().hasHeightForWidth());
        minSleepLabel->setSizePolicy(sizePolicy5);

        formLayout->setWidget(1, QFormLayout::LabelRole, minSleepLabel);

        miniSleep = new QSpinBox(static_factors);
        miniSleep->setObjectName(QString::fromUtf8("miniSleep"));
        sizePolicy2.setHeightForWidth(miniSleep->sizePolicy().hasHeightForWidth());
        miniSleep->setSizePolicy(sizePolicy2);
        miniSleep->setMinimumSize(QSize(90, 0));

        formLayout->setWidget(1, QFormLayout::FieldRole, miniSleep);

        factorACoffeeLabel = new QLabel(static_factors);
        factorACoffeeLabel->setObjectName(QString::fromUtf8("factorACoffeeLabel"));
        sizePolicy5.setHeightForWidth(factorACoffeeLabel->sizePolicy().hasHeightForWidth());
        factorACoffeeLabel->setSizePolicy(sizePolicy5);

        formLayout->setWidget(2, QFormLayout::LabelRole, factorACoffeeLabel);

        factorACoffee = new QSpinBox(static_factors);
        factorACoffee->setObjectName(QString::fromUtf8("factorACoffee"));
        sizePolicy2.setHeightForWidth(factorACoffee->sizePolicy().hasHeightForWidth());
        factorACoffee->setSizePolicy(sizePolicy2);
        factorACoffee->setMinimumSize(QSize(90, 0));

        formLayout->setWidget(2, QFormLayout::FieldRole, factorACoffee);

        wspCzynnikWpYwuSnuLabel = new QLabel(static_factors);
        wspCzynnikWpYwuSnuLabel->setObjectName(QString::fromUtf8("wspCzynnikWpYwuSnuLabel"));
        sizePolicy5.setHeightForWidth(wspCzynnikWpYwuSnuLabel->sizePolicy().hasHeightForWidth());
        wspCzynnikWpYwuSnuLabel->setSizePolicy(sizePolicy5);

        formLayout->setWidget(3, QFormLayout::LabelRole, wspCzynnikWpYwuSnuLabel);

        factorASleep = new QSpinBox(static_factors);
        factorASleep->setObjectName(QString::fromUtf8("factorASleep"));
        sizePolicy2.setHeightForWidth(factorASleep->sizePolicy().hasHeightForWidth());
        factorASleep->setSizePolicy(sizePolicy2);
        factorASleep->setMinimumSize(QSize(90, 0));

        formLayout->setWidget(3, QFormLayout::FieldRole, factorASleep);


        verticalLayout_6->addLayout(formLayout);

        pushButton_2 = new QPushButton(static_factors);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_6->addWidget(pushButton_2);


        horizontalLayout_2->addWidget(static_factors);


        verticalLayout->addLayout(horizontalLayout_2);

        WyswietlanieDayActions = new QScrollArea(page);
        WyswietlanieDayActions->setObjectName(QString::fromUtf8("WyswietlanieDayActions"));
        WyswietlanieDayActions->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 848, 201));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        graphicsView = new QGraphicsView(groupBox);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setProperty("y_value", QVariant(0u));

        verticalLayout_9->addWidget(graphicsView);

        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_9->addWidget(textBrowser);


        verticalLayout_8->addLayout(verticalLayout_9);


        verticalLayout_3->addWidget(groupBox);

        WyswietlanieDayActions->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(WyswietlanieDayActions);

        DolnePrzyciski = new QHBoxLayout();
        DolnePrzyciski->setSpacing(6);
        DolnePrzyciski->setObjectName(QString::fromUtf8("DolnePrzyciski"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        DolnePrzyciski->addItem(horizontalSpacer_2);

        quitVievport1 = new QPushButton(page);
        quitVievport1->setObjectName(QString::fromUtf8("quitVievport1"));

        DolnePrzyciski->addWidget(quitVievport1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        DolnePrzyciski->addItem(horizontalSpacer);

        toAlgorithm = new QPushButton(page);
        toAlgorithm->setObjectName(QString::fromUtf8("toAlgorithm"));

        DolnePrzyciski->addWidget(toAlgorithm);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        DolnePrzyciski->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(DolnePrzyciski);


        verticalLayout_11->addLayout(verticalLayout);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        verticalLayout_12 = new QVBoxLayout(page_2);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        radioButton = new QRadioButton(page_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        verticalLayout_12->addWidget(radioButton);

        stackedWidget->addWidget(page_2);

        verticalLayout_10->addWidget(stackedWidget);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 905, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(spinBox);
#endif // QT_NO_SHORTCUT

        retranslateUi(MainWindow);
        QObject::connect(quitVievport1, SIGNAL(clicked()), MainWindow, SLOT(close()));

        stackedWidget->setCurrentIndex(0);
        actions->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        factors->setTitle(QApplication::translate("MainWindow", "Wsp\303\263\305\202czynniki Startowe:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "y:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "a:", nullptr));
        setStartFactors->setText(QApplication::translate("MainWindow", "Ustaw Wsp\303\263\305\202czynniki Startowe", nullptr));
        deletingRange->setTitle(QApplication::translate("MainWindow", "Usuwanie Przedzia\305\202u", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "Start:", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "Stop:", nullptr));
        deleteRange->setText(QApplication::translate("MainWindow", "Usun Przedzia\305\202", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Start:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Stop:", nullptr));
        addSleep->setText(QApplication::translate("MainWindow", "Dodaj Sen", nullptr));
        actions->setTabText(actions->indexOf(tab_2), QApplication::translate("MainWindow", "Sen", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Momnet Czasu:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Ilo\305\233\304\207 kawy:", nullptr));
        addCoffee->setText(QApplication::translate("MainWindow", "Dodaj Kaw\304\231", nullptr));
        actions->setTabText(actions->indexOf(tab), QApplication::translate("MainWindow", "Kawa", nullptr));
        check->setText(QApplication::translate("MainWindow", "Sprwad\305\272 ograniczenia i popraw", nullptr));
        removeAddedActions->setText(QApplication::translate("MainWindow", "Usu\305\204 dodane czynno\305\233ci", nullptr));
        static_factors->setTitle(QApplication::translate("MainWindow", "Wsp\303\263\305\202czynniki Statyczne:", nullptr));
        label->setText(QApplication::translate("MainWindow", "Minimalna Porcja Kawy", nullptr));
        minSleepLabel->setText(QApplication::translate("MainWindow", "Minimalny Czas Snu", nullptr));
        factorACoffeeLabel->setText(QApplication::translate("MainWindow", "Wsp\303\263\305\202czynnik wp\305\202ywu kawy:", nullptr));
        wspCzynnikWpYwuSnuLabel->setText(QApplication::translate("MainWindow", "Wsp\303\263\305\202czynnik wp\305\202ywu snu:", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Ustaw Wsp\303\263\305\202czynnki", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Podgl\304\205d Ci\304\205gu Czynno\305\233ci", nullptr));
        quitVievport1->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        toAlgorithm->setText(QApplication::translate("MainWindow", "Do Algorytmu", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "RadioButton", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

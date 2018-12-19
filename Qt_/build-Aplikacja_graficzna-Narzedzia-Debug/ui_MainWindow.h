/********************************************************************************
** Form generated from reading UI file 'MainWindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <MainWindow.hpp>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
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
    QVBoxLayout *verticalLayout_9;
    QStackedWidget *zmianaOkna;
    QWidget *ekran1;
    QVBoxLayout *verticalLayout_11;
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_20;
    QHBoxLayout *horizontalLayout_2;
    QWidget *ManipulacjaObiektemStartowym;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_17;
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
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_18;
    QPushButton *addRandom;
    QHBoxLayout *horizontalLayout_4;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *removeAddedActions;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *check;
    QSpacerItem *horizontalSpacer_14;
    QPushButton *addToList;
    QGroupBox *static_factors;
    QVBoxLayout *verticalLayout_6;
    QFormLayout *formLayout;
    QLabel *label;
    QSpinBox *min_coffee;
    QLabel *label_15;
    QLabel *factorACoffeeLabel;
    QLabel *label_16;
    QLabel *wspCzynnikWpYwuSnuLabel;
    QLabel *minSleepLabel;
    QSpinBox *max_coffee;
    QDoubleSpinBox *y_coffee_mod;
    QDoubleSpinBox *a_coffee_mod;
    QDoubleSpinBox *a_sleep_mod;
    QSpinBox *min_sleep;
    QLabel *label_17;
    QLabel *label_18;
    QDoubleSpinBox *integer_factor;
    QDoubleSpinBox *coffee_factor;
    QSpinBox *min_tot_sleep;
    QLabel *label_20;
    QPushButton *set_static_factors;
    QWidget *tab_5;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_9;
    QGridLayout *gridLayout_5;
    QPushButton *loadStartObject;
    QPushButton *loadStartPopulation;
    QLabel *label_24;
    QLineEdit *loadFile;
    QPushButton *loadStaticParameters;
    QGridLayout *gridLayout_3;
    QLabel *label_26;
    QPushButton *saveStartPopulation;
    QPushButton *saveStartObject;
    QPushButton *saveStaticParameters;
    QLineEdit *saveFile;
    QHBoxLayout *horizontalLayout_8;
    QScrollArea *WyswietlanieDayActions;
    QWidget *scrollAreaWidgetContents;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_8;
    View *plotDayAction;
    QTextBrowser *textBrowser;
    QScrollArea *scrollArea_2;
    QWidget *layout_populacji_startowej;
    QVBoxLayout *verticalLayout_19;
    QHBoxLayout *DolnePrzyciski;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *quitVievport1;
    QSpacerItem *horizontalSpacer;
    QPushButton *toAlgorithm;
    QSpacerItem *horizontalSpacer_3;
    QWidget *ekran2;
    QVBoxLayout *verticalLayout_12;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout_7;
    QLabel *label_10;
    QDoubleSpinBox *minDiff;
    QLabel *label_13;
    QSpinBox *maxIter;
    QLabel *label_14;
    QLineEdit *file;
    QPushButton *savePopulation;
    QPushButton *saveBest;
    QPushButton *saveAlgorithmParameters;
    QPushButton *saveStatus;
    QPushButton *saveGoalTrace;
    QLabel *label_25;
    QFormLayout *formLayout_6;
    QLabel *label_12;
    QSpinBox *maxBest;
    QLabel *label_11;
    QSpinBox *cycleSize;
    QLabel *label_19;
    QSpinBox *maxPopulation;
    QLabel *label_21;
    QSpinBox *numberOfRepeat;
    QLabel *label_22;
    QLineEdit *loadParamAlgFile;
    QPushButton *loadAlgSettings;
    QLabel *label_23;
    View *trace;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *startButton;
    QPushButton *resetButton;
    QPushButton *continueButton;
    QHBoxLayout *horizontalLayout_5;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents_2;
    QVBoxLayout *verticalLayout_10;
    QGroupBox *the_best;
    QVBoxLayout *verticalLayout_16;
    View *plotTheBest;
    QTextBrowser *stringTheBest;
    QScrollArea *lista_chromosomow;
    QWidget *layout_listy;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_10;
    QPushButton *changeStartObjectButton;
    QSpacerItem *horizontalSpacer_12;
    QSpacerItem *horizontalSpacer_13;
    QSpacerItem *horizontalSpacer_9;
    QPushButton *quitButton;
    QSpacerItem *horizontalSpacer_11;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1050, 743);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_9 = new QVBoxLayout(centralWidget);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        zmianaOkna = new QStackedWidget(centralWidget);
        zmianaOkna->setObjectName(QString::fromUtf8("zmianaOkna"));
        ekran1 = new QWidget();
        ekran1->setObjectName(QString::fromUtf8("ekran1"));
        verticalLayout_11 = new QVBoxLayout(ekran1);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(ekran1);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_20 = new QVBoxLayout(tab_4);
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setContentsMargins(11, 11, 11, 11);
        verticalLayout_20->setObjectName(QString::fromUtf8("verticalLayout_20"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        ManipulacjaObiektemStartowym = new QWidget(tab_4);
        ManipulacjaObiektemStartowym->setObjectName(QString::fromUtf8("ManipulacjaObiektemStartowym"));
        verticalLayout_14 = new QVBoxLayout(ManipulacjaObiektemStartowym);
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setContentsMargins(11, 11, 11, 11);
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(6);
        verticalLayout_17->setObjectName(QString::fromUtf8("verticalLayout_17"));
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
        startFactors_y->setMaximum(100);
        startFactors_y->setValue(50);

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
        startFactors_a->setDecimals(4);
        startFactors_a->setMinimum(0.100000000000000);

        formLayout_3->setWidget(1, QFormLayout::FieldRole, startFactors_a);


        verticalLayout_13->addLayout(formLayout_3);

        setStartFactors = new QPushButton(factors);
        setStartFactors->setObjectName(QString::fromUtf8("setStartFactors"));

        verticalLayout_13->addWidget(setStartFactors);


        verticalLayout_17->addWidget(factors);

        deletingRange = new QGroupBox(ManipulacjaObiektemStartowym);
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
        sizePolicy2.setHeightForWidth(deleteRangeBegin->sizePolicy().hasHeightForWidth());
        deleteRangeBegin->setSizePolicy(sizePolicy2);
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
        sizePolicy2.setHeightForWidth(deleteRangeEnd->sizePolicy().hasHeightForWidth());
        deleteRangeEnd->setSizePolicy(sizePolicy2);
        deleteRangeEnd->setMinimumSize(QSize(90, 0));
        deleteRangeEnd->setAlignment(Qt::AlignCenter);

        formLayout_5->setWidget(1, QFormLayout::FieldRole, deleteRangeEnd);


        verticalLayout_2->addLayout(formLayout_5);

        deleteRange = new QPushButton(deletingRange);
        deleteRange->setObjectName(QString::fromUtf8("deleteRange"));

        verticalLayout_2->addWidget(deleteRange);


        verticalLayout_17->addWidget(deletingRange);


        horizontalLayout_3->addLayout(verticalLayout_17);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        actions = new QTabWidget(ManipulacjaObiektemStartowym);
        actions->setObjectName(QString::fromUtf8("actions"));
        QSizePolicy sizePolicy3(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(actions->sizePolicy().hasHeightForWidth());
        actions->setSizePolicy(sizePolicy3);
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
        sizePolicy2.setHeightForWidth(sleepBegin->sizePolicy().hasHeightForWidth());
        sleepBegin->setSizePolicy(sizePolicy2);
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
        sizePolicy2.setHeightForWidth(sleepEnd->sizePolicy().hasHeightForWidth());
        sleepEnd->setSizePolicy(sizePolicy2);
        sleepEnd->setMinimumSize(QSize(90, 0));
        sleepEnd->setAlignment(Qt::AlignCenter);
        sleepEnd->setTime(QTime(8, 0, 0));

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
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Minimum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy4);
        label_6->setMinimumSize(QSize(90, 0));
        label_6->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        coffee_moment = new QTimeEdit(tab);
        coffee_moment->setObjectName(QString::fromUtf8("coffee_moment"));
        sizePolicy4.setHeightForWidth(coffee_moment->sizePolicy().hasHeightForWidth());
        coffee_moment->setSizePolicy(sizePolicy4);
        coffee_moment->setMinimumSize(QSize(90, 0));
        coffee_moment->setTime(QTime(12, 15, 0));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, coffee_moment);

        label_7 = new QLabel(tab);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        sizePolicy4.setHeightForWidth(label_7->sizePolicy().hasHeightForWidth());
        label_7->setSizePolicy(sizePolicy4);
        label_7->setMinimumSize(QSize(90, 0));
        label_7->setAlignment(Qt::AlignCenter);

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_7);

        coffee_quantity = new QSpinBox(tab);
        coffee_quantity->setObjectName(QString::fromUtf8("coffee_quantity"));
        sizePolicy4.setHeightForWidth(coffee_quantity->sizePolicy().hasHeightForWidth());
        coffee_quantity->setSizePolicy(sizePolicy4);
        coffee_quantity->setMinimumSize(QSize(90, 0));
        coffee_quantity->setMaximum(1500);
        coffee_quantity->setValue(60);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, coffee_quantity);


        verticalLayout_5->addLayout(formLayout_2);

        addCoffee = new QPushButton(tab);
        addCoffee->setObjectName(QString::fromUtf8("addCoffee"));

        verticalLayout_5->addWidget(addCoffee);

        actions->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_18 = new QVBoxLayout(tab_3);
        verticalLayout_18->setSpacing(6);
        verticalLayout_18->setContentsMargins(11, 11, 11, 11);
        verticalLayout_18->setObjectName(QString::fromUtf8("verticalLayout_18"));
        addRandom = new QPushButton(tab_3);
        addRandom->setObjectName(QString::fromUtf8("addRandom"));

        verticalLayout_18->addWidget(addRandom);

        actions->addTab(tab_3, QString());

        verticalLayout_7->addWidget(actions);


        horizontalLayout_3->addLayout(verticalLayout_7);


        verticalLayout_14->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);

        removeAddedActions = new QPushButton(ManipulacjaObiektemStartowym);
        removeAddedActions->setObjectName(QString::fromUtf8("removeAddedActions"));

        horizontalLayout_4->addWidget(removeAddedActions);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        check = new QPushButton(ManipulacjaObiektemStartowym);
        check->setObjectName(QString::fromUtf8("check"));

        horizontalLayout_4->addWidget(check);

        horizontalSpacer_14 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_14);

        addToList = new QPushButton(ManipulacjaObiektemStartowym);
        addToList->setObjectName(QString::fromUtf8("addToList"));

        horizontalLayout_4->addWidget(addToList);


        verticalLayout_14->addLayout(horizontalLayout_4);


        horizontalLayout_2->addWidget(ManipulacjaObiektemStartowym);

        static_factors = new QGroupBox(tab_4);
        static_factors->setObjectName(QString::fromUtf8("static_factors"));
        static_factors->setEnabled(true);
        sizePolicy.setHeightForWidth(static_factors->sizePolicy().hasHeightForWidth());
        static_factors->setSizePolicy(sizePolicy);
        static_factors->setMinimumSize(QSize(250, 0));
        static_factors->setAlignment(Qt::AlignCenter);
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
        sizePolicy4.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy4);
        label->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        min_coffee = new QSpinBox(static_factors);
        min_coffee->setObjectName(QString::fromUtf8("min_coffee"));
        QSizePolicy sizePolicy5(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(min_coffee->sizePolicy().hasHeightForWidth());
        min_coffee->setSizePolicy(sizePolicy5);
        min_coffee->setMinimumSize(QSize(90, 0));
        min_coffee->setWrapping(false);
        min_coffee->setAlignment(Qt::AlignCenter);
        min_coffee->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        min_coffee->setMaximum(1500);
        min_coffee->setSingleStep(10);
        min_coffee->setValue(60);

        formLayout->setWidget(0, QFormLayout::FieldRole, min_coffee);

        label_15 = new QLabel(static_factors);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_15);

        factorACoffeeLabel = new QLabel(static_factors);
        factorACoffeeLabel->setObjectName(QString::fromUtf8("factorACoffeeLabel"));
        sizePolicy4.setHeightForWidth(factorACoffeeLabel->sizePolicy().hasHeightForWidth());
        factorACoffeeLabel->setSizePolicy(sizePolicy4);
        factorACoffeeLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(3, QFormLayout::LabelRole, factorACoffeeLabel);

        label_16 = new QLabel(static_factors);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_16);

        wspCzynnikWpYwuSnuLabel = new QLabel(static_factors);
        wspCzynnikWpYwuSnuLabel->setObjectName(QString::fromUtf8("wspCzynnikWpYwuSnuLabel"));
        sizePolicy4.setHeightForWidth(wspCzynnikWpYwuSnuLabel->sizePolicy().hasHeightForWidth());
        wspCzynnikWpYwuSnuLabel->setSizePolicy(sizePolicy4);
        wspCzynnikWpYwuSnuLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(5, QFormLayout::LabelRole, wspCzynnikWpYwuSnuLabel);

        minSleepLabel = new QLabel(static_factors);
        minSleepLabel->setObjectName(QString::fromUtf8("minSleepLabel"));
        sizePolicy4.setHeightForWidth(minSleepLabel->sizePolicy().hasHeightForWidth());
        minSleepLabel->setSizePolicy(sizePolicy4);
        minSleepLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        formLayout->setWidget(6, QFormLayout::LabelRole, minSleepLabel);

        max_coffee = new QSpinBox(static_factors);
        max_coffee->setObjectName(QString::fromUtf8("max_coffee"));
        sizePolicy5.setHeightForWidth(max_coffee->sizePolicy().hasHeightForWidth());
        max_coffee->setSizePolicy(sizePolicy5);
        max_coffee->setMaximum(12000);
        max_coffee->setSingleStep(50);
        max_coffee->setValue(1500);

        formLayout->setWidget(1, QFormLayout::FieldRole, max_coffee);

        y_coffee_mod = new QDoubleSpinBox(static_factors);
        y_coffee_mod->setObjectName(QString::fromUtf8("y_coffee_mod"));
        sizePolicy5.setHeightForWidth(y_coffee_mod->sizePolicy().hasHeightForWidth());
        y_coffee_mod->setSizePolicy(sizePolicy5);
        y_coffee_mod->setDecimals(1);
        y_coffee_mod->setMaximum(10.000000000000000);
        y_coffee_mod->setSingleStep(0.500000000000000);
        y_coffee_mod->setValue(1.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, y_coffee_mod);

        a_coffee_mod = new QDoubleSpinBox(static_factors);
        a_coffee_mod->setObjectName(QString::fromUtf8("a_coffee_mod"));
        sizePolicy5.setHeightForWidth(a_coffee_mod->sizePolicy().hasHeightForWidth());
        a_coffee_mod->setSizePolicy(sizePolicy5);
        a_coffee_mod->setDecimals(2);
        a_coffee_mod->setMinimum(0.200000000000000);
        a_coffee_mod->setMaximum(1.000000000000000);
        a_coffee_mod->setSingleStep(0.100000000000000);
        a_coffee_mod->setValue(1.000000000000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, a_coffee_mod);

        a_sleep_mod = new QDoubleSpinBox(static_factors);
        a_sleep_mod->setObjectName(QString::fromUtf8("a_sleep_mod"));
        sizePolicy5.setHeightForWidth(a_sleep_mod->sizePolicy().hasHeightForWidth());
        a_sleep_mod->setSizePolicy(sizePolicy5);
        a_sleep_mod->setDecimals(1);
        a_sleep_mod->setMinimum(0.500000000000000);
        a_sleep_mod->setMaximum(5.000000000000000);
        a_sleep_mod->setSingleStep(0.100000000000000);
        a_sleep_mod->setValue(3.000000000000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, a_sleep_mod);

        min_sleep = new QSpinBox(static_factors);
        min_sleep->setObjectName(QString::fromUtf8("min_sleep"));
        sizePolicy5.setHeightForWidth(min_sleep->sizePolicy().hasHeightForWidth());
        min_sleep->setSizePolicy(sizePolicy5);
        min_sleep->setMaximum(100);
        min_sleep->setValue(20);

        formLayout->setWidget(6, QFormLayout::FieldRole, min_sleep);

        label_17 = new QLabel(static_factors);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        formLayout->setWidget(8, QFormLayout::LabelRole, label_17);

        label_18 = new QLabel(static_factors);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        formLayout->setWidget(9, QFormLayout::LabelRole, label_18);

        integer_factor = new QDoubleSpinBox(static_factors);
        integer_factor->setObjectName(QString::fromUtf8("integer_factor"));
        sizePolicy5.setHeightForWidth(integer_factor->sizePolicy().hasHeightForWidth());
        integer_factor->setSizePolicy(sizePolicy5);
        integer_factor->setMinimum(-10.000000000000000);
        integer_factor->setMaximum(10.000000000000000);
        integer_factor->setSingleStep(0.100000000000000);
        integer_factor->setValue(1.000000000000000);

        formLayout->setWidget(8, QFormLayout::FieldRole, integer_factor);

        coffee_factor = new QDoubleSpinBox(static_factors);
        coffee_factor->setObjectName(QString::fromUtf8("coffee_factor"));
        sizePolicy5.setHeightForWidth(coffee_factor->sizePolicy().hasHeightForWidth());
        coffee_factor->setSizePolicy(sizePolicy5);
        coffee_factor->setMinimum(-10.000000000000000);
        coffee_factor->setMaximum(10.000000000000000);
        coffee_factor->setSingleStep(0.100000000000000);
        coffee_factor->setValue(1.000000000000000);

        formLayout->setWidget(9, QFormLayout::FieldRole, coffee_factor);

        min_tot_sleep = new QSpinBox(static_factors);
        min_tot_sleep->setObjectName(QString::fromUtf8("min_tot_sleep"));
        sizePolicy5.setHeightForWidth(min_tot_sleep->sizePolicy().hasHeightForWidth());
        min_tot_sleep->setSizePolicy(sizePolicy5);
        min_tot_sleep->setMaximum(1440);
        min_tot_sleep->setValue(180);

        formLayout->setWidget(7, QFormLayout::FieldRole, min_tot_sleep);

        label_20 = new QLabel(static_factors);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        formLayout->setWidget(7, QFormLayout::LabelRole, label_20);


        verticalLayout_6->addLayout(formLayout);

        set_static_factors = new QPushButton(static_factors);
        set_static_factors->setObjectName(QString::fromUtf8("set_static_factors"));
        sizePolicy5.setHeightForWidth(set_static_factors->sizePolicy().hasHeightForWidth());
        set_static_factors->setSizePolicy(sizePolicy5);
        set_static_factors->setCheckable(false);

        verticalLayout_6->addWidget(set_static_factors);


        horizontalLayout_2->addWidget(static_factors);


        verticalLayout_20->addLayout(horizontalLayout_2);

        tabWidget->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QString::fromUtf8("tab_5"));
        verticalLayout_21 = new QVBoxLayout(tab_5);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        loadStartObject = new QPushButton(tab_5);
        loadStartObject->setObjectName(QString::fromUtf8("loadStartObject"));
        sizePolicy2.setHeightForWidth(loadStartObject->sizePolicy().hasHeightForWidth());
        loadStartObject->setSizePolicy(sizePolicy2);
        loadStartObject->setMinimumSize(QSize(150, 0));

        gridLayout_5->addWidget(loadStartObject, 1, 0, 1, 1);

        loadStartPopulation = new QPushButton(tab_5);
        loadStartPopulation->setObjectName(QString::fromUtf8("loadStartPopulation"));
        sizePolicy2.setHeightForWidth(loadStartPopulation->sizePolicy().hasHeightForWidth());
        loadStartPopulation->setSizePolicy(sizePolicy2);
        loadStartPopulation->setMinimumSize(QSize(150, 0));

        gridLayout_5->addWidget(loadStartPopulation, 1, 1, 1, 1);

        label_24 = new QLabel(tab_5);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        sizePolicy1.setHeightForWidth(label_24->sizePolicy().hasHeightForWidth());
        label_24->setSizePolicy(sizePolicy1);
        label_24->setMinimumSize(QSize(150, 0));
        label_24->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(label_24, 0, 0, 1, 1);

        loadFile = new QLineEdit(tab_5);
        loadFile->setObjectName(QString::fromUtf8("loadFile"));
        sizePolicy2.setHeightForWidth(loadFile->sizePolicy().hasHeightForWidth());
        loadFile->setSizePolicy(sizePolicy2);
        loadFile->setMinimumSize(QSize(150, 0));
        loadFile->setAlignment(Qt::AlignCenter);

        gridLayout_5->addWidget(loadFile, 0, 1, 1, 1);

        loadStaticParameters = new QPushButton(tab_5);
        loadStaticParameters->setObjectName(QString::fromUtf8("loadStaticParameters"));
        sizePolicy2.setHeightForWidth(loadStaticParameters->sizePolicy().hasHeightForWidth());
        loadStaticParameters->setSizePolicy(sizePolicy2);
        loadStaticParameters->setMinimumSize(QSize(150, 0));

        gridLayout_5->addWidget(loadStaticParameters, 2, 1, 1, 1);


        horizontalLayout_9->addLayout(gridLayout_5);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_26 = new QLabel(tab_5);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        sizePolicy2.setHeightForWidth(label_26->sizePolicy().hasHeightForWidth());
        label_26->setSizePolicy(sizePolicy2);
        label_26->setMinimumSize(QSize(150, 0));
        label_26->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_26, 0, 0, 1, 1);

        saveStartPopulation = new QPushButton(tab_5);
        saveStartPopulation->setObjectName(QString::fromUtf8("saveStartPopulation"));
        sizePolicy2.setHeightForWidth(saveStartPopulation->sizePolicy().hasHeightForWidth());
        saveStartPopulation->setSizePolicy(sizePolicy2);
        saveStartPopulation->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(saveStartPopulation, 1, 1, 1, 1);

        saveStartObject = new QPushButton(tab_5);
        saveStartObject->setObjectName(QString::fromUtf8("saveStartObject"));
        sizePolicy2.setHeightForWidth(saveStartObject->sizePolicy().hasHeightForWidth());
        saveStartObject->setSizePolicy(sizePolicy2);
        saveStartObject->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(saveStartObject, 1, 0, 1, 1);

        saveStaticParameters = new QPushButton(tab_5);
        saveStaticParameters->setObjectName(QString::fromUtf8("saveStaticParameters"));
        sizePolicy2.setHeightForWidth(saveStaticParameters->sizePolicy().hasHeightForWidth());
        saveStaticParameters->setSizePolicy(sizePolicy2);
        saveStaticParameters->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(saveStaticParameters, 2, 1, 1, 1);

        saveFile = new QLineEdit(tab_5);
        saveFile->setObjectName(QString::fromUtf8("saveFile"));
        sizePolicy2.setHeightForWidth(saveFile->sizePolicy().hasHeightForWidth());
        saveFile->setSizePolicy(sizePolicy2);
        saveFile->setMinimumSize(QSize(150, 0));

        gridLayout_3->addWidget(saveFile, 0, 1, 1, 1);


        horizontalLayout_9->addLayout(gridLayout_3);


        verticalLayout_21->addLayout(horizontalLayout_9);

        tabWidget->addTab(tab_5, QString());

        verticalLayout->addWidget(tabWidget);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        WyswietlanieDayActions = new QScrollArea(ekran1);
        WyswietlanieDayActions->setObjectName(QString::fromUtf8("WyswietlanieDayActions"));
        WyswietlanieDayActions->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 156, 357));
        verticalLayout_3 = new QVBoxLayout(scrollAreaWidgetContents);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox = new QGroupBox(scrollAreaWidgetContents);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QSizePolicy sizePolicy6(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy6);
        verticalLayout_8 = new QVBoxLayout(groupBox);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        plotDayAction = new View(groupBox);
        plotDayAction->setObjectName(QString::fromUtf8("plotDayAction"));
        QSizePolicy sizePolicy7(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(plotDayAction->sizePolicy().hasHeightForWidth());
        plotDayAction->setSizePolicy(sizePolicy7);
        plotDayAction->setMinimumSize(QSize(0, 150));

        verticalLayout_8->addWidget(plotDayAction);

        textBrowser = new QTextBrowser(groupBox);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setEnabled(true);
        textBrowser->setMinimumSize(QSize(0, 150));
        textBrowser->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        textBrowser->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);

        verticalLayout_8->addWidget(textBrowser);


        verticalLayout_3->addWidget(groupBox);

        WyswietlanieDayActions->setWidget(scrollAreaWidgetContents);

        horizontalLayout_8->addWidget(WyswietlanieDayActions);

        scrollArea_2 = new QScrollArea(ekran1);
        scrollArea_2->setObjectName(QString::fromUtf8("scrollArea_2"));
        scrollArea_2->setWidgetResizable(true);
        layout_populacji_startowej = new QWidget();
        layout_populacji_startowej->setObjectName(QString::fromUtf8("layout_populacji_startowej"));
        layout_populacji_startowej->setGeometry(QRect(0, 0, 98, 28));
        verticalLayout_19 = new QVBoxLayout(layout_populacji_startowej);
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setContentsMargins(11, 11, 11, 11);
        verticalLayout_19->setObjectName(QString::fromUtf8("verticalLayout_19"));
        scrollArea_2->setWidget(layout_populacji_startowej);

        horizontalLayout_8->addWidget(scrollArea_2);


        verticalLayout->addLayout(horizontalLayout_8);

        DolnePrzyciski = new QHBoxLayout();
        DolnePrzyciski->setSpacing(6);
        DolnePrzyciski->setObjectName(QString::fromUtf8("DolnePrzyciski"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        DolnePrzyciski->addItem(horizontalSpacer_2);

        quitVievport1 = new QPushButton(ekran1);
        quitVievport1->setObjectName(QString::fromUtf8("quitVievport1"));

        DolnePrzyciski->addWidget(quitVievport1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        DolnePrzyciski->addItem(horizontalSpacer);

        toAlgorithm = new QPushButton(ekran1);
        toAlgorithm->setObjectName(QString::fromUtf8("toAlgorithm"));

        DolnePrzyciski->addWidget(toAlgorithm);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        DolnePrzyciski->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(DolnePrzyciski);


        verticalLayout_11->addLayout(verticalLayout);

        zmianaOkna->addWidget(ekran1);
        ekran2 = new QWidget();
        ekran2->setObjectName(QString::fromUtf8("ekran2"));
        verticalLayout_12 = new QVBoxLayout(ekran2);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        formLayout_7 = new QFormLayout();
        formLayout_7->setSpacing(6);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        formLayout_7->setSizeConstraint(QLayout::SetDefaultConstraint);
        formLayout_7->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        formLayout_7->setRowWrapPolicy(QFormLayout::WrapLongRows);
        formLayout_7->setLabelAlignment(Qt::AlignCenter);
        formLayout_7->setFormAlignment(Qt::AlignCenter);
        label_10 = new QLabel(ekran2);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        sizePolicy1.setHeightForWidth(label_10->sizePolicy().hasHeightForWidth());
        label_10->setSizePolicy(sizePolicy1);
        label_10->setMinimumSize(QSize(150, 0));
        label_10->setAlignment(Qt::AlignCenter);
        label_10->setWordWrap(true);

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_10);

        minDiff = new QDoubleSpinBox(ekran2);
        minDiff->setObjectName(QString::fromUtf8("minDiff"));
        sizePolicy2.setHeightForWidth(minDiff->sizePolicy().hasHeightForWidth());
        minDiff->setSizePolicy(sizePolicy2);
        minDiff->setMinimumSize(QSize(150, 0));
        minDiff->setAlignment(Qt::AlignCenter);
        minDiff->setDecimals(4);
        minDiff->setSingleStep(0.010000000000000);
        minDiff->setValue(0.000100000000000);

        formLayout_7->setWidget(0, QFormLayout::FieldRole, minDiff);

        label_13 = new QLabel(ekran2);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        sizePolicy1.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy1);
        label_13->setMinimumSize(QSize(150, 0));
        label_13->setAlignment(Qt::AlignCenter);
        label_13->setWordWrap(true);

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_13);

        maxIter = new QSpinBox(ekran2);
        maxIter->setObjectName(QString::fromUtf8("maxIter"));
        sizePolicy2.setHeightForWidth(maxIter->sizePolicy().hasHeightForWidth());
        maxIter->setSizePolicy(sizePolicy2);
        maxIter->setMinimumSize(QSize(150, 0));
        maxIter->setAlignment(Qt::AlignCenter);
        maxIter->setMinimum(20);
        maxIter->setMaximum(3000);
        maxIter->setSingleStep(10);
        maxIter->setValue(100);

        formLayout_7->setWidget(1, QFormLayout::FieldRole, maxIter);

        label_14 = new QLabel(ekran2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        sizePolicy1.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy1);
        label_14->setMinimumSize(QSize(150, 0));
        label_14->setAlignment(Qt::AlignCenter);
        label_14->setWordWrap(true);

        formLayout_7->setWidget(2, QFormLayout::LabelRole, label_14);

        file = new QLineEdit(ekran2);
        file->setObjectName(QString::fromUtf8("file"));
        sizePolicy2.setHeightForWidth(file->sizePolicy().hasHeightForWidth());
        file->setSizePolicy(sizePolicy2);
        file->setMinimumSize(QSize(150, 0));
        file->setAlignment(Qt::AlignCenter);

        formLayout_7->setWidget(2, QFormLayout::FieldRole, file);

        savePopulation = new QPushButton(ekran2);
        savePopulation->setObjectName(QString::fromUtf8("savePopulation"));
        sizePolicy2.setHeightForWidth(savePopulation->sizePolicy().hasHeightForWidth());
        savePopulation->setSizePolicy(sizePolicy2);
        savePopulation->setMinimumSize(QSize(150, 0));
        savePopulation->setToolTipDuration(-4);
        savePopulation->setLayoutDirection(Qt::LeftToRight);
        savePopulation->setAutoFillBackground(false);

        formLayout_7->setWidget(3, QFormLayout::LabelRole, savePopulation);

        saveBest = new QPushButton(ekran2);
        saveBest->setObjectName(QString::fromUtf8("saveBest"));
        sizePolicy2.setHeightForWidth(saveBest->sizePolicy().hasHeightForWidth());
        saveBest->setSizePolicy(sizePolicy2);
        saveBest->setMinimumSize(QSize(150, 0));
        saveBest->setToolTipDuration(-4);

        formLayout_7->setWidget(3, QFormLayout::FieldRole, saveBest);

        saveAlgorithmParameters = new QPushButton(ekran2);
        saveAlgorithmParameters->setObjectName(QString::fromUtf8("saveAlgorithmParameters"));
        sizePolicy2.setHeightForWidth(saveAlgorithmParameters->sizePolicy().hasHeightForWidth());
        saveAlgorithmParameters->setSizePolicy(sizePolicy2);
        saveAlgorithmParameters->setMinimumSize(QSize(150, 0));
        saveAlgorithmParameters->setToolTipDuration(-4);

        formLayout_7->setWidget(4, QFormLayout::LabelRole, saveAlgorithmParameters);

        saveStatus = new QPushButton(ekran2);
        saveStatus->setObjectName(QString::fromUtf8("saveStatus"));
        sizePolicy2.setHeightForWidth(saveStatus->sizePolicy().hasHeightForWidth());
        saveStatus->setSizePolicy(sizePolicy2);
        saveStatus->setMinimumSize(QSize(150, 0));
        saveStatus->setToolTipDuration(-4);

        formLayout_7->setWidget(4, QFormLayout::FieldRole, saveStatus);

        saveGoalTrace = new QPushButton(ekran2);
        saveGoalTrace->setObjectName(QString::fromUtf8("saveGoalTrace"));
        sizePolicy2.setHeightForWidth(saveGoalTrace->sizePolicy().hasHeightForWidth());
        saveGoalTrace->setSizePolicy(sizePolicy2);
        saveGoalTrace->setMinimumSize(QSize(150, 0));

        formLayout_7->setWidget(5, QFormLayout::FieldRole, saveGoalTrace);

        label_25 = new QLabel(ekran2);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        sizePolicy1.setHeightForWidth(label_25->sizePolicy().hasHeightForWidth());
        label_25->setSizePolicy(sizePolicy1);
        label_25->setMinimumSize(QSize(150, 0));

        formLayout_7->setWidget(5, QFormLayout::LabelRole, label_25);


        horizontalLayout_6->addLayout(formLayout_7);

        formLayout_6 = new QFormLayout();
        formLayout_6->setSpacing(6);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        formLayout_6->setLabelAlignment(Qt::AlignCenter);
        formLayout_6->setFormAlignment(Qt::AlignCenter);
        label_12 = new QLabel(ekran2);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        sizePolicy1.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy1);
        label_12->setMinimumSize(QSize(150, 0));
        label_12->setTextFormat(Qt::PlainText);
        label_12->setScaledContents(false);
        label_12->setAlignment(Qt::AlignCenter);
        label_12->setWordWrap(true);

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_12);

        maxBest = new QSpinBox(ekran2);
        maxBest->setObjectName(QString::fromUtf8("maxBest"));
        sizePolicy2.setHeightForWidth(maxBest->sizePolicy().hasHeightForWidth());
        maxBest->setSizePolicy(sizePolicy2);
        maxBest->setMinimumSize(QSize(150, 0));
        maxBest->setLayoutDirection(Qt::LeftToRight);
        maxBest->setWrapping(false);
        maxBest->setAlignment(Qt::AlignCenter);
        maxBest->setMinimum(2);
        maxBest->setMaximum(20);
        maxBest->setValue(10);

        formLayout_6->setWidget(0, QFormLayout::FieldRole, maxBest);

        label_11 = new QLabel(ekran2);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        sizePolicy1.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy1);
        label_11->setMinimumSize(QSize(150, 0));
        label_11->setTextFormat(Qt::PlainText);
        label_11->setScaledContents(false);
        label_11->setAlignment(Qt::AlignCenter);
        label_11->setWordWrap(true);

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_11);

        cycleSize = new QSpinBox(ekran2);
        cycleSize->setObjectName(QString::fromUtf8("cycleSize"));
        sizePolicy2.setHeightForWidth(cycleSize->sizePolicy().hasHeightForWidth());
        cycleSize->setSizePolicy(sizePolicy2);
        cycleSize->setMinimumSize(QSize(150, 0));
        cycleSize->setLayoutDirection(Qt::LeftToRight);
        cycleSize->setWrapping(false);
        cycleSize->setAlignment(Qt::AlignCenter);

        formLayout_6->setWidget(1, QFormLayout::FieldRole, cycleSize);

        label_19 = new QLabel(ekran2);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        QSizePolicy sizePolicy8(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy8.setHorizontalStretch(0);
        sizePolicy8.setVerticalStretch(0);
        sizePolicy8.setHeightForWidth(label_19->sizePolicy().hasHeightForWidth());
        label_19->setSizePolicy(sizePolicy8);
        label_19->setMinimumSize(QSize(150, 0));
        label_19->setAlignment(Qt::AlignCenter);

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_19);

        maxPopulation = new QSpinBox(ekran2);
        maxPopulation->setObjectName(QString::fromUtf8("maxPopulation"));
        sizePolicy2.setHeightForWidth(maxPopulation->sizePolicy().hasHeightForWidth());
        maxPopulation->setSizePolicy(sizePolicy2);
        maxPopulation->setMinimumSize(QSize(150, 0));
        maxPopulation->setLayoutDirection(Qt::LeftToRight);
        maxPopulation->setWrapping(false);
        maxPopulation->setAlignment(Qt::AlignCenter);
        maxPopulation->setMinimum(21);
        maxPopulation->setMaximum(3000);
        maxPopulation->setSingleStep(5);
        maxPopulation->setValue(200);

        formLayout_6->setWidget(2, QFormLayout::FieldRole, maxPopulation);

        label_21 = new QLabel(ekran2);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        sizePolicy8.setHeightForWidth(label_21->sizePolicy().hasHeightForWidth());
        label_21->setSizePolicy(sizePolicy8);
        label_21->setMinimumSize(QSize(150, 0));
        label_21->setLayoutDirection(Qt::LeftToRight);
        label_21->setTextFormat(Qt::AutoText);
        label_21->setScaledContents(false);
        label_21->setAlignment(Qt::AlignCenter);
        label_21->setWordWrap(true);
        label_21->setOpenExternalLinks(false);
        label_21->setTextInteractionFlags(Qt::NoTextInteraction);

        formLayout_6->setWidget(3, QFormLayout::LabelRole, label_21);

        numberOfRepeat = new QSpinBox(ekran2);
        numberOfRepeat->setObjectName(QString::fromUtf8("numberOfRepeat"));
        QSizePolicy sizePolicy9(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy9.setHorizontalStretch(0);
        sizePolicy9.setVerticalStretch(0);
        sizePolicy9.setHeightForWidth(numberOfRepeat->sizePolicy().hasHeightForWidth());
        numberOfRepeat->setSizePolicy(sizePolicy9);
        numberOfRepeat->setMinimumSize(QSize(150, 0));
        numberOfRepeat->setAlignment(Qt::AlignCenter);
        numberOfRepeat->setValue(2);

        formLayout_6->setWidget(3, QFormLayout::FieldRole, numberOfRepeat);

        label_22 = new QLabel(ekran2);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        sizePolicy1.setHeightForWidth(label_22->sizePolicy().hasHeightForWidth());
        label_22->setSizePolicy(sizePolicy1);
        label_22->setMinimumSize(QSize(150, 0));
        label_22->setAlignment(Qt::AlignCenter);

        formLayout_6->setWidget(4, QFormLayout::LabelRole, label_22);

        loadParamAlgFile = new QLineEdit(ekran2);
        loadParamAlgFile->setObjectName(QString::fromUtf8("loadParamAlgFile"));
        sizePolicy2.setHeightForWidth(loadParamAlgFile->sizePolicy().hasHeightForWidth());
        loadParamAlgFile->setSizePolicy(sizePolicy2);
        loadParamAlgFile->setMinimumSize(QSize(150, 0));

        formLayout_6->setWidget(4, QFormLayout::FieldRole, loadParamAlgFile);

        loadAlgSettings = new QPushButton(ekran2);
        loadAlgSettings->setObjectName(QString::fromUtf8("loadAlgSettings"));
        sizePolicy9.setHeightForWidth(loadAlgSettings->sizePolicy().hasHeightForWidth());
        loadAlgSettings->setSizePolicy(sizePolicy9);
        loadAlgSettings->setMinimumSize(QSize(150, 0));
        loadAlgSettings->setMaximumSize(QSize(150, 16777215));
        loadAlgSettings->setCheckable(false);
        loadAlgSettings->setAutoExclusive(false);

        formLayout_6->setWidget(5, QFormLayout::FieldRole, loadAlgSettings);

        label_23 = new QLabel(ekran2);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        sizePolicy1.setHeightForWidth(label_23->sizePolicy().hasHeightForWidth());
        label_23->setSizePolicy(sizePolicy1);
        label_23->setMinimumSize(QSize(150, 0));

        formLayout_6->setWidget(5, QFormLayout::LabelRole, label_23);


        horizontalLayout_6->addLayout(formLayout_6);

        trace = new View(ekran2);
        trace->setObjectName(QString::fromUtf8("trace"));

        horizontalLayout_6->addWidget(trace);


        verticalLayout_12->addLayout(horizontalLayout_6);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        startButton = new QPushButton(ekran2);
        startButton->setObjectName(QString::fromUtf8("startButton"));

        horizontalLayout_7->addWidget(startButton, 0, Qt::AlignHCenter);

        resetButton = new QPushButton(ekran2);
        resetButton->setObjectName(QString::fromUtf8("resetButton"));
        resetButton->setEnabled(true);

        horizontalLayout_7->addWidget(resetButton, 0, Qt::AlignHCenter);

        continueButton = new QPushButton(ekran2);
        continueButton->setObjectName(QString::fromUtf8("continueButton"));
        continueButton->setEnabled(false);
        continueButton->setAutoDefault(false);
        continueButton->setFlat(false);

        horizontalLayout_7->addWidget(continueButton, 0, Qt::AlignHCenter);


        verticalLayout_12->addLayout(horizontalLayout_7);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        scrollArea = new QScrollArea(ekran2);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents_2 = new QWidget();
        scrollAreaWidgetContents_2->setObjectName(QString::fromUtf8("scrollAreaWidgetContents_2"));
        scrollAreaWidgetContents_2->setGeometry(QRect(0, 0, 484, 449));
        verticalLayout_10 = new QVBoxLayout(scrollAreaWidgetContents_2);
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setContentsMargins(11, 11, 11, 11);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        the_best = new QGroupBox(scrollAreaWidgetContents_2);
        the_best->setObjectName(QString::fromUtf8("the_best"));
        QSizePolicy sizePolicy10(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy10.setHorizontalStretch(0);
        sizePolicy10.setVerticalStretch(0);
        sizePolicy10.setHeightForWidth(the_best->sizePolicy().hasHeightForWidth());
        the_best->setSizePolicy(sizePolicy10);
        verticalLayout_16 = new QVBoxLayout(the_best);
        verticalLayout_16->setSpacing(6);
        verticalLayout_16->setContentsMargins(11, 11, 11, 11);
        verticalLayout_16->setObjectName(QString::fromUtf8("verticalLayout_16"));
        plotTheBest = new View(the_best);
        plotTheBest->setObjectName(QString::fromUtf8("plotTheBest"));
        sizePolicy7.setHeightForWidth(plotTheBest->sizePolicy().hasHeightForWidth());
        plotTheBest->setSizePolicy(sizePolicy7);
        plotTheBest->setMinimumSize(QSize(0, 150));

        verticalLayout_16->addWidget(plotTheBest);

        stringTheBest = new QTextBrowser(the_best);
        stringTheBest->setObjectName(QString::fromUtf8("stringTheBest"));
        QSizePolicy sizePolicy11(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy11.setHorizontalStretch(0);
        sizePolicy11.setVerticalStretch(0);
        sizePolicy11.setHeightForWidth(stringTheBest->sizePolicy().hasHeightForWidth());
        stringTheBest->setSizePolicy(sizePolicy11);
        stringTheBest->setMinimumSize(QSize(0, 200));

        verticalLayout_16->addWidget(stringTheBest);


        verticalLayout_10->addWidget(the_best);

        scrollArea->setWidget(scrollAreaWidgetContents_2);

        horizontalLayout_5->addWidget(scrollArea);

        lista_chromosomow = new QScrollArea(ekran2);
        lista_chromosomow->setObjectName(QString::fromUtf8("lista_chromosomow"));
        lista_chromosomow->setWidgetResizable(true);
        layout_listy = new QWidget();
        layout_listy->setObjectName(QString::fromUtf8("layout_listy"));
        layout_listy->setGeometry(QRect(0, 0, 501, 310));
        verticalLayout_15 = new QVBoxLayout(layout_listy);
        verticalLayout_15->setSpacing(6);
        verticalLayout_15->setContentsMargins(11, 11, 11, 11);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        lista_chromosomow->setWidget(layout_listy);

        horizontalLayout_5->addWidget(lista_chromosomow);


        verticalLayout_12->addLayout(horizontalLayout_5);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_10 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_10);

        changeStartObjectButton = new QPushButton(ekran2);
        changeStartObjectButton->setObjectName(QString::fromUtf8("changeStartObjectButton"));

        horizontalLayout->addWidget(changeStartObjectButton);

        horizontalSpacer_12 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_12);

        horizontalSpacer_13 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_13);

        horizontalSpacer_9 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_9);

        quitButton = new QPushButton(ekran2);
        quitButton->setObjectName(QString::fromUtf8("quitButton"));

        horizontalLayout->addWidget(quitButton);

        horizontalSpacer_11 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_11);


        verticalLayout_12->addLayout(horizontalLayout);

        zmianaOkna->addWidget(ekran2);

        verticalLayout_9->addWidget(zmianaOkna);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1050, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label->setBuddy(min_coffee);
#endif // QT_NO_SHORTCUT

        retranslateUi(MainWindow);
        QObject::connect(quitVievport1, SIGNAL(clicked()), MainWindow, SLOT(close()));
        QObject::connect(quitButton, SIGNAL(clicked()), MainWindow, SLOT(close()));

        zmianaOkna->setCurrentIndex(1);
        tabWidget->setCurrentIndex(1);
        actions->setCurrentIndex(2);
        loadAlgSettings->setDefault(false);
        continueButton->setDefault(false);


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
        addRandom->setText(QApplication::translate("MainWindow", "Dodaj Losow\304\205 Czynno\305\233\304\207", nullptr));
        actions->setTabText(actions->indexOf(tab_3), QApplication::translate("MainWindow", "Losowa czynno\305\233\304\207", nullptr));
        removeAddedActions->setText(QApplication::translate("MainWindow", "Usu\305\204 dodane czynno\305\233ci", nullptr));
        check->setText(QApplication::translate("MainWindow", "Sprwad\305\272 ograniczenia i popraw", nullptr));
        addToList->setText(QApplication::translate("MainWindow", "Dodaj do listy", nullptr));
        static_factors->setTitle(QApplication::translate("MainWindow", "Wsp\303\263\305\202czynniki Statyczne:", nullptr));
        label->setText(QApplication::translate("MainWindow", "Minimalna Porcja Kawy:", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "Max. ilo\305\233\304\207 kawy / dzie\305\204:", nullptr));
        factorACoffeeLabel->setText(QApplication::translate("MainWindow", "Wsp\303\263\305\202czynnik funkcji modyfikacji y  kawy :", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "Wsp\303\263\305\202czynnik funkcji  modyfikacji a kawy:", nullptr));
        wspCzynnikWpYwuSnuLabel->setText(QApplication::translate("MainWindow", "Wsp\303\263\305\202czynnik funkcji modyfikacji a snu:", nullptr));
        minSleepLabel->setText(QApplication::translate("MainWindow", "Minimalny Czas Snu:", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "Wp\305\202yw efektywno\305\233ci na funkcje celu:", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "Wp\305\202yw ilo\305\233ci spo\305\274ytej kawy na funkcj\304\231 celu:", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "Min. czas sumarycznego snu", nullptr));
        set_static_factors->setText(QApplication::translate("MainWindow", "Ustaw Wsp\303\263\305\202czynnki", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("MainWindow", "Obiekty pocz\304\205tkowe", nullptr));
        loadStartObject->setText(QApplication::translate("MainWindow", "Za\305\202aduj Obiekt Startowy", nullptr));
        loadStartPopulation->setText(QApplication::translate("MainWindow", "Za\305\202aduj Populacj\304\231 Startow\304\205", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "Plik do odczytu:", nullptr));
        loadStaticParameters->setText(QApplication::translate("MainWindow", "Za\305\202aduj Parametry Statyczne", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "Plik do zapisu:", nullptr));
        saveStartPopulation->setText(QApplication::translate("MainWindow", "Zapisz Populacj\304\231 Startow\304\205", nullptr));
        saveStartObject->setText(QApplication::translate("MainWindow", "Zapisz Obiekt Startowy", nullptr));
        saveStaticParameters->setText(QApplication::translate("MainWindow", "Zapisz Parametry Statyczne", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_5), QApplication::translate("MainWindow", "Za\305\202aduj z pliku", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Podgl\304\205d Ci\304\205gu Czynno\305\233ci", nullptr));
        quitVievport1->setText(QApplication::translate("MainWindow", "Quit", nullptr));
        toAlgorithm->setText(QApplication::translate("MainWindow", "Do Algorytmu", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "Min. r\303\263\305\274nica przy wyborze rozwi\304\205zania:", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "Max. iteracji:", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "Plik do zapisu:", nullptr));
        savePopulation->setText(QApplication::translate("MainWindow", "ZAPISZ POPULACJ\304\230", nullptr));
        saveBest->setText(QApplication::translate("MainWindow", "ZAPISZ BIE\305\273\304\204CY NAJLEPSZY WYNIK", nullptr));
        saveAlgorithmParameters->setText(QApplication::translate("MainWindow", "ZAPISZ PARAMETRY ALGORYTMU", nullptr));
        saveStatus->setText(QApplication::translate("MainWindow", "ZAPISZ STATUS", nullptr));
        saveGoalTrace->setText(QApplication::translate("MainWindow", "ZAPISZ PRZEBIEG FUNKCJI CELU", nullptr));
        label_25->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "Max. ilo\305\233\304\207 wybieranych najlepzych osobnik\303\263w", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "ilo\305\233\304\207 pokole\305\204 do przerwania:", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "Max. polpulacji:", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "Liczba powt\303\263rze\305\204 najlepszego osobnika", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "Plik do odczytu:", nullptr));
        loadAlgSettings->setText(QApplication::translate("MainWindow", "ZA\305\201ADUJ USTAWIENIA", nullptr));
        label_23->setText(QString());
        startButton->setText(QApplication::translate("MainWindow", "START", nullptr));
        resetButton->setText(QApplication::translate("MainWindow", "RESET", nullptr));
        continueButton->setText(QApplication::translate("MainWindow", "KONTYNUJ", nullptr));
        the_best->setTitle(QApplication::translate("MainWindow", "Aktualne rozwi\304\205zanie:", nullptr));
        changeStartObjectButton->setText(QApplication::translate("MainWindow", "ZMIE\305\203 OBIEKT POCZ\304\204TKOWY ", nullptr));
        quitButton->setText(QApplication::translate("MainWindow", "QUIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H

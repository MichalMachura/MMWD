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
#include <QtWidgets/QGridLayout>
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
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_3;
    QGroupBox *factors;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QDoubleSpinBox *startFactors_a;
    QSpinBox *startFactors_y;
    QLabel *label_2;
    QPushButton *setStartFactors;
    QVBoxLayout *verticalLayout_7;
    QTabWidget *actions;
    QWidget *tab_2;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_2;
    QTimeEdit *sleepBegin;
    QLabel *label_5;
    QTimeEdit *sleepEnd;
    QLabel *label_4;
    QPushButton *addSleep;
    QWidget *tab;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QGridLayout *gridLayout_3;
    QTimeEdit *coffee_moment;
    QSpinBox *coffee_quantity;
    QLabel *label_6;
    QLabel *label_7;
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
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
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
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QWidget *verticalLayoutWidget_8;
    QVBoxLayout *verticalLayout_8;
    QGroupBox *groupBox;
    QWidget *verticalLayoutWidget_9;
    QVBoxLayout *verticalLayout_9;
    QGraphicsView *graphicsView;
    QTextBrowser *textBrowser;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *quitVievport1;
    QSpacerItem *horizontalSpacer;
    QPushButton *toAlgorithm;
    QSpacerItem *horizontalSpacer_3;
    QWidget *page_2;
    QRadioButton *radioButton;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1102, 753);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        stackedWidget = new QStackedWidget(centralWidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(0, 0, 1101, 691));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        verticalLayoutWidget = new QWidget(page);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(9, 9, 1081, 671));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        factors = new QGroupBox(verticalLayoutWidget);
        factors->setObjectName(QString::fromUtf8("factors"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(factors->sizePolicy().hasHeightForWidth());
        factors->setSizePolicy(sizePolicy);
        verticalLayoutWidget_4 = new QWidget(factors);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(10, 10, 241, 261));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_3 = new QLabel(verticalLayoutWidget_4);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        startFactors_a = new QDoubleSpinBox(verticalLayoutWidget_4);
        startFactors_a->setObjectName(QString::fromUtf8("startFactors_a"));

        gridLayout->addWidget(startFactors_a, 1, 1, 1, 1);

        startFactors_y = new QSpinBox(verticalLayoutWidget_4);
        startFactors_y->setObjectName(QString::fromUtf8("startFactors_y"));
        startFactors_y->setProperty("y_value", QVariant(5u));

        gridLayout->addWidget(startFactors_y, 0, 1, 1, 1);

        label_2 = new QLabel(verticalLayoutWidget_4);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setLayoutDirection(Qt::LeftToRight);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 0, 0, 1, 1);


        verticalLayout_4->addLayout(gridLayout);

        setStartFactors = new QPushButton(verticalLayoutWidget_4);
        setStartFactors->setObjectName(QString::fromUtf8("setStartFactors"));

        verticalLayout_4->addWidget(setStartFactors);


        horizontalLayout_3->addWidget(factors);

        verticalLayout_7 = new QVBoxLayout();
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        actions = new QTabWidget(verticalLayoutWidget);
        actions->setObjectName(QString::fromUtf8("actions"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(actions->sizePolicy().hasHeightForWidth());
        actions->setSizePolicy(sizePolicy1);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayoutWidget_5 = new QWidget(tab_2);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(-1, -1, 251, 251));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        sleepBegin = new QTimeEdit(verticalLayoutWidget_5);
        sleepBegin->setObjectName(QString::fromUtf8("sleepBegin"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(sleepBegin->sizePolicy().hasHeightForWidth());
        sleepBegin->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(sleepBegin, 0, 1, 1, 1);

        label_5 = new QLabel(verticalLayoutWidget_5);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_5, 1, 0, 1, 1);

        sleepEnd = new QTimeEdit(verticalLayoutWidget_5);
        sleepEnd->setObjectName(QString::fromUtf8("sleepEnd"));
        sizePolicy2.setHeightForWidth(sleepEnd->sizePolicy().hasHeightForWidth());
        sleepEnd->setSizePolicy(sizePolicy2);

        gridLayout_2->addWidget(sleepEnd, 1, 1, 1, 1);

        label_4 = new QLabel(verticalLayoutWidget_5);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout_2->addWidget(label_4, 0, 0, 1, 1);


        verticalLayout_5->addLayout(gridLayout_2);

        addSleep = new QPushButton(verticalLayoutWidget_5);
        addSleep->setObjectName(QString::fromUtf8("addSleep"));

        verticalLayout_5->addWidget(addSleep);

        actions->addTab(tab_2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayoutWidget_6 = new QWidget(tab);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(-1, -1, 251, 251));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        coffee_moment = new QTimeEdit(verticalLayoutWidget_6);
        coffee_moment->setObjectName(QString::fromUtf8("coffee_moment"));

        gridLayout_3->addWidget(coffee_moment, 0, 1, 1, 1);

        coffee_quantity = new QSpinBox(verticalLayoutWidget_6);
        coffee_quantity->setObjectName(QString::fromUtf8("coffee_quantity"));

        gridLayout_3->addWidget(coffee_quantity, 1, 1, 1, 1);

        label_6 = new QLabel(verticalLayoutWidget_6);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        label_7 = new QLabel(verticalLayoutWidget_6);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);


        verticalLayout_6->addLayout(gridLayout_3);

        addCoffee = new QPushButton(verticalLayoutWidget_6);
        addCoffee->setObjectName(QString::fromUtf8("addCoffee"));

        verticalLayout_6->addWidget(addCoffee);

        actions->addTab(tab, QString());

        verticalLayout_7->addWidget(actions);


        horizontalLayout_3->addLayout(verticalLayout_7);


        verticalLayout_2->addLayout(horizontalLayout_3);

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

        check = new QPushButton(verticalLayoutWidget);
        check->setObjectName(QString::fromUtf8("check"));

        horizontalLayout_4->addWidget(check);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_5);

        removeAddedActions = new QPushButton(verticalLayoutWidget);
        removeAddedActions->setObjectName(QString::fromUtf8("removeAddedActions"));

        horizontalLayout_4->addWidget(removeAddedActions);


        verticalLayout_2->addLayout(horizontalLayout_4);


        horizontalLayout_2->addLayout(verticalLayout_2);

        static_factors = new QGroupBox(verticalLayoutWidget);
        static_factors->setObjectName(QString::fromUtf8("static_factors"));
        static_factors->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::MinimumExpanding, QSizePolicy::Minimum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(static_factors->sizePolicy().hasHeightForWidth());
        static_factors->setSizePolicy(sizePolicy3);
        static_factors->setMinimumSize(QSize(250, 0));
        verticalLayoutWidget_3 = new QWidget(static_factors);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(0, 20, 531, 291));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        formLayout->setFormAlignment(Qt::AlignCenter);
        formLayout->setHorizontalSpacing(0);
        label = new QLabel(verticalLayoutWidget_3);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        spinBox = new QSpinBox(verticalLayoutWidget_3);
        spinBox->setObjectName(QString::fromUtf8("spinBox"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(spinBox->sizePolicy().hasHeightForWidth());
        spinBox->setSizePolicy(sizePolicy4);
        spinBox->setMinimumSize(QSize(90, 0));

        formLayout->setWidget(0, QFormLayout::FieldRole, spinBox);

        minSleepLabel = new QLabel(verticalLayoutWidget_3);
        minSleepLabel->setObjectName(QString::fromUtf8("minSleepLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, minSleepLabel);

        miniSleep = new QSpinBox(verticalLayoutWidget_3);
        miniSleep->setObjectName(QString::fromUtf8("miniSleep"));
        sizePolicy4.setHeightForWidth(miniSleep->sizePolicy().hasHeightForWidth());
        miniSleep->setSizePolicy(sizePolicy4);
        miniSleep->setMinimumSize(QSize(90, 0));

        formLayout->setWidget(1, QFormLayout::FieldRole, miniSleep);

        factorACoffeeLabel = new QLabel(verticalLayoutWidget_3);
        factorACoffeeLabel->setObjectName(QString::fromUtf8("factorACoffeeLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, factorACoffeeLabel);

        factorACoffee = new QSpinBox(verticalLayoutWidget_3);
        factorACoffee->setObjectName(QString::fromUtf8("factorACoffee"));
        sizePolicy4.setHeightForWidth(factorACoffee->sizePolicy().hasHeightForWidth());
        factorACoffee->setSizePolicy(sizePolicy4);
        factorACoffee->setMinimumSize(QSize(90, 0));

        formLayout->setWidget(2, QFormLayout::FieldRole, factorACoffee);

        wspCzynnikWpYwuSnuLabel = new QLabel(verticalLayoutWidget_3);
        wspCzynnikWpYwuSnuLabel->setObjectName(QString::fromUtf8("wspCzynnikWpYwuSnuLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, wspCzynnikWpYwuSnuLabel);

        factorASleep = new QSpinBox(verticalLayoutWidget_3);
        factorASleep->setObjectName(QString::fromUtf8("factorASleep"));
        sizePolicy4.setHeightForWidth(factorASleep->sizePolicy().hasHeightForWidth());
        factorASleep->setSizePolicy(sizePolicy4);
        factorASleep->setMinimumSize(QSize(90, 0));

        formLayout->setWidget(3, QFormLayout::FieldRole, factorASleep);


        verticalLayout_3->addLayout(formLayout);

        pushButton_2 = new QPushButton(verticalLayoutWidget_3);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        verticalLayout_3->addWidget(pushButton_2);


        horizontalLayout_2->addWidget(static_factors);


        verticalLayout->addLayout(horizontalLayout_2);

        scrollArea = new QScrollArea(verticalLayoutWidget);
        scrollArea->setObjectName(QString::fromUtf8("scrollArea"));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QString::fromUtf8("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 1077, 314));
        verticalLayoutWidget_8 = new QWidget(scrollAreaWidgetContents);
        verticalLayoutWidget_8->setObjectName(QString::fromUtf8("verticalLayoutWidget_8"));
        verticalLayoutWidget_8->setGeometry(QRect(0, 0, 1071, 311));
        verticalLayout_8 = new QVBoxLayout(verticalLayoutWidget_8);
        verticalLayout_8->setSpacing(6);
        verticalLayout_8->setContentsMargins(11, 11, 11, 11);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        verticalLayout_8->setContentsMargins(0, 0, 0, 0);
        groupBox = new QGroupBox(verticalLayoutWidget_8);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayoutWidget_9 = new QWidget(groupBox);
        verticalLayoutWidget_9->setObjectName(QString::fromUtf8("verticalLayoutWidget_9"));
        verticalLayoutWidget_9->setGeometry(QRect(10, 10, 1051, 291));
        verticalLayout_9 = new QVBoxLayout(verticalLayoutWidget_9);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        verticalLayout_9->setContentsMargins(0, 0, 0, 0);
        graphicsView = new QGraphicsView(verticalLayoutWidget_9);
        graphicsView->setObjectName(QString::fromUtf8("graphicsView"));
        graphicsView->setProperty("y_value", QVariant(0u));

        verticalLayout_9->addWidget(graphicsView);

        textBrowser = new QTextBrowser(verticalLayoutWidget_9);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));

        verticalLayout_9->addWidget(textBrowser);


        verticalLayout_8->addWidget(groupBox);

        scrollArea->setWidget(scrollAreaWidgetContents);

        verticalLayout->addWidget(scrollArea);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        quitVievport1 = new QPushButton(verticalLayoutWidget);
        quitVievport1->setObjectName(QString::fromUtf8("quitVievport1"));

        horizontalLayout->addWidget(quitVievport1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        toAlgorithm = new QPushButton(verticalLayoutWidget);
        toAlgorithm->setObjectName(QString::fromUtf8("toAlgorithm"));

        horizontalLayout->addWidget(toAlgorithm);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);


        verticalLayout->addLayout(horizontalLayout);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        radioButton = new QRadioButton(page_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(150, 240, 82, 17));
        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1102, 21));
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
        actions->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        factors->setTitle(QApplication::translate("MainWindow", "Wsp\303\263\305\202czynniki Startowe:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "a:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "y:", nullptr));
        setStartFactors->setText(QApplication::translate("MainWindow", "Ustaw Wsp\303\263\305\202czynniki Startowe", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Stop:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "Start:", nullptr));
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

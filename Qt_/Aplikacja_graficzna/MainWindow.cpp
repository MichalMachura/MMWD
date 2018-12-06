#include "ui_MainWindow.h"
#include "MainWindow.hpp"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
    {
    using namespace std;
    st_factors = Factors(0,0);
    sleep = make_shared<Sleep>();
    coffee = make_shared<Coffee>();

    //wrzucamy do wektora obiekty wzorcowe
    vec.push_back(shared_ptr_Action(sleep));
    vec.push_back(shared_ptr_Action(coffee));

    //wrzucamy do vectora funkcje
    fun.push_back(Sleep::checkRestrictionAndRetake);
    fun.push_back(Coffee::checkRestrictionAndRetake);

    gF = make_shared<CoffeeAndSleepGoalFunction>();

    dayAction = make_shared<DayActions>(gF,vec,fun,st_factors);

    ui->setupUi(this);
    ui->textBrowser->setText(QString::fromStdString(dayAction->toString()));


    connect(ui->startFactors_y,SIGNAL(valueChanged(int)),this,SLOT(whenStartFactorsY(int)));
    connect(ui->startFactors_a,SIGNAL(valueChanged(double)),this,SLOT(whenStartFactorsA(double)));
    connect(ui->coffee_quantity,SIGNAL(valueChanged(int)),this,SLOT(whenCoffeeQuantity(int)));
    connect(ui->sleepBegin,SIGNAL(userTimeChanged(QTime)),this,SLOT(whenSleepBeginChanged(QTime)));
    connect(ui->sleepEnd,SIGNAL(userTimeChanged(QTime)),this,SLOT(whenSleepEndChanged(QTime)));
    connect(ui->coffee_moment,SIGNAL(userTimeChanged(QTime)),this,SLOT(whenCoffeeMomentChanged(QTime)));
    connect(ui->addSleep,SIGNAL(clicked()),this,SLOT(whenDodajSenClicked()));
    connect(ui->addCoffee,SIGNAL(clicked()),this,SLOT(whenDodajKaweClicked()));
    connect(ui->removeAddedActions,SIGNAL(clicked()),this,SLOT(whenUsunAkcjeClicked()));
    connect(ui->setStartFactors,SIGNAL(clicked()),this,SLOT(whenUstawClicked()));

    connect(this,SIGNAL(updateDisplaingDayActions(QString)),ui->textBrowser,SLOT(setText(QString)));

    }

MainWindow::~MainWindow()
    {
    delete ui;
    }

void MainWindow::whenStartFactorsY(int yy)
    {
    y = yy;
    }

void MainWindow::whenStartFactorsA(double aa)
    {
    a = -aa;
    }

void MainWindow::whenUstawClicked()
    {
    st_factors = Factors(y,a);
    dayAction->setStartFactors(st_factors);

    ui->textBrowser->setText(QString::fromStdString(dayAction->toString()));
    }

void MainWindow::whenCoffeeQuantity(int qq)
    {
    coffee_quantity = qq;
    }

void MainWindow::whenCoffeeMomentChanged(QTime tt)
    {
    coffee_moment = tt;
    }

void MainWindow::whenSleepBeginChanged(QTime tt)
    {
    sleep_begin = tt;
    }

void MainWindow::whenSleepEndChanged(QTime tt)
    {
    sleep_end = tt;

    }

void MainWindow::whenDodajKaweClicked()
    {
    int moment =coffee_moment == QTime(0,0) ? 0 : coffee_moment.hour()*60+coffee_moment.minute();
    Coffee* action = new Coffee(moment,coffee_quantity);

    if(dayAction->addAction(action) == false)
        {
        delete action;
        return;
        }

    ui->textBrowser->setText(QString::fromStdString(dayAction->toString()));
    }

void MainWindow::whenDodajSenClicked()
    {
    int begin =sleep_begin == QTime(0,0) ? 0 :sleep_begin.hour()*60+sleep_begin.minute();
    int end = sleep_end == QTime(0,0) ? 0 : sleep_end.hour()*60+sleep_end.minute();

    Sleep* action = new Sleep(begin,end);

    if(dayAction->addAction(action) == false)
        {
        delete action;
        return;
        }

    ui->textBrowser->setText(QString::fromStdString(dayAction->toString()));
    }

void MainWindow::whenUsunAkcjeClicked()
    {
    dayAction->removeAllActions();

    ui->textBrowser->setText(QString::fromStdString(dayAction->toString()));
    }

void MainWindow::whenSprawdzOgraniczeniaIPoprawClicked()
    {
    dayAction->updateFactors();
    ui->textBrowser->setText(QString::fromStdString(dayAction->toString()));
    }
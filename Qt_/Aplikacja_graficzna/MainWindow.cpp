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

    //współczynniki startowe
    connect(ui->startFactors_y,SIGNAL(valueChanged(int)),this,SLOT(whenStartFactorsY(int)));
    connect(ui->startFactors_a,SIGNAL(valueChanged(double)),this,SLOT(whenStartFactorsA(double)));
    connect(ui->setStartFactors,SIGNAL(clicked()),this,SLOT(whenUstawClicked()));

    //dodawanie snu
    connect(ui->sleepBegin,SIGNAL(userTimeChanged(QTime)),this,SLOT(whenSleepBeginChanged(QTime)));
    connect(ui->sleepEnd,SIGNAL(userTimeChanged(QTime)),this,SLOT(whenSleepEndChanged(QTime)));
    connect(ui->addSleep,SIGNAL(clicked()),this,SLOT(whenDodajSenClicked()));

    //dodawanie kawy
    connect(ui->coffee_quantity,SIGNAL(valueChanged(int)),this,SLOT(whenCoffeeQuantity(int)));
    connect(ui->coffee_moment,SIGNAL(userTimeChanged(QTime)),this,SLOT(whenCoffeeMomentChanged(QTime)));
    connect(ui->addCoffee,SIGNAL(clicked()),this,SLOT(whenDodajKaweClicked()));

    //usuwanie wszystkich czynności z dayAction
    connect(ui->removeAddedActions,SIGNAL(clicked()),this,SLOT(whenUsunAkcjeClicked()));
    connect(ui->check,SIGNAL(clicked()),this,SLOT(whenSprawdzOgraniczeniaIPoprawClicked()));

    //usuwanie przedziału
    connect(ui->deleteRangeBegin,SIGNAL(userTimeChanged(QTime)),this,SLOT(whenDelBegChanged(QTime)));
    connect(ui->deleteRangeEnd,SIGNAL(userTimeChanged(QTime)),this,SLOT(whenDelEndChanged(QTime)));
    connect(ui->deleteRange,SIGNAL(clicked()),this,SLOT(whenDeleteRangeClicked()));

    //współczynniki statyczne
    connect(ui->min_coffee,SIGNAL(valueChanged(int)),this,SLOT(whenMinCoffee(int)));
    connect(ui->max_coffee,SIGNAL(valueChanged(int)),this,SLOT(whenMaxCoffee(int)));
    connect(ui->y_coffee_mod,SIGNAL(valueChanged(double)),this,SLOT(whenYCoffeeMod(double)));
    connect(ui->a_coffee_mod, SIGNAL(valueChanged(double)),this,SLOT( whenACoffeeMod(double)));

    connect(ui->a_sleep_mod, SIGNAL(valueChanged(double)),this,SLOT( whenASleepMod(double)));
    connect(ui->min_sleep, SIGNAL(valueChanged(int)),this,SLOT( whenMinSleep(int)));
    connect(ui->min_tot_sleep, SIGNAL(valueChanged(int)),this,SLOT( whenMinTotSleep(int)));

    connect(ui->integer_factor, SIGNAL(valueChanged(double)),this,SLOT( whenIntegerFactor(double)));
    connect(ui->coffee_factor, SIGNAL(valueChanged(double)),this,SLOT( whenCoffeeFactor(double)));

    connect(ui->set_static_factors, SIGNAL(clicked()),this,SLOT( whenSetStaticFactors()));

    //wyjscie i do algorytmu
    connect(ui->toAlgorithm, SIGNAL(clicked()),this,SLOT( whenToAlgorithm()));
    connect(ui->quitVievport1, SIGNAL(clicked()),this,SLOT( whenQuitButton()));

    //parametry algorytmu
    connect(ui->minDiff ,SIGNAL( valueChanged(double) ), this, SLOT( whenMinDiff(double) ) );
    connect(ui->maxIter ,SIGNAL( valueChanged(int) ), this, SLOT( whenMaxIter(int) ) );
    connect(ui->file ,SIGNAL( textChanged(QString) ), this, SLOT( whenFileName(QString) ) ); //un def
    connect(ui->maxBest ,SIGNAL( valueChanged(int) ), this, SLOT( whenMaxBest(int) ) );
    connect(ui->maxPopulation ,SIGNAL( valueChanged(int) ), this, SLOT( whenMaxPopulation(int) ) );
    connect(ui->cycleSize ,SIGNAL( valueChanged(int) ), this, SLOT( whenCycleSize(int) ) );
    connect(ui->numberOfRepeat ,SIGNAL( valueChanged(int) ), this, SLOT( whenNumberOfRepeat(int) ) );

    //przyciski save
    connect(ui->savePopulation , SIGNAL( clicked() ), this, SLOT( whenSavePopulationClicked() ));
    connect(ui->saveBest , SIGNAL( clicked() ), this, SLOT( whenSaveBestClicked() ));
    connect(ui->saveAlgorithmParameters , SIGNAL( clicked() ), this, SLOT( whenSaveAlgorithmParametersClicked() ));
    connect(ui->saveStatus , SIGNAL( clicked() ), this, SLOT( whenSaveStatusClicked() ));

    //Control. Control. You must learn control...
    connect(ui->startButton , SIGNAL( clicked() ), this, SLOT( whenStartButtonClicked() ));
    connect(ui->resetButton , SIGNAL( clicked() ), this, SLOT( whenResetButtonClicked() ));
    connect(ui->continueButton , SIGNAL( clicked() ), this, SLOT( whenContinueButtonClicked() ));

    //wyjscie i wstecz
    connect(ui->changeStartObjectButton , SIGNAL( clicked() ), this, SLOT( whenChangeStartObjectButton() ));
    connect(ui->quitButton , SIGNAL( clicked() ), this, SLOT( whenQuitButton() ));

    //aktualizacja wyswietlania startowego dayAction
    connect(this,SIGNAL(updateDisplaingDayActions(QString)),ui->textBrowser,SLOT(setText(QString)));



    }

MainWindow::~MainWindow()
    {
    delete ui;
    }

//private methods
void MainWindow::updateDayActionDistplay()
    {
    ui->textBrowser->setText(QString::fromStdString(dayAction->toString()));
    }

void MainWindow::updateDisplaying()
    {
    if(best != nullptr)
        ui->stringTheBest->setText( QString::fromStdString( best->toString() ) );

    //czyszczenie layoutu
    clearLayout(ui->verticalLayout_15);

    //vector populacji
    const std::vector<Chromosome*>* vec = algorithm->getPopulation();

    int i =0;
    for(Chromosome* x : *vec)
        {
        addElementToQStacked(x,ui->layout_listy,ui->verticalLayout_15,++i);
        }

    }


void MainWindow::setAlgorithmParameters()
    {
    algorithm->setMinDifferenceBetweenGenarationsBest(min_difference);
    algorithm->setMaxOfIteration(max_iter);
    algorithm->setMaxBest(max_best);
    algorithm->setMaxPopulationSize(max_population_size);
    algorithm->setNumberOfRepeat(number_of_repeat);
    }

void MainWindow::addElementToQStacked(Chromosome* ch,QWidget* widget, QVBoxLayout* boxLayout, int num)//=lista_chromosomow
    {

    if(ch == nullptr || boxLayout == nullptr)
        return;

    //QVBoxLayout* verdicalLayout = new QVBoxLayout(grupa);

    //QGraphicsView* plot = new QGraphicsView(grupa);

    //QTextBrowser* opis = new QTextBrowser(grupa);
    QSizePolicy size1(QSizePolicy::Preferred, QSizePolicy::Minimum);//10
    QSizePolicy size2(QSizePolicy::Expanding, QSizePolicy::Fixed);//7


    QGroupBox* grupa = new QGroupBox(widget);
    grupa->setObjectName(QString::fromUtf8("grupa"));
    size1.setHeightForWidth(grupa->sizePolicy().hasHeightForWidth());
    grupa->setSizePolicy(size1);
    grupa->setTitle(QString::fromStdString( "Chromosom nr " + std::to_string(num)+" :"));
    QVBoxLayout* vLayout = new QVBoxLayout(grupa);
    vLayout->setSpacing(6);
    vLayout->setContentsMargins(11, 11, 11, 11);
    vLayout->setObjectName(QString::fromUtf8("verticalLayout_17"));
    QGraphicsView* plot = new QGraphicsView(grupa);
    plot->setObjectName(QString::fromUtf8("plot"));
    size2.setHeightForWidth(plot->sizePolicy().hasHeightForWidth());
    plot->setSizePolicy(size2);
    plot->setMinimumSize(QSize(0, 150));

    vLayout->addWidget(plot);

    QTextBrowser* opis = new QTextBrowser(grupa);
    opis->setObjectName(QString::fromUtf8("opis"));
    opis->setMinimumSize(QSize(0, 300));

    vLayout->addWidget(opis);
    boxLayout->addWidget(grupa);

    opis->setText(QString::fromStdString( ch->toString() ));
    }

void MainWindow::clearLayout(QLayout* lout)
    {
    //czyszczenie layoutu
    while(lout->count() != 0)
        {
        QLayoutItem* item = ui->verticalLayout_15->itemAt(0);

        lout->removeItem(item);
        delete item->widget();
        }
    }

//slots
//początkowe współczynniki
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

    updateDayActionDistplay();
    }


//kawa
void MainWindow::whenCoffeeQuantity(int qq)
    {
    coffee_quantity = qq;
    }

void MainWindow::whenCoffeeMomentChanged(QTime tt)
    {
    coffee_moment = tt;
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

    updateDayActionDistplay();
    }

//sen
void MainWindow::whenSleepBeginChanged(QTime tt)
    {
    sleep_begin = tt;
    }

void MainWindow::whenSleepEndChanged(QTime tt)
    {
    sleep_end = tt;

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

    updateDayActionDistplay();
    }

//sprawdź i usuń przyciski
void MainWindow::whenUsunAkcjeClicked()
    {
    dayAction->removeAllActions();

    updateDayActionDistplay();
    }

void MainWindow::whenSprawdzOgraniczeniaIPoprawClicked()
    {
    dayAction->updateFactors();
    updateDayActionDistplay();
    }

//usuwanie predziału
void MainWindow::whenDelBegChanged(QTime tt)
    {
    del_beg = tt;
    }

void MainWindow::whenDelEndChanged(QTime tt)
    {
    del_end = tt;
    }

void MainWindow::whenDeleteRangeClicked()
    {
    int begin = del_beg == QTime(0,0) ? 0 :del_beg.hour()*60+del_beg.minute();
    int end = del_end == QTime(0,0) ? 0 : del_end.hour()*60+del_end.minute();
    TimeRange toDel(begin,end);

    dayAction->removeFromRange(toDel);

    updateDayActionDistplay();
    }

//param. statyczne

void MainWindow::whenMinCoffee(int v)
    {
    if(v > max_total_coffee)
        {
        min_coffee = max_total_coffee;
        ui->min_coffee->setValue(min_coffee);
        return;
        }

    min_coffee = v;
    }

void MainWindow::whenMaxCoffee(int v)
    {
    if(v < min_coffee)
        {
        max_total_coffee = min_coffee;
        ui->max_coffee->setValue(max_total_coffee);
        return;
        }
    max_total_coffee = v;
    ui->min_coffee->setMaximum(max_total_coffee);
    }

void MainWindow::whenYCoffeeMod(double v)
    {
    coffee_y_multiplier = v;
    }

void MainWindow::whenACoffeeMod(double v)
    {
    coffee_a_multiplier = v;
    }

void MainWindow::whenASleepMod(double v)
    {
    sleep_a_multiplier = v;
    }

void MainWindow::whenMinSleep(int v)
    {  
    min_sleep = v;
    ui->min_tot_sleep->setMinimum(min_sleep);
    }

void MainWindow::whenMinTotSleep(int v)
    {
    if(v < min_sleep)
        {
        min_total_sleep = min_sleep;
        return;
        }

    min_total_sleep  =v;
    }

void MainWindow::whenIntegerFactor(double v)
    {
    integral_multiplier = v;
    }

void MainWindow::whenCoffeeFactor(double v)
    {
    coffee_multiplier = v;
    }

void MainWindow::whenToAlgorithm() //przejscie na nastepna strone
    {
    dayAction->updateFactors();
    updateDayActionDistplay();

    //innicjalizacja algorytmu
    algorithm = std::make_shared<GeneticAlgorithm>(algorithm_buffor,dayAction.get(),min_difference);

    //przejście na następna stronę
    ui->zmianaOkna->setCurrentIndex(1);
    //wyswietlenie utworzonego wcześniej day action
    ui->stringTheBest->setText(QString::fromStdString(dayAction->toString()));
    }

void MainWindow::whenSetStaticFactors()
    {
    Coffee::setMinPortion(min_coffee);
    Coffee::setMaxPerDay(max_total_coffee);
    Coffee::setA_Multiplier(coffee_a_multiplier);
    Coffee::setY_Multiplier(coffee_y_multiplier);

    Sleep::setMinSleep(min_sleep);
    Sleep::setMinTotalSleep(min_total_sleep);
    Sleep::setA_Multiplier(sleep_a_multiplier);

    gF->setIntegral_Multi(integral_multiplier);
    gF->setCoffee_Multi(coffee_multiplier);

    dayAction->setFlagModified();

    dayAction->onlyUpdate();

    updateDayActionDistplay();
    }


//parametry i sterowanie algorytmem
void MainWindow::whenMinDiff(double v)
    {
    algorithm->setMinDifferenceBetweenGenarationsBest(v);
    min_difference = v;
    }

void MainWindow::whenMaxIter(int v)
    {
    max_iter = static_cast<unsigned int>(v);
    algorithm->setMaxOfIteration( max_iter);
    }

void MainWindow::whenFileName(QString v)
    {
    file = v.toStdString();
    }

void MainWindow::whenMaxBest(int v)
    {
    max_best = static_cast<unsigned int>(v);
    algorithm->setMaxBest(max_best);
    }

void MainWindow::whenMaxPopulation(int v)
    {
    max_population_size = static_cast<unsigned int>(v);
    algorithm->setMaxPopulationSize(max_population_size);
    }

void MainWindow::whenCycleSize(int v)
    {
    cycle_length = static_cast<unsigned int>(v);
    }

void MainWindow::whenNumberOfRepeat(int v)
    {
    number_of_repeat = static_cast<unsigned int>(v);
    algorithm->setNumberOfRepeat(number_of_repeat);
    }

//przyciski save
void MainWindow::whenSavePopulationClicked()
    {
    //zapisz populację
    }

void MainWindow::whenSaveBestClicked()
    {
    //zapisz najlepszego
    }

void MainWindow::whenSaveAlgorithmParametersClicked()
    {
    //zapis może będzie kilka innych przycisków i kilka innych pól
    }

void MainWindow::whenSaveStatusClicked()
    {
    //zapisz status
    }

//sterowanie
void MainWindow::whenStartButtonClicked()
    {
    //start algorytmu
    ui->startButton->setEnabled(false); //wyłączenie przyciku start

    setAlgorithmParameters();

    //start algorytmu
    best = std::shared_ptr<Chromosome>(algorithm->startAlgorithm(false,cycle_length));

    if(!algorithm->isEnd())
        ui->continueButton->setEnabled(true);

    updateDisplaying();
    }

void MainWindow::whenResetButtonClicked()
    {
    //restart
    algorithm->restart(dayAction.get(),min_difference,number_of_repeat,max_iter,max_population_size,max_best);
    ui->startButton->setEnabled(true); //aktywacja startu i dezaktywacja kontynuacji
    ui->continueButton->setEnabled(false);

    updateDisplaying();
    ui->stringTheBest->setText(QString::fromStdString(dayAction->toString()));

    //czyszczenie layoutu
    //czyszczenie layoutu
    clearLayout(ui->verticalLayout_15);
    }

void MainWindow::whenContinueButtonClicked()
    {
    //kontynuowanie algorytmu
    setAlgorithmParameters();

    //start algorytmu
    best = std::shared_ptr<Chromosome>(algorithm->resume(false,cycle_length));

    if(!algorithm->isEnd())
        ui->continueButton->setEnabled(true);
    else
        {
        ui->continueButton->setEnabled(false);
        }


    updateDisplaying();
    }

void MainWindow::whenChangeStartObjectButton()
    {
    best = nullptr;
    algorithm = nullptr;

    ui->startButton->setEnabled(true);
    ui->continueButton->setEnabled(false);

    ui->zmianaOkna->setCurrentIndex(0);
    }

void MainWindow::whenQuitButton()
    {
    sleep = nullptr;
    coffee = nullptr;
    vec.clear();
    fun.clear();
    gF = nullptr;
    dayAction =nullptr;
    algorithm = nullptr;
    best = nullptr;

    emit quit();
    }








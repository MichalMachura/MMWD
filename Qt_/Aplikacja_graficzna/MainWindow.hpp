#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QButtonGroup>
#include <QString>
#include <QTime>
#include <QScrollArea>
#include <QVBoxLayout>
#include <QGroupBox>
#include <QGraphicsView>
#include <QTextBrowser>
#include <QSizePolicy>

#include <string>
#include <iostream>
#include <vector>
#include <sstream>
#include <time.h>
#include <memory>

#include "generateRandom.hpp"
#include "Factors.hpp"
#include "TimeRange.hpp"
#include "Action.hpp"
#include "Sleep.hpp"
#include "Coffee.hpp"
#include "Chromosome.hpp"
#include "DayActions.hpp"
#include "GoalFunction.hpp"
#include "CoffeeAndSleepGoalFunction.hpp"
#include "GeneticAlgorithm.hpp"


namespace Ui
    {
    class MainWindow;
    }

class MainWindow : public QMainWindow
    {
    Q_OBJECT

    private:
        Ui::MainWindow *ui;
        std::shared_ptr<Sleep> sleep;
        std::shared_ptr<Coffee> coffee;
        TimeRange range;
        Factors st_factors;
        std::vector<shared_ptr_Action> vec;
        std::vector<checkingFunction> fun;
        std::shared_ptr<CoffeeAndSleepGoalFunction> gF;
        std::shared_ptr<DayActions> dayAction;

    private:

        //ustawienia startowego DayActionsS
        int y = 0;
        double a = 0 ;
        QTime coffee_moment = QTime(0,0);
        int coffee_quantity = 0;
        QTime sleep_begin = QTime(0,0);
        QTime sleep_end = QTime(0,0);
        QTime del_beg = QTime(0,0);
        QTime del_end = QTime(0,0);

        void updateDayActionDistplay();

        //ustawienia statyczne action dayaction sleep goalfunction itp.
        int min_coffee = 60;
        int max_total_coffee = 1500;
        double coffee_a_multiplier = 1;
        double coffee_y_multiplier = 1;

        int min_sleep = 20;
        int min_total_sleep = 180;
        double sleep_a_multiplier = 3;

        double integral_multiplier = 1.0;
        double coffee_multiplier = 1.0;

    private:
        //ustawienia parametrów algorytmu
        double min_difference = 1.0;
        unsigned int max_iter = 20;
        unsigned int max_best = 3;
        unsigned int max_population_size = 20;
        unsigned int number_of_repeat = 1;
        unsigned int cycle_length = 0;
        std::string file = "";


        //obiekty algorytmu
        std::shared_ptr<GeneticAlgorithm> algorithm = nullptr;
        std::shared_ptr<Chromosome> best = nullptr;

        std::stringstream algorithm_buffor;

        void updateDisplaying();
        void setAlgorithmParameters();
        void addElementToQStacked(Chromosome* ch,QWidget* widget, QVBoxLayout* boxLayout, int num);
        void clearLayout(QLayout* lout);

    public:
        explicit MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    public slots:
        //dodawanie akcji itp.
        void whenStartFactorsY(int);
        void whenStartFactorsA(double);
        void whenUstawClicked();

        void whenDelBegChanged(QTime);
        void whenDelEndChanged(QTime);
        void whenDeleteRangeClicked();

        void whenCoffeeQuantity(int);
        void whenCoffeeMomentChanged(QTime);
        void whenDodajKaweClicked();

        void whenSleepBeginChanged(QTime);
        void whenSleepEndChanged(QTime);
        void whenDodajSenClicked();

        void whenSprawdzOgraniczeniaIPoprawClicked();
        void whenUsunAkcjeClicked();

        //pola współczynnikóW statycznych

        void whenMinCoffee(int);
        void whenMaxCoffee(int);
        void whenYCoffeeMod(double);
        void whenACoffeeMod(double);
        void whenASleepMod(double);
        void whenMinSleep(int);
        void whenMinTotSleep(int);
        void whenIntegerFactor(double);
        void whenCoffeeFactor(double);
        void whenToAlgorithm();
        void whenSetStaticFactors();

        //parametry algorytmu
        void whenMinDiff(double);
        void whenMaxIter(int);
        void whenFileName(QString);
        void whenMaxBest(int);
        void whenMaxPopulation(int);
        void whenCycleSize(int);
        void whenNumberOfRepeat(int);

        void whenSavePopulationClicked();
        void whenSaveBestClicked();
        void whenSaveAlgorithmParametersClicked();
        void whenSaveStatusClicked();

        void whenStartButtonClicked();
        void whenResetButtonClicked();
        void whenContinueButtonClicked();

        void whenChangeStartObjectButton();
        void whenQuitButton();




    signals:
        void updateDisplaingDayActions(QString);
        void showBest(QString);
        void quit();

    };

#endif // MAINWINDOW_HPP

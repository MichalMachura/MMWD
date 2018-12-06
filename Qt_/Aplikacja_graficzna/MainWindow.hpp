#ifndef MAINWINDOW_HPP
#define MAINWINDOW_HPP

#include <QMainWindow>
#include <QButtonGroup>
#include <QString>
#include <QTime>
#include <iostream>
#include "Factors.hpp"
#include "Ciag.hpp"
#include "GeneticAlgorithm.hpp"
#include <time.h>
#include "generateRandom.hpp"
#include <vector>
#include "Sleep.hpp"
#include "Coffee.hpp"
#include "TimeRange.hpp"
#include "CoffeeAndSleepGoalFunction.hpp"
#include <memory>
#include "DayActions.hpp"
#include "Chromosome.hpp"
#include "GoalFunction.hpp"


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
        std::shared_ptr<GoalFunction> gF;
        std::shared_ptr<DayActions> dayAction;

    private:
        int y = 0;
        double a = 0 ;
        QTime coffee_moment = QTime(0,0);
        int coffee_quantity = 0;
        QTime sleep_begin = QTime(0,0);
        QTime sleep_end = QTime(0,0);
        QTime del_beg = QTime(0,0);
        QTime del_end = QTime(0,0);

        void updateDayActionDistplay();

    public:
        explicit MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

    public slots:
        void whenStartFactorsY(int);
        void whenStartFactorsA(double);
        void whenUstawClicked();
        void whenCoffeeQuantity(int);
        void whenCoffeeMomentChanged(QTime);
        void whenSleepBeginChanged(QTime);
        void whenSleepEndChanged(QTime);
        void whenDodajKaweClicked();
        void whenDodajSenClicked();
        void whenUsunAkcjeClicked();
        void whenSprawdzOgraniczeniaIPoprawClicked();
        void whenDelBegChanged(QTime);
        void whenDelEndChanged(QTime);
        void whenDeleteRangeClicked();


    signals:
        void updateDisplaingDayActions(QString);

    };

#endif // MAINWINDOW_HPP

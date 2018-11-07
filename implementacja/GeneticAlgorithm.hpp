#ifndef GENETICALGORITHM_HPP
#define GENETICALGORITHM_HPP
#include<vector>
#include<ostream>
#include<stdlib.h>
#include<time.h>
#include"Chromosome.hpp"
#include<string>
//#include<thread>
#include<algorithm>
#include<sstream>
#include<iostream>

//const unsigned int thread_number = 10;

class GeneticAlgorithm
    {
    private:
        std::vector<Chromosome*> population;
        Chromosome* previous_best;
        std::vector<Chromosome*> current_best;

        unsigned int current_best_size;
        unsigned int current_population_size;
        unsigned int current_iteration = 0;
        unsigned int current_number_of_repeted_suboptimal_solution = 0;
        std::string reason_of_break = std::string("Unknown reason of break.");

        //constants
        static const unsigned int MIN_FOR_CROSSING = 60;
        static const unsigned int MAX_FOR_CROSSING = 95;

        static const unsigned int MIN_POPULATION_SIZE = 7;  //minimum values
        static const unsigned int MIN_ITERATION = 3;
        static const unsigned int MIN_BEST = 2;

        unsigned int max_of_iteration;  //maximum values
        unsigned int max_best;
        unsigned int max_population_size;

        double min_diffrence_between_generations_best;
        unsigned int NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION;

        void startRandomPopulation();
        void findBest();

    public:
        GeneticAlgorithm(Chromosome* start_object ,double min_diffrence_between_generations_best_,unsigned int NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION_ = 1, unsigned int max_of_iteration_ = 20,unsigned int population_size_ = 20,unsigned int max_best_ = 3, std::vector<Chromosome*> population_ = std::vector<Chromosome*>());

        Chromosome* startAlgorithm(bool display = false);//true displaying every iteration
        Chromosome* restart(Chromosome* start_object ,double min_diffrence_between_generations_best_,unsigned int NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION_ = 1, unsigned int max_of_iteration_ = 20,unsigned int population_size_ = 20,unsigned int max_best_ = 3, std::vector<Chromosome*> population_ = std::vector<Chromosome*>());

        friend std::ostream& operator<<(std::ostream& out, GeneticAlgorithm& obj);
        std::ostream& status(std::ostream&);

        ~GeneticAlgorithm();
    };

std::ostream& operator<<(std::ostream& out, GeneticAlgorithm& obj);

#endif // GENETICALGORITHM_HPP












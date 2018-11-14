#include "GeneticAlgorithm.hpp"

GeneticAlgorithm::GeneticAlgorithm(std::ostream& output_, Chromosome* start_object ,double min_diffrence_between_generations_best_, unsigned int NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION_, unsigned int max_of_iteration_ ,unsigned int max_population_size_,unsigned int max_best_, std::vector<Chromosome*> population_) : output(output_)
    {
    //setting parameters of max VALUES variables of state
    setMaxValuesOfParameters(start_object,min_diffrence_between_generations_best_, NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION_,max_of_iteration_, max_population_size_,max_best_, population_);

    /*******************************************************/
    srand(time(NULL)); // rand initialization

    current_best_size = rand()%(max_best-MIN_BEST) + MIN_BEST;  //current sizes
    current_population_size = MIN_POPULATION_SIZE + rand()%(max_population_size-MIN_POPULATION_SIZE);

    if(population_.size() > current_population_size)
        current_population_size = population_.size();
    }

void GeneticAlgorithm::startRandomPopulation()
    {

    while(population.size()<current_population_size)
        {
        Chromosome* ch;
        try
            {
            ch = previous_best->randomChromosome();  //random chromosome
            }
        catch(...)
            {
            throw std::string("/nError in method:\n Chromosome* randomChromosome()\n"); //if are some problems
            }

        population.push_back(ch);
        }



//    vector<std::thread> th(current_population_size - population.size();)    //threads vector
//
//    unsigned int i =0;
//    while(population.size()<current_population_size)
//        {
//        th[i++] = std::thread([&]{population.push_back(previous_best.randomChromosom());}); //add to thread
//        }
//
//    for(std::thread& x : th)
//        x.join();               //joining all threads
    }

void GeneticAlgorithm::findBest()
    {
    if(!population.size())
        return;

    current_best.clear();

    class Pair      //help class
        {
        public:
            double val;
            unsigned int index;
        };

    std::vector<Pair> goal(population.size()); //vector with value of goalFun and index of chromosome in population

    for(unsigned int i = 0; i < population.size(); ++i)
        {
        goal.push_back(Pair({population[i]->goalFunction(),i}));  //
        }

    for(unsigned int i = 0; i < current_best_size; ++i)
        {
        Pair aux = goal[0];     //first elem. in the rest of goal
        unsigned int ind=0;

        for(unsigned int j = 0; j < goal.size(); ++j)
            if(aux.val < goal[j].val)
                {
                aux = goal[j];      //finding the bigger value
                ind = j;            //index of this value in the vector goal not in vector of population
                }

        current_best.push_back(population[aux.index]);  //ascription to the list of the best
        goal.erase(goal.begin()+ind);       //removing from the goal vector
        }
    }

void GeneticAlgorithm::removeWeak()
    {
    for(Chromosome* x : current_best)
        {
        auto a = find(population.begin(),population.end(),x);

        if( a != population.end() )
            population.erase(a);
        }

    for(Chromosome* x : population)
        delete x;

    population.clear();

    for(Chromosome* x : current_best)
        population.push_back(x);

    }

void GeneticAlgorithm::crossing(int places_for_crossing)
    {
    for(int i = 0; i < places_for_crossing; ++i)
        {
        unsigned int r1 = rand()%current_best.size();
        unsigned int r2 = rand()%current_best.size();

        while(r2 == r1) // for the choosing the other chromosomes
            r2 = rand()%current_best.size();

        Chromosome* ch;
        try
            {
            ch = current_best[r1]->crossingOver(current_best[r2]);  //crossing
            }
        catch(...)
            {
            throw std::string("/nError in method:\nChromosome* crossingOver(Chromosome* )\n"); //if are some problems
            }

        population.push_back(ch);
        }
    }

void GeneticAlgorithm::mutation(int places_for_mutation)
    {

    for(int i = 0; i < places_for_mutation; ++i)
        {
        unsigned int r1 = rand()%current_best.size();
        Chromosome* ch;
        try
            {
            ch = current_best[r1]->mutation();  //mutation
            }
        catch(...)
            {
            throw std::string("/nError in method:\nChromosome* mutation()\n"); //if are some problems
            }

        population.push_back(ch);
        }
    }

void GeneticAlgorithm::generateCurrentValuesOfState()
    {   //current mean in future generation
    current_best_size = rand()%(max_best-MIN_BEST) + MIN_BEST;  //current best sizes
    current_population_size = MIN_POPULATION_SIZE + rand()%(max_population_size-MIN_POPULATION_SIZE);   //current population size
    }

void GeneticAlgorithm::countPlacesForCrossingAndMutation(int& places_for_crossing, int& places_for_mutation)
    {
    int free_places = current_population_size - population.size();
    //numbers of new cross-created chromosomes and for mutate-created. All is rand, but from the constant % range
    places_for_crossing = (MIN_FOR_CROSSING + rand()%(MAX_FOR_CROSSING-MIN_FOR_CROSSING))/100.0*free_places;
    places_for_mutation = free_places - places_for_crossing;
    }

bool GeneticAlgorithm::bestIsReached()
    {
    if(current_best[0]->goalFunction()-previous_best->goalFunction() <= min_diffrence_between_generations_best)
        {
        if(++current_number_of_repeted_suboptimal_solution >= NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION-1)
            {
            reason_of_break = "Minimum difference between populations has been reached.";

            return true;
            }
        }
    else
        current_number_of_repeted_suboptimal_solution = 0;

    return false;
    }

Chromosome* GeneticAlgorithm::startAlgorithm(bool display)
    {
    if(!previous_best)
        throw "Previous_best is nullptr. Can not create population without any representative of class which implements Chromosome interface";
    try
        {
        generateCurrentValuesOfState(); //generation random values of best and population number

        if(population.size() > current_population_size)    //checking with started population
            current_population_size = population.size();

        startRandomPopulation();
        findBest();

        while(current_iteration < max_of_iteration) //iteration condition
            {
            //previous best
            previous_best = current_best[0];
            //removing weak elements from population without strong elements
            removeWeak();
            //new population and next best size
            generateCurrentValuesOfState();
            //variables for result of counting places for crossing and mutation
            int places_for_mutation, places_for_crossing;
            //counting and generating number of crossing and mutation chromosomes which should be created
            countPlacesForCrossingAndMutation(places_for_crossing,places_for_mutation);     //variables are forwarding by reference
            //crossing
            crossing(places_for_crossing);
            //mutation
            mutation(places_for_mutation);
            //finding the best in population
            findBest();

            ++current_iteration;

            if(bestIsReached())
                break;

            if(display) //if it should be displayed every iteration
                //output<<*this;
                status(output);
            }

        if(current_iteration >= max_of_iteration)   //if max iteration has been reached
            reason_of_break = "Maximum iteration has been reached.";

        return current_best[0];
        }
    catch(std::string s)
        {
        throw s;
        }
    catch(...)
        {
        deleteAllChromosomes();
        throw std::string("\nMemory errors\n");
        }
    }

Chromosome* GeneticAlgorithm::restart(Chromosome* start_object ,double min_diffrence_between_generations_best_,unsigned int NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION_, unsigned int max_of_iteration_, unsigned int max_population_size_, unsigned int max_best_, std::vector<Chromosome*> population_)
    {
    deleteAllChromosomes();

    setMaxValuesOfParameters(start_object,min_diffrence_between_generations_best_, NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION_,max_of_iteration_, max_population_size_,max_best_, population_);

    return startAlgorithm();
    }

void GeneticAlgorithm::deleteAllChromosomes()
    {
    for(Chromosome* x : population)
        {
        delete x;
        }
    population.clear();

    previous_best = nullptr;
    current_best.clear();
    }

void GeneticAlgorithm::setMaxValuesOfParameters(Chromosome* start_object ,double min_diffrence_between_generations_best_,unsigned int NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION_, unsigned int max_of_iteration_, unsigned int max_population_size_, unsigned int max_best_, std::vector<Chromosome*> population_)
    {
    if(!start_object)
        throw "Previous_best is nullptr. Can not create population without any representative of class which implements Chromosome interface";

    deleteAllChromosomes(); //clearing after previous

    population = population_;   //population vector
    NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION = NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION_;     //setting of repeating the solution similar or the same as the answer or next / previous solution

    //create new random chromosome from start object
    previous_best = start_object->randomChromosome();
    population.push_back(previous_best);

    //minimum difference between previous and current best
    setMinDifferenceBetweenGenarationsBest(min_diffrence_between_generations_best_);
    //iteration number
    setMaxOfIteration(max_of_iteration_);
    // population size
    setMaxPopulationSize(max_population_size_);
    //maximum of selected best
    setMaxBest(max_best_);
    }

void GeneticAlgorithm::setMinDifferenceBetweenGenarationsBest(int min_diffrence_between_generations_best_)
    {
    if(min_diffrence_between_generations_best_ < 0.0)
        min_diffrence_between_generations_best = 0.0;
    else
        min_diffrence_between_generations_best = min_diffrence_between_generations_best_;
    }

void GeneticAlgorithm::setMaxOfIteration(int max_of_iteration_)
    {
    if(max_of_iteration_ < MIN_ITERATION)   //if is less than minimum
        max_of_iteration = MIN_ITERATION;
    else
        max_of_iteration = max_of_iteration_;
    }

void GeneticAlgorithm::setMaxPopulationSize(int max_population_size_)
    {
    if(max_population_size_ <= MIN_POPULATION_SIZE) //if set max is less than constant min
        max_population_size = MIN_POPULATION_SIZE + 1;
    else
        max_population_size = max_population_size_;
    }

void GeneticAlgorithm::setMaxBest(int max_best_)
    {
    if(max_best_ <= MIN_BEST)   //if max is less than min
        max_best = MIN_BEST + 1;

    if(max_best_ >= MIN_POPULATION_SIZE)    //if set max of best is more than min of population, but should be that: min_best<max_best<min_population<max_population
        max_best = MIN_POPULATION_SIZE-1;
    else
        max_best = max_best_;
    }

std::ostream& GeneticAlgorithm::status(std::ostream& out)
    {
    using std::endl;

    out<<"******************************************************************";
    out<<endl<<"Algorithm settings : "<<endl;
    out<<"min_difference_between_generations_best : "<<min_diffrence_between_generations_best<<endl;
    out<<"NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION : "<< NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION <<endl;
    out<<"max_of_iteration : "<<max_of_iteration<<endl;
    out<<"max_population_size : "<<max_population_size<<endl;
    out<<"max_best_size : "<<max_best<<endl;

    out<<endl<<"Current status : "<<endl;
    out<<"current_number_of_repeated_suboptimal_solution : "<< current_number_of_repeted_suboptimal_solution <<endl;
    out<<"current iteration : "<< current_iteration <<endl;
    out<<"current_population_size : "<< current_population_size <<endl;
    out<<"current_best_sizes : "<<current_best_size<<endl;
    out<<"reason_of_break : "<<reason_of_break<<endl;

    out<<endl<<"Current the best :"<<endl;

    if(!current_best.size() || !current_best[0])
        {
        out<<"nullptr"<<endl;
        out<<"******************************************************************";
        return out;
        }

    out<<current_best[0]->toString()<<endl;
    out<<"******************************************************************";

    return out;
    }

std::ostream& operator<<(std::ostream& out, GeneticAlgorithm& obj)
    {
    using std::endl;

    out<<"******************************************************************";
    out<<endl<<"Current status : "<<endl<<endl;
    out<<"current_best_sizes : "<<obj.current_best_size<<endl;
    out<<"current_population_size : "<< obj.current_population_size <<endl;
    out<<"current iteration : "<< obj.current_iteration <<endl;
    out<<"current_number_of_repeated_suboptimal_solution : "<< obj.current_number_of_repeted_suboptimal_solution <<endl;
    out<<"reason_of_break : "<<obj.reason_of_break<<endl;
    out<<"==================================================================";
    out<<endl<<"Restrictions : "<<endl<<endl;
    out<<"MIN_FOR_CROSSING : "<< obj.MIN_FOR_CROSSING<<"%" <<endl;
    out<<"MAX_FOR_CROSSING : "<< obj.MAX_FOR_CROSSING<<"%" <<endl<<endl;

    out<<"MIN_POPULATION_SIZE : "<< obj.MIN_POPULATION_SIZE <<endl;
    out<<"max_population_size : "<<obj.max_population_size<<endl<<endl;

    out<<"MIN_ITERATION : "<< obj.MIN_ITERATION <<endl;
    out<<"max_of_iteration : "<<obj.max_of_iteration<<endl<<endl;

    out<<"MIN_BEST_SIZE : "<<obj.MIN_BEST<<endl;
    out<<"max_best_size : "<<obj.max_best<<endl<<endl;

    out<<"min_difference_between_generations_best : "<<obj.min_diffrence_between_generations_best<<endl<<endl;

    out<<"NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION : "<< obj.NUMBER_OF_REPETED_SUBOPTIMAL_SOLUTION <<endl;

    out<<"==================================================================";
    out<<endl<<"Previous the best :"<<endl<<endl;
    if(obj.previous_best)
        out<<obj.previous_best->toString()<<endl;
    else
        out<<"nullptr"<<endl;
    out<<"==================================================================";
    out<<endl<<"Current the bests :"<<endl<<endl;

    for(unsigned int i = 0; i < obj.current_best.size(); ++i)
        out<<"Chromosome number: "<<i<<endl<<obj.current_best[i]->toString()<<endl;

    if(!obj.current_best.size())
        out<<"nullptr"<<endl;


    out<<"==================================================================";
    out<<endl<<"Population:"<<endl<<endl;

    for(unsigned int i = 0; i < obj.population.size(); ++i)
        out<<"Chromosome number: "<<i<<endl<<obj.population[i]->toString()<<endl;

    if(!obj.population.size())
        out<<"nullptr"<<endl;

    out<<"******************************************************************"<<endl<<endl;

    return out;

    }

GeneticAlgorithm::~GeneticAlgorithm()
    {
    deleteAllChromosomes();
    }

cls
g++ -c -std=c++11 generateRandom.cpp -o generateRandom.o
g++ -c -std=c++11 Factors.cpp -o Factors.o
g++ -c -std=c++11 TimeRange.cpp -o TimeRange.o
g++ -c -std=c++11 TimeRangeM.cpp -o TimeRangeM.o
g++ -c -std=c++11 Action.cpp -o Action.o
g++ -c -std=c++11 Sleep.cpp -o Sleep.o
g++ -c -std=c++11 Coffee.cpp -o Coffee.o
g++ -c -std=c++11 CoffeeAndSleepGoalFunction.cpp -o CoffeeAndSleepGoalFunction.o
g++ -c -std=c++11 goalFunction.cpp -o goalFunction.o
g++ -c -std=c++11 Ciag.cpp -o Ciag.o
g++ -c -std=c++11 GeneticAlgorithm.cpp -o GeneticAlgorithm.o
g++ -c -std=c++11 test1.cpp -o test1.o
g++ generateRandom.o Factors.o TimeRange.o TimeRangeM.o Action.o Sleep.o Coffee.o CoffeeAndSleepGoalFunction.o goalFunction.o Ciag.o  GeneticAlgorithm.o test1.o -o algorytm_genetyczny_1.exe
algorytm_genetyczny_1.exe

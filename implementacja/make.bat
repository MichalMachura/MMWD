cls 
g++ -c -std=c++11 generateRandom.cpp -o generateRandom.o
g++ -c -std=c++11 Chromosome.cpp -o Chromosome.o
g++ -c -std=c++11 GeneticAlgorithm.cpp -o GeneticAlgorithm.o
g++ -c -std=c++11 test1.cpp -o test1.o
g++ generateRandom.o Chromosome.o GeneticAlgorithm.o test1.o -o algorytm_genetyczny_1.exe
algorytm_genetyczny_1.exe
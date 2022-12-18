#include <iostream>
#include <random>
using namespace std;

int main() 
{
    std::random_device rd; // obtain a random number from hardware
    std::mt19937 gen(rd()); // seed the generator
    std::uniform_int_distribution<> distr(0, 1); // define the range


    std::cout << distr(gen) << ' '; // generate numbers
}

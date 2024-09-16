#include <iostream>
#include <iomanip>
#include <math.h>

void PrintSin(int number_of_steps)
{
    float x = 0;
    const double PI = std::atan(1.0) * 4;
    float dx = 2 * PI / number_of_steps;


    std::cout << "\t"<< std::setw(10) << std::right << "x" << "\t" << std::setw(10) << std::right << "sin(x)" << std::endl;
    for (int i = 0;i < number_of_steps;i++)
    {
        std::cout << "\t" << std::setw(10) << std::right << x << "\t" << std::setw(10) << std::right << std::sin(x) << std::endl;
        x = x + dx;
    }
}

int main()
{
    int points[] = { 5,3,2 };
    std::string people[] = { "Hupu", "Tupu", "Lupu" };
    std::cout << "Hello " << people[0] << "," << std::endl;
    std::cout << "You have " << points[0] << " points!" << std::endl <<std::endl;

    std::cout << "\tResults\n\n";
    std::cout << "\tName" << "\tPoints" << std::endl;

    for (int i = 0;i < 3;i++)
    {
        std::cout << "\t" << people[i] << "\t" << points[i] << std::endl;
    }

    std::cout << "-------------------------------------------------------" << std::endl << std::endl;

    int steps = 10;

    PrintSin(steps);

    system("pause>0");
}



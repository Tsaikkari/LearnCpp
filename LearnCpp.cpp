#include <iostream>
#include <iomanip>
#include <math.h>

#define NUMBER_OF_COLUMNS 3
#define NUMBER_OF_ROWS 3

class Person {
    public:
        std::string columns[NUMBER_OF_COLUMNS];
};

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

    std::cout << "-------------------------------------------------------" << std::endl << std::endl;

    Person table[NUMBER_OF_ROWS];
    int row;

    row = 0; // header
    table[row].columns[0] = "id";
    table[row].columns[1] = "name";
    table[row].columns[2] = "wert";

    row = 1;
    table[row].columns[0] = "0";
    table[row].columns[1] = "Max";
    table[row].columns[2] = "5";

    row = 2;
    table[row].columns[0] = "1";
    table[row].columns[1] = "Bert";
    table[row].columns[2] = "3";

    for (int row = 0; row < NUMBER_OF_ROWS; row++) {
        for (int col = 0; col < NUMBER_OF_COLUMNS; col++) {
            std::cout << "\t" << table[row].columns[col];
        }
        std::cout << std::endl;
    }
    

    system("pause>0");
}



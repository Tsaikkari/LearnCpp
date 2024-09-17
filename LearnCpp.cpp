#include <iostream>
#include <iomanip>
#include <math.h>

#define NUMBER_OF_ROWS 3

class Header {
	public:
        std::string h0="id";
        std::string h1="name";
        std::string h2="points";
};

class Person {
    public:
        int id;
        std::string name;
        int points;
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

    Header header;
   
    Person persons[NUMBER_OF_ROWS];

    persons[0].id = 0;
	persons[0].name = "Sven";
	persons[0].points = 4;

    persons[1].id = 1;
	persons[1].name = "Max";
	persons[1].points = 5;
	
	persons[2].id = 2;
	persons[2].name = "Peter";
	persons[2].points = 1;

    std::cout << "\t" <<header.h0;
	std::cout << "\t" <<header.h1;
	std::cout << "\t" <<header.h2;
	std::cout << std::endl;

    for (int r = 0; r < NUMBER_OF_ROWS; r++) {
        std::cout << "\t"<< persons[r].id;
        std::cout << "\t"<< persons[r].name;
        std::cout << "\t"<< persons[r].points;
        std::cout << std::endl;
    }
    
    system("pause>0");
}



#include <iostream>

int main()
{
    int points[] = { 5,3,2 };
    std::string people[] = { "Hupu", "Tupu", "Lupu" };
    std::cout << "Hello " << people[0] << "," << std::endl;
    std::cout << "You have " << points[0] << "points!" << std::endl <<std::endl;

    std::cout << "\tResults\n\n";
    std::cout << "\tName" << "\tPoints" << std::endl;

    for (int i = 0;i < 3;i++)
    {
        std::cout << "\t" << people[i] << "\t" << points[i] << std::endl;
    }

    system("pause>0");
}



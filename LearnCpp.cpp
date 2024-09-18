#include <iostream>
#include <iomanip>
#include <math.h>

#define NUMBER_OF_ROWS 3
#define NUMBER_OF_ELEMENTS 8
#define MAX_NUM_COLUMS 30

class Header {
	public:
        std::string id="id";
        std::string name="name";
        std::string points="points";
};

class Person {
    public:
        int id=0;
        std::string name="Luis";
        int points=5;
};

class R {
public:
    int columns[MAX_NUM_COLUMS];
};

void Show2DArr(R* Table, int num_rows, int num_columns) {
    for (int r = 0; r < num_rows; r++) {
        for (int c = 0; c < num_columns; c++) {
            std::cout << "\t" << Table[r].columns[c];
        }
        std::cout << std::endl;
    }
}

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

void PrintArr(int* arr, int len_arr) {
    std::cout << "\n\t arr=\n(";
    for (int n = 0; n < len_arr - 1; n++) {
        std::cout << arr[n] << ", ";
    }
    std::cout << arr[len_arr - 1];
    std::cout << ")" << std::endl;
}

void SortArr(int* arr, int len_arr) {
    int max;
    int i_max = 0;
    int temp;
    for (int i = 0; i < NUMBER_OF_ELEMENTS; i++) {
        max = arr[i];
        i_max = i;
        for (int j = i; j < NUMBER_OF_ELEMENTS; j++) {
            if (arr[j] > max) {
                max = arr[j];
                i_max = j;

            }
        }
        temp = arr[i];
        arr[i] = arr[i_max];
        arr[i_max] = temp;
    }
}

void SortArrSlow(int* arr, int len_arr) {
    for (int i = 0; i < len_arr; i++) {
        for (int c = 0; c < len_arr - i - 1; c++) {
            if (arr[c] < arr[c + 1]) {
                int g = arr[c + 1];
                arr[c + 1] = arr[c];
                arr[c] = g;
            }
        }
    }
}

int main()
{
    int num_rows = 4;
    int num_columns = 3;

    R Table[MAX_NUM_COLUMS];
    Table[0] = { 3,1,8 };
    Table[0].columns[0] = 66; Table[0].columns[1] = 77;
    Table[1] = { 4,9,11 };
    Table[2] = { 2,2,17 };
    Table[3] = { 19,111,8 };

    Show2DArr(Table, num_rows, num_columns);


    std::cout << "-------------------------------------------------------" << std::endl << std::endl;

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

    std::cout << "\t" <<header.id;
	std::cout << "\t" <<header.name;
	std::cout << "\t" <<header.points;
	std::cout << std::endl;

    for (int r = 0; r < NUMBER_OF_ROWS; r++) {
        std::cout << "\t"<< persons[r].id;
        std::cout << "\t"<< persons[r].name;
        std::cout << "\t"<< persons[r].points;
        std::cout << std::endl;
    }

    std::cout << "-------------------------------------------------------" << std::endl << std::endl;

    int arr[NUMBER_OF_ELEMENTS] = { 1,3,6,7,4,8,5,64 };
    int arr2[] = { 2,77,4,9 };
    int len_arr = sizeof(arr) / sizeof(arr[0]);

    PrintArr(arr, len_arr);
    SortArr(arr, len_arr);
    PrintArr(arr, len_arr);

    PrintArr(arr2, 4);
    SortArrSlow(arr2, 4);
    PrintArr(arr2, 4);

    std::cout << std::endl;
    
    system("pause>0");
}



#include <iostream>
#include "circle.h"


using std::cin;
using std::cout;
using std::endl;

int main()
{
    cout<<"Hello, "<< endl;

    cout <<"Do you want to " <<  "your task" << endl;

    circle Zad_circle;

    Zad_circle.S(5);

    cout << Zad_circle.S(5);

    return 0;
}

#include <iostream>
using namespace std;

#include "header.h"
#include "classes.cpp"

int main()
{

    UbStudent first("Ria", "thapa", 1212086);
    cout << "\nStudent 1 - " << endl;
    first.display();

    AdditionalInfo firstAdditionalInfo("Mikasa", " ", 1212087, 21, "Masters");
    cout << "\nStudent 2 - " << endl;
    firstAdditionalInfo.display();
    firstAdditionalInfo.displayAdditionalInfo();
}
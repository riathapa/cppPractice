#include <iostream>
#include "binarySearchFunctions.cpp"
using namespace std;

int main()
{

    int array[21] = {11, 12, 13, 14 ,15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31};

    int sizeOfArray = *(&array + 1) - array;
    cout << endl
         << "Size of array :: " << sizeOfArray << endl
         << endl;

    int middleElementIndex = 0;

    middleElementIndex = sizeOfArray / 2;

    cout << "Middle Element :: " << middleElementIndex << endl << endl;
    cout << "Array available: " << endl;

    for (int i = 0; i < sizeOfArray; i++)
    {

        if (i != sizeOfArray - 1)
        {

            cout << array[i] << ", ";
        }
        else
        {

            cout << array[i] << endl;
        }
    }

    int userValue;

    cout << endl
         << "Enter the number you desire to locate from the above mentioned numbers :: ";
    cin >> userValue;

    cout << "Value entered by user :: " << userValue << endl;

    BinarySearchFunctions binarySearchFunctions;

    bool valuePresence = binarySearchFunctions.isPresent(userValue, array, sizeOfArray);

    if (valuePresence == false)
    {

        cout << endl
             << "Please enter the value that is present inside the array for binary search to take effect. \n" <<  
             "Let's run through it again."
             << "\n \n---------------------------------------------------------------------------------------- \n";

        main();
    }

    cout << endl << "Value is present inside the array. Proceeding...." << endl << endl;
    binarySearchFunctions.calculateThePosition(array, sizeOfArray, middleElementIndex, userValue);

    cout << "The position is " << binarySearchFunctions.getPosition() << endl << endl;

}
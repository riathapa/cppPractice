#ifndef BINARYSEARCHFUNCTIONS_H_
#define BINARYSEARCHFUNCTIONS_H_

#include<iostream>
using namespace std;

class BinarySearchFunctions{

    private:
    int position;

    public: 

    int getPosition();
    void setPosition(int position);
    bool isPresent(int value, int array[], int sizeOfArray);
    void calculateThePosition(int array[], int sizeOfArray, int middleElementIndex, int userValue);
    void findTheIndex(int array[], int l, int r, int userValue);

};

#endif
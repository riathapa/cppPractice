#ifndef "EXAMPLE_H_"
#define "EXAMPLE_H_"
#include<iostream>
#include "example.h"
using namespace std;

OperatorOverloadingExample OperatorOverloadingExample::operator+(OperatorOverloadingExample obj){
    OperatorOverloadingExample obj2;
    obj2.firstName = firstName + obj1.firstName ;
    obj2.lastName = lastName + obj1.lastName;
    return obj; 
}

#endif
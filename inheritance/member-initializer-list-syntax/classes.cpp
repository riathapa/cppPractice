#include "header.h"
#include <string>
#include <iostream>
using namespace std;

UbStudent :: UbStudent(string firstName, string lastName, int ubId) : 
firstName(firstName), lastName(lastName), ubId(ubId){}

void UbStudent :: display(){
    cout << "\nName :: " << firstName << " " << lastName <<endl;
    cout << "UbId :: " << ubId << endl;
}

AdditionalInfo :: AdditionalInfo(string firstName, string lastName, int ubId, int age, string studyLevel) : UbStudent(firstName, lastName, ubId), age(age), studyLevel(studyLevel){}

void AdditionalInfo :: displayAdditionalInfo(){
    cout << "Age :: " << age << endl;
    cout << "Study Level :: " << studyLevel << endl << endl; 
}
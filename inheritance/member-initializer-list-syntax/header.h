#ifndef HEADER_H_
#define HEADER_H_
#include<string>
using namespace std;

class UbStudent{

    private:
        string firstName;
        string lastName;
        int ubId;

    public:

        UbStudent(string firstName, string lastName, int ubId);
        void display();


};

class AdditionalInfo : public UbStudent{

    private:
        int age;
        string studyLevel;

    public:

        AdditionalInfo(string firstName, string lastName, int ubId, int age, string studyLevel);
        void displayAdditionalInfo();



};


#endif
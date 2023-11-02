#ifndef HEADER_H_
#define HEADER_H_
#include<string>

class UbStudent{

    private: 
        string firstName;
        string lastName;
        int ubId;

    public:
        UbStudent(const string & firstName, const string & lastName, int ubId);
}

#endif
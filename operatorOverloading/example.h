#include <iostream>
using namespace std;

class OperatorOverloadingExample
{

private:
    string firstName;
    string lastName;

public:
    OperatorOverloadingExample operator+(string firstName, string lastName);
    friend ostream coutOp(Ostream os, OperatorOverloadingExample op);

}
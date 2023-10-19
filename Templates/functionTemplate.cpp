#include<iostream>
using namespace std;

//template definition
template <typename T> T add(T term1, T term2){

    return term1 + term2;

}

int main(){
    int a = 10;
    int b = 11;

    cout << "\nSUM (int):: " <<  add<int>(a,b) << endl;

    double a2 = 10;
    double b2 = 20;

    cout << "\nSUM (double):: " <<  add<double>(a2,b2) << endl;
    
    char a3 = 'a';
    char b3 = 'b';

    cout << "\nSUM (character):: " <<  add<char>(a3,b3) << endl;

}
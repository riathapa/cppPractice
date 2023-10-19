#include<iostream>
using namespace std;

int main(){


    int array[5] = { 4, 5, 2, 1, 3};
    int sizeOfArray = *(&array + 1) - array;
    cout << "Size :: " << sizeOfArray << endl;

    int j=sizeOfArray - 2;
    int noOfJIterations = 0;
    int temp;

            //3
    while(j<=sizeOfArray - 2 && j >= 0){

    int i = 0;
        while ( i<=j){
            if(array[i] > array[i+1]){
                temp = array[i+1];
                cout << "Temp :: " << temp << endl;

                array[i+1] = array[i];
                cout << "array[i+1]:: " << array[i] << endl;

                array[i] = temp;
                cout << "array[i]:: " << array[i] << endl;

            }

                i++;
             cout << "Value of i :: " << i << endl; 
        
            }
        j--;
        noOfJIterations++;
    }

    cout << endl << "NoOfJIterations :: " << noOfJIterations << endl;
    for(int j = 0; j < sizeOfArray; j++){
        cout << endl << array[j] << " ";
    }
    
    // cout << "Sorted Array in ascending order :: " << array << endl;

}
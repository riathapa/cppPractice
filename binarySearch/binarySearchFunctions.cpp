#include "binarySearchFunctions.h"
#include<iostream>
using namespace std;

BinarySearchFunctions b;

bool BinarySearchFunctions :: isPresent(int value, int array[], int sizeOfArray){

    bool valuePresence = false;
                        //Size of array
    for( int i = 0; i < sizeOfArray ; i++){

        if(array[i] == value){
            valuePresence = true;
        }
    }

    cout << endl << "Is the value present in array? :: " << valuePresence << endl;

    return valuePresence;

}


int BinarySearchFunctions :: getPosition(){
    
    return b.position;
    
}


void BinarySearchFunctions :: calculateThePosition(int array[], int sizeOfArray, int middleElementIndex, int userValue){

    bool managedCase = false;

    int l=0, r=0, newMiddleElement=0;

    while(!managedCase){

        cout << "In here!" << endl << endl;

        //If the element is found in the middle itself.
        if(array[middleElementIndex] == userValue){
            b.setPosition(middleElementIndex);
            break;
        }

        //If the element is at the extreme right of the array.
        if(array[sizeOfArray -1] == userValue){
            b.setPosition(sizeOfArray -1);
            break;
        }

        //If the element is at the extreme right of the new array.
        if(array[r] == userValue){
            b.setPosition(r);
            break;
        }

        //If the element is at the extreme left of the array.
        if(array[l] == userValue){
            b.setPosition(l);
            break;
        }

        //If the element is greater than the middle element of the array
        if(array[middleElementIndex] < userValue){
            l = middleElementIndex+1;

            cout << "Size of Array :: " << sizeOfArray << endl;

            r = sizeOfArray - 1;
            cout << "r value :: " << r << endl;

            middleElementIndex = middleElementIndex + (r-l + 1)/2;
        }

        //If the element is smaller than the middle element of the array
        if(array[middleElementIndex] > userValue){
            r = middleElementIndex-1;
            middleElementIndex = middleElementIndex - (r-l + 1)/2;
        }

        //if the element is in one of the positions of simultaneours ends
        if(r-l == 1){
            b.findTheIndex(array, l, r, userValue);
            break;
        }

        cout << "l value :: " << l << endl;
        cout << "r value :: " << r << endl;

        cout << "New Middle Element :: " << middleElementIndex << endl;

        // managedCase = true;
      
    } 
}

void BinarySearchFunctions :: findTheIndex(int array[], int l, int m, int userValue){

    for(int i = l; i<= m; i++){
        if(array[i] == userValue){
            b.setPosition(i);
        }
    }

}

void BinarySearchFunctions :: setPosition(int position){
    b.position = position;
}
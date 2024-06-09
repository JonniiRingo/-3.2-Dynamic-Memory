#include <iostream> 
using namespace std;



int main(){
int SIZE;

cout << "Please enter the size of your dynamically allocated array: " << endl;
cin >> SIZE;


int *DyArr = new int[SIZE];

for (int i = 0; i < SIZE; i++){
    DyArr[i] = i * 10;
    cout << "The values of the array is " << DyArr[i] << endl; 
    cout << "" << endl; 
}


delete[] DyArr;

    return 0; 
}
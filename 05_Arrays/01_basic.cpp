#include <iostream>
using namespace std;

int main(){
    int marks1[50]; //without any initilize value
    int marks[50] = {80, 65, 76}; // with initilizition
    int marks2[] = {90, 70,40}; //auto create the array of size 3 at compaile time


    cout << marks1[8] << endl; //gives some random garbage value, because we do not initilize any value in the array

    cout << marks[0] << endl;
    cout << marks[1] << endl; 
    cout << marks[2] << endl; 
    cout << marks[49] << endl; // gives 0 no any value is stored at that index, since we initilize the valur in the array so the next index automaticly becomes 0

    cout << marks2[2] << endl; //gives 40
    // cout << marks2[4] << endl; //gives error out of bound

    return 0;
}
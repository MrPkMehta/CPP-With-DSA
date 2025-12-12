#include <iostream>
using namespace std;

//int arr[] and *arr both are same and gives the same result
int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}


int main(){
    int arr[] = {10, 34, 56, 8, 9, 25};
    int n = sizeof(arr) / sizeof(int);

    int result = linearSearch(arr, n, 9);
    cout << "index: " << result << endl; // gives index 4

    cout << "index: " << linearSearch(arr, n, 50) << endl; //return -1 because 50 is not in the array

    return 0;
}
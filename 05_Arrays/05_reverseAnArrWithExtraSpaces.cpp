#include <iostream>
using namespace std;

void printArr(int *arr, int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main(){
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr) / sizeof(int);

    //use extra spaces
    //store the arr in copyarr
    int copyArr[n];
    for(int i = 0; i < n; i++){
        int j = n-i-1;
        copyArr[i] = arr[j];
    }

    //change the orignal arr element
    for(int i = 0; i < n; i++){
        arr[i] = copyArr[i];
    }

    //print the arr
    printArr(arr, n);
}
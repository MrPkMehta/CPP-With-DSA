#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key){

    int start = 0, end = n-1;
    while(start <= end){
        int mid = (start + end)/2;

        if(arr[mid] == key){ // key found
            return mid;
        } 
        else if(arr[mid] < key){ // first half
            start = mid+1;
        }
        else{ // 2nd half
            end = mid - 1;
        }
    }
    return -1; // if key is not foiund then return -1 
}

int main(){
    int arr[] = {2,4,6,8,10,12,14,16};
    int n = sizeof(arr) / sizeof(int);

    cout << binarySearch(arr, n, 20) << endl;
    return 0;

}
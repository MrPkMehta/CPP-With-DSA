#include <iostream>
using namespace std;

int main(){
    int arr[5] = {5, 7, 3, 2, 10};
    int len = sizeof(arr) / sizeof(int);

    int max = arr[0];
    int min = arr[0];
    for(int i = 0; i < len; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    cout << "largest: " << max << endl;
    
    for (int i = 0; i < len; i++){
        if(arr[i] < min){
            min = arr[i];
        }
    }
    cout << "smallest: " << min << endl;
    
}
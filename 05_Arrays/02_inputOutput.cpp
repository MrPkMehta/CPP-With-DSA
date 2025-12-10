#include <iostream>
using namespace std;

int main(){

    //when the array sizes are known
    int arr1[5] = {23, 45, 65, 27, 89};
    int len = sizeof(arr1) / sizeof(int); // we can write size of int or sizeof(arr1[0])

    for(int i = 0; i < len; i++){
        cout << arr1[i] << " ";
    }
    cout << endl;



    // when we take the  array size and array element as input from the user 
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter array element: ";
    for(int i = 0; i < n; i++){  
        cin >> arr[i];
    }

    cout << "arrays element are: ";
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
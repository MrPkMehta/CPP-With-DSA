#include <iostream>
using namespace std;

void maxSubArraySumByKadensAlgo(int *arr, int n){
    int maxSum = INT_MIN;
    int currSum = 0;

    for(int i = 0; i < n; i++){
        currSum += arr[i];
        maxSum = max(maxSum, currSum);

        if(currSum < 0){
            currSum = 0;
        }
    }
    cout << "Maximum sub array are: " << maxSum << endl;
}
int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = 6;

    maxSubArraySumByKadensAlgo(arr, n);
    return 0;
}
#include <iostream>
using namespace std;


//when we need to define -infinity and  +infinity then we use INT_MIN and INT_MAX

//Brute force approch
//time complexity O(n^3)
void maxSubArraySum(int *arr, int n){
    int maxSum = INT16_MIN; //initial val;ue is intmin which is almost -infinity

    for(int start = 0; start < n; start++){
        for(int end = start; end < n; end++){

            int currSum = 0;
            for(int i = start; i <= end; i++){
                currSum += arr[i]; 
            }
            cout << currSum << ", "; //print sum of the sub arrays
            maxSum = max(maxSum, currSum); // hear it wil compare the value of maxsum to the currSum and stored the value in maxsum
        }
        cout << endl;
    }
    cout << "maximum sum of the subarrays are: " << maxSum << endl;
}



//Optimized approch 
//Time Complexity O(n^2)
void maxSubArraySum1(int *arr, int n){
    int maxSum = INT16_MIN; //initial val;ue is intmin which is almost -infinity

    for(int start = 0; start < n; start++){ //start = 2

        int currSum = 0;
        for(int end = start; end < n; end++){ // end = 2, 3, 4, 5
            currSum += arr[end];
            maxSum = max(maxSum, currSum); // hear it wil compare the value of maxsum to the currSum and stored the value in maxsum
        }
    }
    cout << "maximum sum of the subarrays are: " << maxSum << endl;
}

int main(){
    int arr[6] = {2, -3, 6, -5, 4, 2};
    int n = 6;

    // maxSubArraySum(arr, n);
    maxSubArraySum1(arr, n);

    return 0;
}
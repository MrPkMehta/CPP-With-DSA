#include <iostream>
using namespace std;

int reverseOfANumber(int num){
    int reverse = 0;

    while (num > 0){
        int lastDigit = num % 10;
        num /= 10;
        reverse = reverse * 10 + lastDigit;
    }
    return reverse;
}

int main(){
    int n;
    cout << "Enter a number to find Reverse :";
    cin >> n;

    cout << "the reverse of the number " << n << " is: " << reverseOfANumber(n) << endl;
    return 0; 
}
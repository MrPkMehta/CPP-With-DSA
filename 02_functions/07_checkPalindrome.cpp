#include <iostream>
using namespace std;

void checkPalindrome(int num){
    int orignal = num;
    int reversed = 0;

    while (num > 0){
    int lastDigit = num % 10;
    num = num / 10;
    reversed = reversed * 10 + lastDigit;
    }

    if(reversed == orignal){
        cout << "num is palindrome" << endl;
    } else {
        cout << "num is not a palindrome" << endl;
    }
}

int main(){
    int n;
    cout << "Enter number to check palindrome: ";
    cin >> n;

    checkPalindrome(n);
}
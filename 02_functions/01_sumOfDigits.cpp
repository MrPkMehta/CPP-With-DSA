#include <iostream>
using namespace std;

int sumOfDigits(int num){
    int digitSum = 0;
    
    while (num > 0){
        int lastDigit = num % 10; 
        num = num / 10;
        digitSum += lastDigit;
    }
    return digitSum;
}
int n;
int main() {
    cout << "enter num to do sum: ";
    cin >> n;
	int result = sumOfDigits(n);
	cout << result << endl;

}

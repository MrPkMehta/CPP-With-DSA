#include <iostream>
#include <math.h>
using namespace std;

int squareOfTwoNumbers(int a, int b){
    int result = a*a + b*b + 2*(a*b);
    return result;
}

int main(){
    int a,b;
    cout << "Enter two number to find square: ";
    cin >> a >> b;

    int result = squareOfTwoNumbers(a,b);
    cout << result << endl;

return 0;
}
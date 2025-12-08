#include <iostream>
using namespace std;

void largestOfThreeNum(int a, int b, int c){
    if (a >= b && a >= c){
        cout << "a is largest: " << a << endl;
    } else if (b >= a && b >= c){
        cout << "b is largest: " << b << endl;
    } else {
        cout << "c is the largest: " << c << endl;
    }
}

int main (){
    int a,b,c;
    cout << "enter three numbers a,b,c: ";
    cin >> a >> b >> c;

    largestOfThreeNum(a,b,c);

    return 0;
}
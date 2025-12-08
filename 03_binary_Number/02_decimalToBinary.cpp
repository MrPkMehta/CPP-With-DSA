#include <iostream>
using namespace std;

void decTobin(int decNum) {
    int n = decNum;
    int binNum = 0;
    int pow = 0; // 10^0 10^1 10^2 ..

    while (n > 0){
        int rem = n % 2; // calculate remainder
        binNum += rem * pow; // add rem * pow into the binary number
        n = n / 2; // half the number
        pow  = pow * 10;    //multiply the power by 10
    }
    cout << decNum << endl;
}

int main(){
    decTobin(4);
    return 0;

}
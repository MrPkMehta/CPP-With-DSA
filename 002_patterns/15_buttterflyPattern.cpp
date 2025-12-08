#include <iostream>
using namespace std;

int main(){
    int n = 4;

    //first half
    for (int i = 1; i <= n; i++){
        //stars
        for (int j = 1; j <= i; j++){
            cout << "*";
        }

        //spaces
        for (int j = 1; j <= (n-i)*2; j++){
            cout << " ";
        }

        //stars
        for (int j = 1; j <= i; j++){
            cout << "*";
        }
        cout << endl;
    }

    //2nd half
    for (int i = 1; i<= n; i++){
        //stars
        for (int j = 1; j <= n-i+1; j++){
            cout << "*";
        }
        //spaces
        for (int j = 1; j <= (i*2)-2; j++){
            cout << " ";
        }
        //stars
        for (int j = 1; j <= n-i+1; j++){
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
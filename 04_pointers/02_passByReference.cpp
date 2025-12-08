#include <iostream>
using namespace std;


void changeA(int *ptr){
    *ptr = 20; //dereferencing
    cout << *ptr << endl;
}


int main(){
    int a = 10;
    changeA(&a);
    cout << a << endl; //this is also 20 because we dereference the value
}
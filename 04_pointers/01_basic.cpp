#include <iostream>
using namespace std;

int main(){
    int a = 10;
    int *ptr = &a; // pointers variable ptr that stores the address of a

    int **pptr = &ptr; // stores the address of the pointer ptr



    cout << &a << " = " << ptr << endl; // hear the address of a is equal to the value of the ptr

    cout << &ptr << " = " << pptr << endl; // hear the address of the ptr is equal to the value of thr pptr


    // Dereference operator 
    //gives the value of that pointer pointed to the variable

    cout << "ereference operator" << endl;
    int b = 20;
    int *bptr = &b;
    *bptr = 30; // it will change the value 20 to 30

    cout << *bptr << " = 30" << endl; // if we write * symbol with the pointer variable then it will give the value 
    cout << *(&b) << " = 30" << endl; // if we applay the *symbol before the address then it willl give the value
    

    //NULL POINTER
    int *ptrr = NULL;

    cout << ptrr << endl;
    //cout << *ptrr<< endl;  //it will gives error
    
    return 0;
}
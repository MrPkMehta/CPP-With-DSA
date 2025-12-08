#include <iostream>
using namespace std;

char returnNextCharater(char ch){
    if (ch == 'z'){
        return 'a';
    } else if (ch == 'Z'){
        return 'A';
    } else 
    return ch + 1;
}

int main (){
    char a;
    cout << "enter a character: ";
    cin >> a;
    char result = returnNextCharater(a);
    cout << "The next character is : " << result << endl;
    return 0;
}
/* #include <iostream>
using namespace std;

int n = 4;
int num = 1;

int main() {
    for (int i = 0; i < n; i++){
        // int num = 1; (if we write hear then it will reset to 1 on every iteration)

        for (int j = 0; j < i + 1; j++){
            cout << num << " ";
        }
        cout << endl;
        num ++; //if we write inside the inner loop then it will print in inc order in each row
    }
    return 0;
}
*/

//Another way to print the same pattern and efficient way

#include <iostream>
using namespace std;


int main(){
    int n = 4;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i + 1; j++){
            cout << (i+1);
        }
        cout << endl;
    }
    return 0;
}
 
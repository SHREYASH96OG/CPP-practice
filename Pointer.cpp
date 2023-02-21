
#include <iostream>
using namespace std;

int main() {
    // Write C++ code here
    int age = 18;// Variable declaration
    int* ptr = &age;// Pointer declaration
    cout<<age<<'\n';
    cout<<ptr<<'\n';
    cout<<&age<<'\n';
    cout << *ptr << "\n";//de-referencing
    *ptr = 20;//modifiying the value of pointer
    
}

/*
OP -->
18
0x7fff4818e47c
0x7fff4818e47c

*/

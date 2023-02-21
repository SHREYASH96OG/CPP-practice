#include<iostream>
using namespace std;
int main(){
    
    
    int var1=5;
    int var2 = 5;
    
    cout<<var1++<<endl;//postfix increment: here value directly returned and then incremented
    cout<<++var2<<endl;//prefix increment :here value is first incremented and then returned
    cout<<var2;
}


/*
O/P-->


5
6
6

*/

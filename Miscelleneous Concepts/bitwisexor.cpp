#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    cout<<"Enter the first number : ";
    cin>>a;
    cout<<"Enter the second number : ";
    cin>>b;
    cout<<"The bitwise ^ of "<< a << " and " << b << " is " << (a ^ b) << ".";
    return 0;
}
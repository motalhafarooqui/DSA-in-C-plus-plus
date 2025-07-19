#include <iostream>
using namespace std;

int main(){
    int a = 0;
    int b = 0;
    cout<<"Enter the decimal number whose bit places you want to left-shift : ";
    cin>>a;
    cout<<"Enter the number spaces you want to left-shift : ";
    cin>>b;
    cout<<"The bitwise ^ of "<< a << " and " << b << " is " << (a << b) << ".";
    return 0;
}
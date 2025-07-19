#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number you want to check whether it is the any power of two or not : ";
    cin>>num;
    if (num > 0 && (num & (num -1 )) == 0)
    {
        cout<<"The entered number is a power of two.";
    }
    else
    {
        cout<<"The entered number is not a power of two.";
    }
    return 0;
}
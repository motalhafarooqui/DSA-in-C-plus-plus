#include <iostream>
using namespace std;

int main(){
    int num = 0 ;
    int flag = 0;
    cout<<"Enter the number you want to check whether it is the any power of two or not : ";
    cin>>num;
    while (num >= 2)
    {
        flag = 1;
        
        if (num%2 == 1)
        {
            flag = 2;
            break;
        }
        num = num/2;
        
    }
    if (flag == 1 || flag == 0)
    {
        cout<<"The entered number is a power of two.";
    }
    else if (flag == 2 )
    {
        cout<<"The entered number is not a power of two.";
    }    
    return 0;
}
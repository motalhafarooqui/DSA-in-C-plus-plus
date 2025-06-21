#include <iostream>
using namespace std;

//Prime number or not
int prime(int a){
    int flag = 0;
    if (a <= 1) {
        flag = 1;
    } else {
        for (int i = 2; i < a; i++) {
            if (a % i == 0) {
                flag = 1;
                break;
            }
        }
    }
    if (flag == 0)
    {
        cout<<a<<", ";
    }
    
}

//Prime numbers till n
int primenums(int a){
    if (a<=1)
    {
        cout<<"The entered number is either negative, 0 or 1, and these are not prime numbers";
    }else
    {
        for (int i = 2; i < a; i++)
        {
            prime(i);
        }   
    }
}

int main(){
    int n = 0;
    cout<<"Enter the number to print all the prime numbers from 1 to it : ";
    cin>>n;
    primenums(n);

    return 0;
}
#include <iostream>
using namespace std;

int febonacci(int a) {
    int t1 = 0;
    int t2 = 1;
    if (a == 1)
    {
        cout<<0;
    }else if (a == 2)
    {
        cout<<1;
    }else
    {
        int num = 0;
        for (int i = 3; i <= a; i++){
            num = t1 + t2;
            t1 = t2;
            t2 = num;
        }
        cout<<num;
    }  
}

int main(){
    int n = 0;
    cout<<"Enter the number n to find the nth term in Febonacci : ";
    cin>>n;
    febonacci(n);   
} 
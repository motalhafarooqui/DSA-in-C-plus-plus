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
        cout << "The number is prime.";
    }
    else
    {
        cout << "The number is not prime.";
    }
}

int main(){
    int n = 0;
    cout<<"Enter the number to check whether its prime or not : ";
    cin>>n;
    prime(n);

    return 0;
}
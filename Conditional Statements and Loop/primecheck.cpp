#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter the number to check if it is prime or not: ";
    cin >> num;
    int isPrime = 1;
    if(num == 1){
        cout << "The Number is not prime"<<endl;
    }
    for(int i=2; i*i<num; i++){
        if(num%i==0){
            isPrime = 0;
            break;
        }
    }
    if(isPrime==1){
        cout<<"The number is Prime";
    }else{
        cout << "The number is not Prime";
    }
    return 0;


}
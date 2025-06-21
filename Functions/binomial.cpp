#include <iostream>
using namespace std;

//Factorial of a number
int fact(int a){
    int f = 1;
    if (a==0)
    {
        f = 1 ;
    }else{
        for (int i = 1; i <=a; i++){
            f = f*i;
        }
    }
    return f;
}

//Binomial coeficient
int binom(int n, int r){
    int n1 = fact(n);
    int r1 = fact(r);
    int f1 = n - r;
    int f2 = fact(f1);
    int f3 = r1*f2;
    return n1/f3;
}


int main(){
    int a = 0;
    int b = 0;
    cout<<"Enter the n in nCr to get binomial coeficient : ";
    cin>> a;
    cout<<"Enter the r in nCr to get binomial coeficient : ";
    cin>> b;
    cout<<"The binomia coeficient is "<<binom(a, b);
    return 0;
}

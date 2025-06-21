#include <iostream>
using namespace std;

//sum of 2 numbers
double sum(double a, double b){
    double s = a + b;
    return s;
}

//min of two numbers
int min(int a, int b){
    if (a<b){
        return a;
    } else{
        return b;
    }
}

int main(){
    cout<<"Sum of the number "<<5<<" and "<<6<<" is "<<sum(5,6)<<'.';
    cout<<endl;
    cout<<"Min of the number "<<5<<" and "<<6<<" is "<<min(5,6)<<'.';

    return 0;
}
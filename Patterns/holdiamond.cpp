#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cout<<"Enter the number whose hollow diamond pattern you want to print : ";
    cin>> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i-1; j++){
            cout<<' ';
        }
        cout<<'*';
        if (i != 0){
            for (int j = 0;j < 2*i-1; j++){
                cout<<' ';
            }
            cout<<'*';
        }
        cout<<endl;
    }
    for (int i = 0; i < n-1; i++){
        for (int j = 0; j < i+1; j++){
            cout<<' ';
        }
        cout<<'*';
        if (i!=n-2){
            for (int j = 0; j < n-2*i; j++){
                cout<<' ';
            }
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}
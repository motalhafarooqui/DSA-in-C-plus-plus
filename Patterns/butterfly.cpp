#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cout<<"Enter the number whose butterfly pattern you want to print : ";
    cin>> n;
    for (int i = 0; i < n; i++){
        for (int j = 0; j < i+1; j++){
            cout<<'*';
        }
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<' ';
        }
        for (int j = 0; j < n-i-1; j++)
        {
            cout<<' ';
        }
        for (int j = 0; j < i+1; j++){
            cout<<'*';
        }
        cout<<endl;
        
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n-i; j++)
        {
            cout<<'*';
        }
        for (int j = 0; j < i; j++)
        {
            cout<<' ';
        }
        for (int j = 0; j < i; j++)
        {
            cout<<' ';
        }
        for (int j = 0; j < n-i; j++)
        {
            cout<<'*';
        }
        cout<<endl;
    }
    return 0;
}
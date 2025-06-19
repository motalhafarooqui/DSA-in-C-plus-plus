#include <iostream>
using namespace std;
int main(){
    int n = 0;
    cout<<"Enter the number whose triangle pattern you want to print : ";
    cin>> n;
    int s = 1;
    char ch = 'A';
    for(int i = 0; i<n; i++ ){
        for(int j=0; j<s; j++){
            cout<<ch;

        }
        cout<<endl;
        ch = ch+1;
        s = s+1;
    }
    return 0;
}
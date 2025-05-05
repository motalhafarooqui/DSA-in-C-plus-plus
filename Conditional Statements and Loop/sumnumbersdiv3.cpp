/*
#include <iostream>
using namespace std;
int main() {
    int n, sum;
    sum = 0;
    cout << "Enter the number till which you want sum of numbers divisible by 3 : " ;
    cin >> n;
    for(int i = 1; i<=n; i++){
        if(i%3 == 0){
            sum = sum + i;
        }
    
    }
    cout<<sum<<endl;
    return 0;
}

*/

#include <iostream>
using namespace std;
int main() {
    int i, n, sum;
    sum = 0;
    cout << "Enter the number till which you want sum of numbers divisible by 3 : " ;
    cin >> n;
    i = 1;
    while(i<=n){
        if(i%3 == 0){
            sum = sum + i;
        
        }
        i++;
    
    }
    cout<<sum<<endl;
    return 0;
}
/*
#include <iostream>
using namespace std;
int main() {
    int n,a;
    n=1;

    cout << "Enter the number of natural numbers you wamt to print from 1 : " ;
    cin >> a;

    while(n<=a){
        cout << n << " " ;
        n += 1;}
    return 0;
}

*/
/*
#include <iostream>
using namespace std;
int main() {
    int a;

    cout << "Enter the number of natural numbers you wamt to print from 1 : " ;
    cin >> a;

    for(int i=1; i<= a; i=i+1){
        cout<< i << " ";

    }
    return 0;
}
*/


#include <iostream>
using namespace std;
int main() {
    int a, i;
    i = 1;
    cout << "Enter the number of natural numbers you wamt to print from 1 : " ;
    cin >> a;

    do{
        cout << i << " ";
        i = i+1;
    }while(i<=a);

    
    return 0;
}
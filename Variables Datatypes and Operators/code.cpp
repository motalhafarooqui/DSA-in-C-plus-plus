/*#include <iostream>
using namespace std;
//This is the starting point of the execution.
int main(){
    int age = 25; //4 bytes
    char grade = 'A'; //1 byte
    float PI = 3.14f; //4 bytes

    bool isSafe = true; //true - 1, false - 0 //1 byte
    double price = 100.99; //8 bytes

    cout<<price<<endl; 
    return 0;
}

//Boilerplate code for C++ program <-  Comments

*/
/*
#include <iostream>
using namespace std;    

int main() {
    double price = 100.99;
    
    int newPrice = (int)price;
    cout<<newPrice<<endl;
    return 0;
}
    */

/*
#include <iostream>
using namespace std;
int main() {
    double price;
    cout << "Enter the price: ";
    cin >> price;
    cout << "The Price is :" << price << endl;
    return 0;
}
    */
/*
//Operators in C++ - Arithmetic Operators
#include <iostream>
using namespace std;
int main() {
    int a = 11, b = 5;
    
    cout << "Sum : " << (a+b) << endl;
    cout << "Subtraction : " << (a-b) << endl;
    cout << "Multiplication : " << (a*b) << endl;
    cout << "Division : " << (a/b) << endl;
    cout << "Modulo : " << (a%b) << endl;
    cout << (a/b) << endl;
    return 0;
}
    */
/*
//Sum of Two Numbers
#include <iostream>
using namespace std;
int main() {
    int a, b;
    int sum;
    cout << "Enter First Number : "<< endl;
    cin >> a;
    cout << "Enter Second Numnber : "<<endl;
    cin >> b;
    sum = a + b;
    cout << "The Sum is: " << sum << endl;
    return 0;
}
    */
//Simple Calculator
#include <iostream>
using namespace std;

int main() {
    int a,b;
    cout << "Enter First Number : " << endl;
    cin >> a;
    cout << "Enter Second Number : " << endl;
    cin >> b;
    cout << "The Sum is : " << (a+b) << endl;
    cout << "The Subtraction is : " << (a-b) << endl;
    cout << "The Multiplication is : " << (a*b) << endl;
    cout << "The Division is : " << static_cast<float>(a)/b << endl;
    cout << "The Modulo is : " << (a%b) << endl;
    return 0;


}
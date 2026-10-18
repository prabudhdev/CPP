#include <iostream>
using namespace std;
int main() {
    int a , b , temp ;
    cout<<"Enter two numbers: ";
    cin >> a >> b ;

    temp = a ;
    a  = b ;
    b = temp;

    cout << "After swapping the numbers are : " << "a = "<< a << " and " << "b = " << b<< '\n';
    return 0;
}
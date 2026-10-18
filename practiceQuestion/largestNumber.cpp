#include <iostream>
using namespace std;
int main (){
    long long a , b , c;

    cout << "Enter the three numbers :" ;
    cin >> a >> b >> c;
    if(a >= b && a >= c){
        cout << "A is the largest number ";
    }else if (b >= c && b >= a ){
        cout << "B is the largest number ";
    }else {
        cout << "C is the largest number ";
    }

}
#include <iostream>
using namespace std ;
int main(){
    float marks;
    cout << "Enter the marks :";
    cin >> marks;
    if(marks >= 40){
        cout << "Pass";
    }else{
        cout << "Fail";
    }
    return 0 ;
    
}
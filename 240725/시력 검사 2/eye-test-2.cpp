#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double avr;
    cin>>avr;
    
    if(avr>=1.0){
        cout<<"High";
    }else if(avr>=0.5){
        cout<<"Middle";
    }else{
        cout<<"Low";
    }

    return 0;
}
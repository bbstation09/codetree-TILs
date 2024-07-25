#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    char capital;
    cin>>capital;

    if(capital=='S'){
        cout<<"Superior";
    }else if(capital=='A'){
        cout<<"Excellent";
    }else if(capital=='B'){
        cout<<"Good";
    }else if(capital=='C'){
        cout<<"Usually";
    }else if(capital=='D'){
        cout<<"Effort";
    }else{
        cout<<"Failure";
    }
    return 0;
}
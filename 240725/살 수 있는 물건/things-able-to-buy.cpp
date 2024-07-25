#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int cash;
    cin>>cash;

    if(cash>=3000){
        cout<<"book";
    }else if(cash>=1000){
        cout<<"mask";
    }else{
        cout<<"no";
    }
    return 0;
}
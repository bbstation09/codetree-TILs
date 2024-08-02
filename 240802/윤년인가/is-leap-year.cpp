#include <iostream>
using namespace std;

int main() {
    // 조건 잘 묶기

    int y;
    cin>>y;

    if(y%4==0){
        cout<<"true";
    }else{
        cout<<"false";
    }

    if(y%100==0 && y%400!=0){
        cout<<"false";
    }

    return 0;
}
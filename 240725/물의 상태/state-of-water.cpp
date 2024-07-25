#include <iostream>
#include <string>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int temperature;
    string state;
    cin>>temperature;

    if(temperature<0){
        state="ice";
    }else if(temperature>=100){
        state="vapor";
    }else{
        state="water";
    }

    cout<<state;
    return 0;
}
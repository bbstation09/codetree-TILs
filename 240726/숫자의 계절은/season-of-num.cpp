#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int month;
    cin>>month;

    // 간결한 코드 ver

    // 1 2 12
    if(month >= 12 || month <= 2){
        cout<<"Winter";
    }else if(month >=9){
        // 9 10 11
        cout<<"Fall";
    }else if(month >= 6){
        // 6 7 8
        cout<<"Summer";
    }else{
        cout<<"Spring";
    }

    return 0;
}
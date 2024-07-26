#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,c,min_val;
    cin>>a>>b>>c;

    min_val=min({a,b,c});

    if(a==min_val){
        cout<<"1 ";
    }else{
        cout<<"0 ";
    }

    if(a==b && b==c){
        cout<<"1";
    }else{
        cout<<"0";
    }

    return 0;
}
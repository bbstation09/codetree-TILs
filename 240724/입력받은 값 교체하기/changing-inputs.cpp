#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,tmp;
    cin>>a>>b;
    tmp=b;
    b=a;
    a=tmp;
    cout<<a<<" "<<b;
    return 0;
}
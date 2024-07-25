#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,result;
    cin>>a>>b;
    
    // 조건식 ? 반환값1 : 반환값2
    result = (a>b) ? a : b;
    cout<<result;
    return 0;
}
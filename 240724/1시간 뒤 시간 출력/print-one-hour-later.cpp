#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int h,m;
    char c;

    cin>>h;
    cin.get(); // 중간 입력 무시
    cin>>m;

    cout<<h+1<<":"<<m;

    return 0;
}
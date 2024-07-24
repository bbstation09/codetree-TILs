#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,share,reminder;
    cin>>a>>b;
    share = a/b;
    reminder = a%b;
    cout<<share<<"..."<<reminder;
    return 0;
}
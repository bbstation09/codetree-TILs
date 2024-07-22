#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a=5,b=6,c=7,tmp=0;

    // b에는 a값을 , c에는 b값을, a에는 c값을 넣어 출력
    tmp = a;
    a = c;
    c = b;
	b = tmp;
    cout<<a<<endl<<b<<endl<<c;
    return 0;
}
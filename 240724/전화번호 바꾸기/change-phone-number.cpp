#include <iostream>
#include <string>
using namespace std;

int main() {
    string phoneNumber;
    cin >> phoneNumber;

    // 전화번호를 하이픈을 기준으로 나누기
    string prefix = phoneNumber.substr(0, 4); // "010-"
    string xxxx = phoneNumber.substr(4, 4);   // "1234"
    string yyyy = phoneNumber.substr(9, 4);   // "5678"

    // 형식에 맞게 출력
    cout << prefix << yyyy << "-" << xxxx << endl;

    return 0;
}
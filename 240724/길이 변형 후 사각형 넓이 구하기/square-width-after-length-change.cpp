#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int width, length, area;
    cin>>width>>length>>area;
    width+=8;
    length*=3;
    area=width*length;

    cout<<width<<endl<<length<<endl<<area;

    return 0;
}
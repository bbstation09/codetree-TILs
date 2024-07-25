#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a,b,sum;
    double avr;
    cin>>a>>b;
    sum=a+b;
    avr = (double)(a+b)/2;
    cout<<sum<<" "<<fixed<<setprecision(1)<<avr;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    double ft = 30.48, mi = 160934, ft_cm=0.0, mi_cm=0.0;
    cout<<fixed;
    cout.precision(1);

    ft_cm = 9.2 * ft;
    mi_cm = 1.3 * mi;

    cout<<"9.2ft = "<<ft_cm<<"cm"<<endl;
    cout<<"1.3mi = "<<mi_cm<<"cm";
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a_math, a_eng, b_math, b_eng;
    cin>>a_math>>a_eng>>b_math>>b_eng;

    // 수학 점수 비교 (우선순위)
    // 같으면 영어 점수 비교
    if(a_math > b_math || (a_math == b_math && a_eng > b_eng)){
        cout<<"A";
    }else{
        cout<<"B";
    }

    return 0;
}
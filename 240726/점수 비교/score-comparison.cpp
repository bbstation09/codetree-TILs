#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int a_math_score,a_eng_score,b_math_score,b_eng_score;
    cin>>a_math_score>>a_eng_score>>b_math_score>>b_eng_score;

    if(a_math_score>b_math_score && a_eng_score>b_eng_score){
        cout<<"1";
    }else{
        cout<<"0";
    }

    return 0;
}
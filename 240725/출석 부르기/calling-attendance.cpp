#include <iostream>
using namespace std;

int main() {
    // 여기에 코드를 작성해주세요.
    int stu_num;
    cin>>stu_num;

    if(stu_num==1){
        cout<<"John";
    }else if(stu_num==2){
        cout<<"Tom";
    }else if(stu_num==3){
        cout<<"Paul";
    }else{
        cout<<"Vacancy";
    }

    return 0;
}
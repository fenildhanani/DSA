#include<iostream>
using namespace std;


int main(){
    int num;
    cout<<"enter your number :";
    cin>>num;
    int  mul=1,rem,ans =0;

    while(num>0){
        // reminder
        rem = num % 10;
        // numberb ko divied
        num /=10;
        // ans
        ans = mul*rem+ans;
        // mul
        mul *= 2;
    }
    cout<<ans<<endl;
}
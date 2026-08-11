#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter your number";
    cin>>n;
    int i=1;

    while(i <= 1){
        if(n%2==0){
            cout<<"even";
        }
        else{
            cout<<"odd";
        }
        i++;
    }
    return 0;
}


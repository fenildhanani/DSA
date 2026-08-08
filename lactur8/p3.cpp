#include<iostream>
using namespace std;
int main(){

    int n;
    cout<<"enter your num : ";
    cin>>n;
    int r;
    int c;

    for(r=n;r>=1;r--)
    {
        for(c=1;c<=n-r;c++){
            cout<<"  ";
        }
        for(c=1;c<=2*r-1;c++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }

}
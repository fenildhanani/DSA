#include<iostream>
using namespace std;

int main(){
    int r;
    int c;
    int n;
    cout<<"enter your number : ";
    cin>>n;

    for(r=1;r<=n;r++){

        for(c=1;c<=n-r;c++)
        {
            cout<<"  ";
        }
        for(c=1;c<=r;c++)
        {
            cout<<c<<" ";
        }
        for(c=r-1;c>=1;c--)
        {
            cout<<c<<" ";
        }0
        
        cout<<endl;
    }
}
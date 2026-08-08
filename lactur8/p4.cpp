// ********
// ***  ***
// **    **
// *      *
// *      *
// **    **
// ***  ***
// ********

#include<iostream>
using namespace std;




int main(){

int r;
int c;

    int n;
    cout<<"enter your number : ";
    cin>>n;

    for(r=n;r>=1;r--)
    {
        for(c=1;c<=r;c++){
            cout<<"*"<<" ";
        }
        for(c=1;c<=2*n-2*r;c++)
        {
            cout<<"  ";
        }
        for(c=1;c<=r;c++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


    for(r=1;r<=n;r++)
    {
        for(c=1;c<=r;c++){
            cout<<"*"<<" ";
        }
        for(c=1;c<=2*n-2*r;c++)
        {
            cout<<"  ";
        }
        for(c=1;c<=r;c++){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }


}
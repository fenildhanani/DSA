#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter your number : ";
     
    cin>>n;

    int r;
    int c;

    for(r=1;r<=n;r++)
    {
        for(c=1;c<=n-r;c++)
        {
            cout<<"  ";
        }
        for(c=r;c>=1;c--)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }



}
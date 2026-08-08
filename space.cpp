#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter your number : ";
    cin>>n;
    int i;
    int c;

    for(i=1;i<=n;i++)
    {
        for(c=1;c<=n-i;c++)
        {
            cout<<"  ";
        }
        for(c=1;c<=i;c++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}
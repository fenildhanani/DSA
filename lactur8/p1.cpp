#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter YOur number : ";
    cin>>n;
    int r;
    int w;

    for(r=1;r<=n;r++)
    {
        for(w=1;w<=n-r;w++)
            cout<<"  ";


        for(w=1;w<=2*r-1;w++)
            cout<<"*"<<" ";
            
        cout<<endl;
    }
}
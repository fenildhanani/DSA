// *      *
// **    **
// ***  ***
// ********
// ***  ***
// **    **
// *      *

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter your num : ";
    cin>>n;
    int r;
    int c;

    for(r=1;r<=n;r++){
        for(c=1;c<=r;c++)
            cout<<"*"<<" ";

        for(c=1;c<=2*n-2*r;c++)
            cout<<"  ";
            
        for(c=1;c<=r;c++)
            cout<<"*"<<" ";   

            cout<<endl;
    }

    for(r=n-1;r>=1;r--){
        for(c=1;c<=r;c++)
            cout<<"*"<<" ";

        for(c=1;c<=2*n-2*r;c++)
            cout<<"  ";
            
        for(c=1;c<=r;c++)
            cout<<"*"<<" ";  
            
             cout<<endl;
    }
   

}
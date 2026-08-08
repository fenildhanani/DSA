//    *
//   * * 
//  * * *
//  * * *
//   * * 
//    * 
  

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter your number : ";
    cin>>n;
    int r,c;

    for(r=1;r<n;r++){

    for(c=1;c<=n-r;c++)
        cout<<" ";

        for(c=1;c<=r;c++)
            cout<<"*"<<" ";
        

        cout<<endl;
    
}

for(r=n-1;r>=1;r--){

    for(c=1;c<=n-r;c++)
        cout<<" ";

        for(c=1;c<=r;c++)
            cout<<"*"<<" ";
        

        cout<<endl;
    
}


}
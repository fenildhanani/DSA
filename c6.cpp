#include<iostream>
using namespace std;

int main(){
    int r;
    int c;

       
        // for(r=1;r<=5;r++)
        for(r=5;r>=1;r--)
    
    {
        // for(c=1;c<=5-(r-1); c++)
        for(c=1;c<=r;c++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

}
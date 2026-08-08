#include<iostream>
using namespace std;

int main(){
    int r;
    int c;
    for(r=1;r<=5;r++)
    {
        char name = 'a'+ r - 1;
        for(c=1;c<=r;c++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
}
#include<iostream>
using namespace std;

int main(){
int i;
int w;

    for(i=1;i<=4;i++)
{
    for(w=1;w<=4-i;w++)
    {
        cout<<"  ";
    }
    for(w=1;w<=i;w++)
    {
        cout<<i<<" ";
    }
    cout<<endl;

}
}
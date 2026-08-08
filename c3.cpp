#include<iostream>
using namespace std;

int main(){
    int r;
    int w;

    for(r=1;r<=5;r++)
    {
        for(w=1;w<=r;w++){
            cout<<w<<" ";
        }
        cout<<endl;
    }
}
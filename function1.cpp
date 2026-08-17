#include<iostream>
using namespace std;

void Swap(int &a, int &b){
    int c;
    c=a;
    a= b;
    b=c;
}

void Swap(float &c,float &d){
    float r = c;
    c=d;
    d=r;
}

int main()
{
    int a,b;
    cin>>a>>b;

    Swap(a,b);
    cout<<a<<" "<<b<<endl;

    float f1 =3.2,f2= 4.6;
    Swap(f1,f2);
    cout<<f1<<" "<<f2;



}
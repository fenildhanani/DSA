#include<iostream>
using namespace std;

// bool
void Prime(int n)
{
    if(n < 2)
    {
        cout<<0<<endl;
        return ;
        // return 0;

    }

    for(int i=2; i<n; i++)
    {
        if(n%i==0){
            cout<<0<<endl;
            return ;
        }
    }
cout<<1<<endl;
    return ;
}


int Fact(int n=3)
{
    int ans = 1;

    for(int i=1; i<=n; i++)
        ans = ans * i;

    return ans;
}





int main(){
    int a,b;
    cout<<"enter your number :";
    cin>>a>>b;

    cout<<Fact();
    cout<<endl;
    Prime(a);
    // cout<<endl;
    cout<<Fact(a)<<endl;

    Prime(b);
    // cout<<endl;
    cout<<Fact(b)<<endl;

    Prime(b-a);
    // cout<<endl;
    cout<<Fact(b-a)<<endl;


}
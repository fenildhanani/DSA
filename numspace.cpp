#include<iostream>
using namespace std;
int main()
{
 int n;
 cout<<"enter your num : ";
 cin>>n;
 int i;
 int w;


 for(i=1;i<=n;i++)
 {
    for(w=1;w<=n-i;w++)
    {
        cout<<"  ";
    }
    for(w=1;w<=i;w++){
        cout<<w<<" ";
    }
         cout<<endl;
}
}








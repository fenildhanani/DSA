#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"enter your totle numbers of array";
    cin>>n;
    cout<<"enter the elementet of an array";
    for(int i=0;i<n;i++)
    cin>>arr[i];

    for(int i=n;i>0;i--)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[j]>arr[j-1])
                swap(arr[j],arr[j-1]);
            else
                break; 
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
#include<iostream>
using namespace std;
int main()
{
    int arr[1000];
    int n;
    cout<<"enter total number of value :";
    cin>>n;
     cout<<"enter the total number : ";
    int mid;
    int start=0;
    int end=n-1;
   
    for(int i=0;i<n;i++)
    cin>>arr[i];

         while (start <= end)
    {
        mid=start+(end - start)/2;
    if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){
        return mid;
         }
        else if(arr[mid]>arr[mid+1])
        start=mid+1;
        else
        end=mid-1;

           for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
         
}
return 0;
}
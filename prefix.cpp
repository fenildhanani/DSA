#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool divide(vector<int>arr)
{
    int maxi= INT_MIN,prefix=0,total_sum=0,n=arr.size();
    // total sum,n=arr.size()
    for(int i=0;i<n;i++)
    total_sum +=arr[i];
    
    for(int i=0;i<n;i++)
    {
        prefix+=arr[i];
        // int ans=total_sum - prefix;
        if(total_sum==2*prefix)
        return 1;
    }
    return 0;
    
}
int main()
{
    
    int n;
    cout<<"enter your number";
    cin>>n;
    vector<int>v(n);
    cout<<"enter your element in array";
    for(int i=0;i<n;i++) 
    cin>>v[i];
    cout<<divide(v);
   

}
    // int ans;
    // int total_sum =0;
    // for(int i=0,i<n,i++) 
    // cin>>v[i];
    //     total_sum += arr[i];
    //     int prefix=0;

    //     for(int i=n+1,i<n,i++){
    //         prefix +=arr[i];
    //         ans=total_sum-prefix;

    //         if(ans==prefix)
    //         return 1;
    //     }

    

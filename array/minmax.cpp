#include<iostream>
using namespace std;
int main()
{
    int arr[5] = {2,3,7,6,1};
    // min value

    int ans = INT_MAX;
    for(int i=0;i<5;i++){
        if(arr[i]<ans)
        ans = arr[i];
    }
    cout<<ans<<endl;

    // max value
    int ans = INT_MIN;
    for(int i=0;i<5;i++)
    {
        if(arr[i]>ans)
        ans = arr[i];
    }
    cout<<ans<<endl;
}



#include<iostream>
using namespace std;

int main(){
    int arr[1000];
    int n;
    cout<<"enter your totle numbers of array";
    cin>>n;
    cout<<"enter the elementet of an array";

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=n-1;i>n-1;i--){
        bool swapped=0;
        for(int j=n-1;j<=n;j++){
            if(arr[j]>arr[j-1]){
                swapped=1;
                swap(arr[j],arr[j-1]);
            }
            
        }
        if(swapped==0)
        break;

    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
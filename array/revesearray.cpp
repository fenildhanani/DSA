#include<iostream>
using namespace std;
int main()
{
   int arr[5]= {1,2,3,4,5};
   int start=0,end=4;
   while(start<end){
        swap(arr[start],arr[end]); 
        start++;
        end--;
   };
   for(int i=0;i<5;i++)
   cout<<arr[i]<<" ";
   
}


//  int arr[6] = {1,6,11,9,8,3};
//     int index=-1;
//     int x ;
//     for(int i=0;i<=5;i++)
//     {
//         if(arr[i]==x){
//             index = i;
//             break;
//         }
        
//     }
//     cout<<index;
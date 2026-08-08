// #include<iostream>
// using namespace std;

// int main(){
//     int i;
//     int c;

//     for(i=1;i<=5;i++){
//         for(c=1;c<=5-i+1;c++)
//         {
//             cout<<c<<" ";
//         }
//         cout<<endl;
//     }

// }

#include<iostream>
using namespace std;

int main(){
    int i;
    int c;

    for(i=1;i<=5;i++){
        for(c=5;c>=5-i+1;c--)
        {
            cout<<c<<" ";
        }
        cout<<endl;
    }

}


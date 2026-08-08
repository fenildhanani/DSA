// #include <iostream>
// using namespace std;

// int main()
// {
//     int row, col;

//     // int count = 1;
//     for(row=1;row<=5;row++){
//         for(col=1;col<=row;col++){
//             cout<<col<<" ";
//         }
//         cout<<endl;
//     }
// }


#include <iostream>
using namespace std;

int main()
{
    int r;
    int c;

    for(r=1; r<=5; r++)
    {
        for(c=1; c<=r; c++)
    {
        cout<<r<<" ";
    }
    cout<<endl;
}
return 0;

}
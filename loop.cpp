#include<iostream>
using namespace std;

int main()
{
    // for loop
    // int i, no;

    // cout<<"Enter a number";
    // cin>>no;

    // for(i=0;i<=no;i++)
    // {
    //     cout<<i<<endl;
    // }

    //take input from users until sum reaches 20

    int no,sum=0;

    while(sum<20)
    {
        cout<<"Enter your number";
        cin>>no;

        sum = sum+no;
    }

    cout<<"The sum of numbers is: "<<sum;
    return 0;
}
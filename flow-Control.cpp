#include<iostream>
using namespace std;

int main()
{
    //int i,n;
    //program to print numbers between 1 - 100 which are not divisible by 3

    // for(i=1; i<=100; i++)
    // {
    //     if(i%3==0)
    //     {
    //         continue;
    //     }
    //     cout<<i<<endl;
    // }

    //check if number is prime or not
    // cout<<"Enter the number";
    // cin>>n;

    // for(i=2;i<n;i++)
    // {
    //     if(n%i==0)
    //     {
    //         cout<<"Not a prime";
    //         break;
    //     }
    // }

    // if(i==n)
    // {
    //     cout<<"Is prime";
    // }

    //check prime numbers between two numbers
    int a,b,i,j;

    cout<<"Enter the 1st number";
    cin>>a;
    cout<<"Enter the last number";
    cin>>b;

    for(i=a;i<=b;i++)
    {
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                break;
            }
        }
        if(j==i)
        {
            cout<<i<<endl;
        }
    }


    return 0;
}
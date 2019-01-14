#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long t;
     long long n,a,b;
    cin>>t;

    for(long long i = 0; i<t; i++)
    {
        cin>>n>>a>>b;
         long long B = 0, A = 0;
        long long arr;
        for(long long j =0; j<n; j++)
        {
           cin>>arr;
           if(arr%a == 0)
           B++;
          else if(arr%b == 0)
            A++;
        }
         if(B>A)
            cout<<"BOB"<<endl;
        else
            cout<<"ALICE"<<endl;

    }


    return 0;
}





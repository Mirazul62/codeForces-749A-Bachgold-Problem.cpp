#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int i,n, m,c,z;
    cin>>n;
    if(n%2==0)
    {
        c=n/2;
        cout<<c<<endl;
        while(c--)
          cout<<"2"<<" ";

    }


  ///  cout<<c;
    else
    {
        m=n-3;
        c=m/2;
        cout<<c+1<<endl;
        while(c--)
            cout<<"2"<<" ";
             cout<<"3";

    }

}

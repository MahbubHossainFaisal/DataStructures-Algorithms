#include<iostream>
#include<unordered_map>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
      ll A[n];
       unordered_map <ll,int> m;
       for(int i=0;i<n;i++)
       {
        cin>>A[i];
        m[A[i]]++;
       }

     int i;
       for(i=0;i<n;i++)
       {
           if(m[A[i]]==1)
           {
               cout<<A[i]<<endl;
               break;
           }

       }
       if(i==n)
       {
           cout<<"0"<<endl;
       }

    return 0;

    }
}

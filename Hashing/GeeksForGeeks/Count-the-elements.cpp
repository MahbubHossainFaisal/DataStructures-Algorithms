
/*
https://practice.geeksforgeeks.org/problems/count-the-elements/0/?category[]=Hash&problemStatus=unsolved&problemType=full&difficulty[]=0&page=1&sortBy=submissions&query=category[]HashproblemStatusunsolvedproblemTypefulldifficulty[]0page1sortBysubmissions
*/

#include<iostream>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }

        int b[n];
         for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
       int Max=0;
       for(int i=0;i<n;i++)
       { if(Max<a[i])
       Max=a[i];
       }

       int Hash[Max+1]={0};

        for(int i=0;i<n;i++)
        {
            Hash[b[i]]++;
        }
        int D[Max+1]={0};
        int sum=0;
        for(int i=0;i<=Max;i++)
        {
            sum=sum+Hash[i];
            D[i]=sum;
        }


        int q;
        cin>>q;
        for(int i=1;i<=q;i++)
        {
            int x;
            cin>>x;
            cout<<D[a[x]]<<endl;
        }




    }
}

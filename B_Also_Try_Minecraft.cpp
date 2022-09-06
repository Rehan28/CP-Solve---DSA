#include<bits/stdc++.h>

using namespace std;using LL = long long;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}
//muku28
int main()
{
    muku28();
    int n,m;
    cin>>n>>m;
    long long int a[n+1];
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    //
    long long int pfx[n];
    pfx[0] = 0;
     //int count = 0;
    //int k[n];
    for(int i=1;i<n;i++)
    {
        if(a[i]>a[i+1])
        { 
            //count ++;
            pfx[i] = pfx[i-1] + (a[i]-a[i+1]);
        }
        else
        {
            pfx[i] = pfx[i-1];
        }
        
    }
   
    //printi(pfx[1]);


    int u = n+2;
    long long int pfe[u];
    pfe[n] = 0;
    //cout<<pfe[n];

     for(int i=n-1;i>1;i--)
    {
        if(a[i-1]<a[i])
        { 
            //countt ++;
            pfe[i] = pfe[i+1] + (a[i]-a[i-1]);
        }
        else
        {
            pfe[i] = pfe[i+1];
        }
        //f[i] = countt;
    }
    //cout<<pfx[k[3]];
     //cout<<pfx[k[5]];
    
    for(int i=0;i<m;i++)
    {
        int s,t;
        cin>>s>>t;
        if(s<t)
        {
            
        if(s==1)
        {
            cout<<pfx[t-1]<<"\n";
        }
        else
        {
         
           cout<<(pfx[t-1]-pfx[s-1])<<"\n";
        } 
        }
        else
        {   
            
        if(s==n-1)
        {
            cout<<pfe[t-1]<<"\n";
        }
        else
        {
            //t = k[y+1];
           cout<<(pfe[t+1]-pfe[s])<<"\n";
        } 

        }
       
    }
  return 0;
 }
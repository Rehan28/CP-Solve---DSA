
#include<bits/stdc++.h>

using namespace std;using LL = long long;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}
int su(int i,int x)
{
    int sum = (i - x);
    if(sum>0)
    {
        return sum ;
    }
    else
    {
        return 0;
    }
}
//muku28
int main()
{
    muku28();
    int n,k,x;
    cin>>n>>k>>x;
    int a[n];
    int i;
    for( i=0;i<n;i++)
    {
        cin>>a[i];
    }
    //sort(a,a+n,greater<int>());
    int sum = 0;
    int c = x;
    
    while(k)
    {
    for( int j=0;j<n;j++)
    {
        if(a[j]>=c)
        {
            a[j] = su(a[j],x);
            j--; k--;
        }
        
       
        if(k==0)
        {
            break;
        }
        
    }  
     c--;
    }
    for(int i=0;i<n;i++)
    {
        sum = sum + a[i];
    }
    printi(sum);
  return 0;
 }
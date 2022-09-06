
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
    int n,x;
    cin>>n>>x;
    int a[n];
    int b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
    }
    int sum = 0;
    int c = 0;
    int g;
    int r[n];
    int y = 10000;
    int u = 0;
    int f = 0;
    for(int i=0;i<n;i++)
    {
        if(sum<x)
        {
            if(c == 0)
            {
                g = 0;
                sum = sum + a[i];
                r[i] = a[i];

            }
            else
            {
                g = 1;
                sum = sum + b[i];
                if(r[i]==a[i])
                {
                    f = 1;
                }
            }
        }
        
        if(sum>x || (sum!=x and i == n-1)||(sum==x and i!=n-1))
        {
            
            if(g==0)
            {
                sum = sum - a[i];
                c = 1;
            }
            else
            {
                sum = sum - b[i];
                c = 0;
            }
            if(f==1){
                sum = sum - a[i-1];
            i--;
             }
             else
             {
                f = 0;
             }i--;
             continue;
        }//printi(sum);
        
        if(sum==x and i==n-1)
        {
            break;
        }
        
        u++;
        if(u==y)
        {
            break;
        }
    }
    //printi(u);
    if(u==y)
    {
        prints("No");
    }
    else
    {
        prints("Yes");
    }
        
    
   
  return 0;
 }
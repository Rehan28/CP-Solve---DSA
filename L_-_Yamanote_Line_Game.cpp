#include<bits/stdc++.h>

using namespace std;using LL = long long;//muku28
void muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}
//muku28
int main()
{
    //muku28();
    int t;
    cin>>t;
    int x[t];
    int i;
    int r = 1;
    while(1)
    {
        for(int k=0;k<1;k++)
        {
            int c = 0;
           for(int j=0;j<i;j++)
            {
                if(r == x[j])
                {
                    r++;
                    c++;
                    k--;
                    break;
                }
            } 
            if(c==0)
            {
                printi(r);
                r++;
            }
        }
        
        cin>>x[i];
        if(x[i]==0)
        {
            break;
        }
        i++;
    }
  return 0;
 }
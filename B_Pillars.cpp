#include<bits/stdc++.h>
//Muku28
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void printi(int x){cout<<x<<"\n";}void printl(ll x){cout<<x<<"\n";}
void prints(string x){cout<<x<<"\n";}
void show(int a[], int arraysize){for (int i = 0; i < arraysize; ++i){
cout << a[i] << ",";}}void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<int> vi;typedef vector<string> vs;typedef pair<int, int> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define rep(i, a, b) for(int i = a; i < (b); ++i)
#define all(v) v.begin(),v.end()
#define nl cout<<"\n";
//Muku28
int main()
{
    Muku28();
     int n;
        cin>>n;
        int a[n];
        cin(a,n);
        bool b = true;

        int x = *max_element(a,a+n);
        for(int i=0;i<n;i++)
        {
           if(x==a[i])
           {
            x = i;
            break;
           }
        }
        int i = x-1;
        int j = x+1;
        n--;
        int y = n;

        vector<int> v;
        
        while(n--)
        {
            //dbg(i);
            //dbg(j);
            if(i==-1)
            {
                v.push_back(a[j]); 
                j++;
            }
            else if(j==y+1)
            {
                v.push_back(a[i]);
                i--;
            }
            else
            {
                
                if(a[i]>a[j])
                {
                    v.push_back(a[i]);
                    i--;
                }
                else
                {
                  v.push_back(a[j]);
                  j++; 
                 
                }
            }
        }
       
        for(int k=0;k<y-1;k++)
        {
           //cout<<v[k]<<" ";
            if(v[k]<v[k+1])
            {
                b = false;
            }
        }
        if(b)
        {
            prints("YES");
        }
        else
        {
            prints("NO");
        }
  return 0;
 }
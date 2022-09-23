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
     int t;
    cin>>t;
   while(t--)
    {
        int n;
        cin>>n;
        vector<int> v1,v2;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin>>a>>b;
            v1.push_back(a);
            v2.push_back(b);
        }

        vector<pair<int,int>> vp;
        vector<pair<int,int>> vp1;

        for(int i=0;i<n;i++)
        {
            int x = v2[i] - v1[i];
            vp.push_back(make_pair(x,i));
        }

        sort(vp.begin(),vp.end());
        vector<int> v3;
        int si = 0;
        for(int i=0;i<n;i++)
        {
            int y = vp[i].second;
            for(int j=v1[y];j<=v2[y];j++)
            {
                bool notF = true;
                for(int rehan = 0;rehan<si; rehan++)
                {
                    if(j==v3[rehan])
                    {
                        notF = false;
                        break;
                    }
                }
                if(notF)
                {
                    vp1.push_back(make_pair(j,y));
                    v3.push_back(j);
                    si++;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++)
        {
           int last = vp1[i].second;
           cout<<v1[last]<<" "<<v2[last]<<" "<<vp1[i].first;
           nl;
        }
        nl;
        nl;
    }
  return 0;
 }
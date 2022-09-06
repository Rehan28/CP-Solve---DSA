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
int most(int arr[], int n)
{
   
    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
        hash[arr[i]]++;
    int max_count = 0, res = -1;
    for (auto i : hash) {
        if (max_count < i.second) {
            res = i.first;
            max_count = i.second;
        }
    }
 
    return res;
}
int main()
{
    Muku28();
    
        int n,k;
        cin>>n>>k;
        int a[n];
        cin(a,n);
        int c = 0;
        int x = most(a,n);
        int h = 0;
        //int b[n];
        int y = 0;
        int sum = 0;
        dbg(x);
        
        for(int i=0;i<n;i++)
        {
            if(a[i]==x)
            {
                c++;
                y = 0;
            }
            else if((a[i]+k)==x)
            {
                y++;
                if(sum<y)
                {
                    sum = y;
                }
            }
        }
        
        //dbg(sum);
       printi((c+sum));

  return 0;
 }
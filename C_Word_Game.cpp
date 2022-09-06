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
        string s[3][n];
        map<string,int> m;
        for(int j=0;j<3;j++)
        {
            for(int i=0;i<n;i++)
            {
                cin>>s[j][i];
                m[s[j][i]]++;
                //cout<<m[s[j][i]];
                
            }
        }
        for (int i = 0; i < 3; i++) {
		int per = 0;
		for (int j = 0; j < n; j++) {
            //cout<<m[s[i][j]];
            //nl;
			if(m[s[i][j]]==1)
            {
                per = per + 3;
            }
            else if(m[s[i][j]]==2)
            {
                per++;
            }
		}
		cout <<per<<" ";
	}
	nl;
      
    }
  return 0;
 }
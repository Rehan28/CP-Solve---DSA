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
int pos1 = -1;
int pos2 = -1;
bool Rehan(int arr[],int n ,int pre[],int suf[],int total_sum,int x)
{

	

	int i = 0, j = n - 1;
	while (i < n)
	{

		if (pre[i] == total_sum / x)
		{
				pos1 = i;
		}

		if (suf[j] == total_sum / x)
		{
			pos2 = j;
		}

		if (pos1 != -1 && pos2 != -1)
		{
			if (suf[pos1 + 1] - suf[pos2] == total_sum / x)
			{
				return true;
			}
			else
			{
				return false;
			}
		}

		if (pre[i] < suf[j])
		{
			i++;
		}
		else
		{
			j--;
		}
	}
}
int main()
{
    Muku28();
     int t;
    cin>>t;
   while(t--)
    {
        ll n;
        cin>>n;
        ll a[n];
        cin(a,n);
        
        ll psum[n];
        psum[0] = a[0];
        for(int i=1;i<n;i++)
        {
            psum[i] = psum[i-1] + a[i];
        }
        ll ssum[n];
        ssum[n-1] = a[n-1];
        for(int i=n-2;i>-1;i--)
        {
            ssum[i] = ssum[i+1] + a[i];
        }
        ll sum = ssum[0];

        for(int i=2;i<n;i++)
        {
            
            if(Rehan(a,n,psum,ssum,sum,i))
            {
                cout<<"rehan";
            }
        }
    }
  return 0;
 }
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define int long long
#define mod 1000000007

void solve(int test) {
    int n;
    cin>>n;
    int x = 0;
    cout << 1 << " " << "1" << endl;
    cin >> x;
    if(x==0)
    {
        cout << 0 << " " << 1 << " " << 0 << endl;
    }
    else if(x==n)
    {
        cout << 0 << " " << 1 << " " << 1 << endl;
    }
    else
    {
        cout << 1 << " " << "10" << endl;
        cin >> x;
        if(x==0)
        {
            cout << 0 << " " << 1 << " " << 0 << endl;
        }
        else
        {
            cout << 1 << " " << "01" << endl;
            cin >> x;
        }
    }
    cout << 1 << " " << "01" << endl;
    int y;
    cin >> y;
    if(x>y){
        cout << 0 << " " << 1 << " " << 1 << endl;
    }
    else if(x<y){
        cout << 0 << " " << 1 << " " << 0 << endl;
    }
    else{
       
    }
    int p;
    cin >> p;
}
int32_t main() {
    //Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}

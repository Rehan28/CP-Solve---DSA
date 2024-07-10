#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define no cout << "NO"<<nl;
#define yes cout << "YES"<<nl;
#define mod 1000000007
const int inf = 1e9 + 9;

bool is_sorted(vector<int> a,int k){
    vector<int> v;
    int n = a.size();
    for (int j = 0; j < n - 1; j++)
    {
        if (j + 1 == k)
        {
            if (j + 2 < n)
            {
                int y = __gcd(a[j], a[j + 2]);
                v.push_back(y);
            }
            else
            {
                continue;
            }
        }
        else if (j != k)
        {
            int y = __gcd(a[j], a[j + 1]);
            v.push_back(y);
        }
            
        }
    bool f = true;
    for (int i = 0; i < v.size()-1;i++){
        if(v[i]>v[i+1]){
            f = false;
            break;
        }
    }
    return f;
}

void solve(int test) {
    int n;
    cin>>n;
    vector<int> a;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        a.push_back(x);
    }
    vector<int> v;
    for (int i = 0; i < n - 1;i++){
        int x = __gcd(a[i], a[i + 1]);
        v.push_back(x);
        cout << x << " ";
    }
    dbg(1);
    int c = 0;
    for (int i = 0; i < n - 2;i++){
        if(v[i]>v[i+1]){
            c++;
            bool f = false;
            for (int j = i; j < n;j++){
                if(is_sorted(a,j)){
                    f = true;
                    break;
                 }
            }
            if (f == false){
                c = 2;
                break;
            }    
           
        }
        if(c>=2){
            break;
        }
    }
    if(c>=2){
        no;
    }
    else{
        yes;
    }
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}

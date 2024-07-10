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
#define int long long
map<int, int> mp;
ll sum = 0;
int n;
bool f(int a[],int b[],int c[]){
    int x = 0;
    for (int i = 0; i < n-2;i++){
        x += a[i];
        if(x>=sum){
            mp[1] = i+1;
            break;
        }
    }
    if(x>=sum){
        int y = 0;
        for (int i = mp[1]; i < n - 1;i++){
            y += b[i];
            if(y>=sum){
                mp[2] = i + 1;
                break;
            }
        }
        if(y>=sum){
            int z = 0;
            for (int i = mp[2]; i < n;i++){
                z += c[i];
            }
            if(z>=sum){
                return true;
            }
        }
    }
    return false;
}
void pa(){
    cout << 1 << " " << mp[1] << " ";
}
void pb(){
    cout << mp[1]+1 << " " << mp[2] << " ";
}
void pc(){
    cout << mp[2]+1 << " " << n << " ";
}

void solve(int test) {
    cin>>n;
    int a[n];
    cin(a,n);
    int b[n];
    cin(b,n);
    int c[n];
    cin(c,n);
    sum = 0;
    for (int i = 0; i < n;i++){
        sum += a[i];
    }
    if(sum%3){
        sum /= 3;
        sum++;
    }
    else{
        sum /= 3;
    }
    //dbg(sum);
    if(f(a,b,c)){
        pa();
        pb();
        pc();
    }
    else if(f(a,c,b)){
        pa();
        pc();
        pb();
    }
    else if(f(b,a,c)){
        pb();
        pa();
        pc();
    }
    else if(f(b,c,a)){
        //dbg(1);
        pc();
        pa();
        pb();
    }
    else if(f(c,a,b)){
        pb();
        pc();
        pa(); 
    } 
    else if(f(c,b,a)){
        pc();
        pb();
        pa();
    }
    else{
        cout << -1;
    }
    cout << "\n";
}
int32_t main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}

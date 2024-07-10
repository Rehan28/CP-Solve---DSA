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
const int N = 1e6 + 9;

int phi[N];
void find_Phi(){ // This function run on O(n loglog n)
    for (int i = 1; i < N;i++){
        phi[i] = i;
    }
    for (int i = 2; i < N;i++){
        if(phi[i]==i){// That means i is a prime
            for (int j = i; j < N;j = j+i){
                phi[j] -= (phi[j] / i);// prime fact gula dia vag kore minus kortechi
            }
        }
    }
}
//##divisor sum Property
// n ar jodi d ta divisor thake then phi[1] + phi[2] + --- + phi[d] = n
// toh jodi d gular phi bad dia dei taile toh 
// ata established by Gauss

void Dsum_Find_Phi(){
    phi[0] = 0;
    phi[1] = 1;
    for (int i = 2; i < N;i++){
        phi[i] = i - 1;
        //because max n-1 ta co-prime hoite pare
    }
    for (int i = 2; i < N;i++){
        for (int j = i*2; j < N; j = j + i){
            phi[j] -= phi[i];
            // j ar joto divisor ache tader sum
        }
    }
}

void solve(int test) {
    int n;
    cin>>n;
    cout << phi[n] << "\n";
}
int main() {
    Muku28();
    int test=1;
    cin>>test;
    //find_Phi();
    Dsum_Find_Phi();
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}

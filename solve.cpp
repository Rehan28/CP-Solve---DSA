#include <bits/stdc++.h>
using namespace std;

const int N = 2e6+5;
bool prime[N];
void sieve() {
    prime[1] = false;
    for (int i = 2; i*i < N; i++) {
        if (prime[i] == false) {
            for (int j = i*i; j < N; j += i) {
                prime[j] = true;
            }
        }
    }
}

void solve(int test) {
    int n;
    cin>>n;
    
    if(prime[n] == false) {
        cout<<"Bob"<<"\n";
    } 
    else {
        cout<<"Alice"<<"\n";
    }
}
int main() {
    sieve();

    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}

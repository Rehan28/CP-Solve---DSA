#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    int k;
    cin >> k;
    int n = 0;
    int x = 0;

    for (int i = 1; i <= k; i++) {
        x = (x * 10 + 7);
        //cout << x << "\n";
        n = (n * 10 + 7) % k;
        if (n == 0) { 
            cout << i << "\n"; 
            return 0;
        }
    }
    cout << "-1\n";
    return 0;
}
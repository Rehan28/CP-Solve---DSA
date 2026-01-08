#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x = ((n-1) / 10);
    
    string s = to_string(x);
    for (int i = 0; i < s.size();i++){
        if(i==0 and s[i]!='0'){
            s[i] = '1';
        }
        else{
            s[i] = '0';
        }
    }
    x = stoi(s);
    x *= 10;
    //cout << x << "\n";
    if(x==0){
        cout << n - 1 << "\n";
        return 0;
    }
    int res = (n - x) * x;
    //cout << res << "\n";
    s = to_string(res);
    int j = s.size() - 1;
    for (int i = 0; i < s.size() / 2;i++){
        s[j] = s[i];
        j--;
    }
    cout << s << "\n";
    return 0;
}

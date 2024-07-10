//# permutation
/*
permutation and combination are not same.
in permutaion oder matter AB BA here two permutaion but in combination result is 1 AB or BA

In combinatorics, the formula for calculating the number of permutations of a set of “n”
 distinct elements taken “r” at a time is given by:
 P(n,r) = n!/(n-r)!
 Here,
    *P(n,r) represents the number of permutations.
    *n is the total number of distinct elements.
    *r is the number of elements taken at a time.
    *n! (read as “n factorial”) represents the product of all positive integers from 1 to n.
if i generate all permutation using all element that will be n!. <(n-n)!  = 1>

*/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;

vector<vector<int>> ans;
void permutation(vector<int> &v,int idx){
    
    if(idx==v.size()){
        ans.push_back(v);
        return;
    }
    for (int i = idx; i < v.size();i++){
        swap(v[i], v[idx]);
        permutation(v, idx + 1);
        swap(v[i], v[idx]);
    } 
    return;
}

int main() {
    Muku28();
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }
    permutation(v, 0);
    for (auto x : ans){
        for (auto i : x){
            cout << i << " ";
        }
        cout << "\n";
    }
    return 0;
}
/*
    map<int, int> mp;
    int id = 0;
    for (int i = 1;i<=n;i++){
        mp[i] = ++id;// atay age barbe then add hobe
        mp[i] = id++;// add hobe then barbe
    }
*/
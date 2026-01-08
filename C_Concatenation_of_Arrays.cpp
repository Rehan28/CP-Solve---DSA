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

int countAndMerge(vector<int>& arr, int l, int m, int r){
    int n1 = m - l + 1, n2 = r - m;
    vector<int> left(n1), right(n2);
    for (int i = 0; i < n1; i++)
        left[i] = arr[i + l];
    for (int j = 0; j < n2; j++)
        right[j] = arr[m + 1 + j];
    int res = 0;
    int i = 0, j = 0, k = l;
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k++] = left[i++];
        }
        else {
            arr[k++] = right[j++];
            res += (n1 - i);
        }
    }
    while (i < n1)
        arr[k++] = left[i++];
    while (j < n2)
        arr[k++] = right[j++];

    return res;
}

int countInv(vector<int>& arr, int l, int r){
    int res = 0;
    if (l < r) {
        int m = (r + l) / 2;
        res += countInv(arr, l, m);
        res += countInv(arr, m + 1, r);
        res += countAndMerge(arr, l, m, r);
    }
    return res;
}

bool comp(pair<int,int> a, pair<int,int> b) {
   if(a.second==b.second)
   {
       return a.first < b.first;
   }
   return a.second < b.second;
}

void solve(int test) {
    int n;
    cin>>n;
    vector<pair<int, int>> vp;
    vector<pair<int, int>> vp1;
    for (int i = 0; i < n;i++){
        int a, b;
        cin >> a >> b;
        vp.push_back({a, b});
        vp1.push_back({a, b});
    }
    sort(vp.begin(), vp.end());
    sort(vp1.begin(), vp1.end(),comp);
    vector<int> ans;
    vector<int> ans1;
    vector<int> ans2;
    vector<int> ans3;
    
    for (int i = 0; i < vp.size();i++){
        ans.push_back(vp[i].first);
        ans.push_back(vp[i].second);
        ans2.push_back(vp[i].first);
        ans2.push_back(vp[i].second);
    }
    
    for (int i = 0; i < vp1.size();i++){
        ans1.push_back(vp1[i].first);
        ans1.push_back(vp1[i].second);
        ans3.push_back(vp1[i].first);
        ans3.push_back(vp1[i].second);
    }
     n *= 2;
    int inc = countInv(ans, 0, n-1);
    int inc1 = countInv(ans1, 0, n - 1);
    if(inc<=inc1){
        for(auto x : ans2){
            cout << x << " ";
        }
    }
    else{
         for(auto x : ans3){
            cout << x << " ";
        }
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

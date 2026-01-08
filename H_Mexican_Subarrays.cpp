#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long


void solve(int test) {
    int n;
    cin>>n;
    int a[n+1];
    a[0]=0;
    for(int i=1;i<=n;i++){
        cin>>a[i];
    }


    int one[n+1];    
    int zero[n+1];
    one[0]=0;    
    zero[0]=0;
    int two[n+1];
    two[0]=0;

    for(int i=1;i<=n;i++){
        if(a[i]==1){
            one[i]=one[i-1]+1;
        }
        else{
            one[i]=one[i-1];
        }

        if(a[i]==0){
            zero[i]=zero[i-1]+1;
        }
        else{
            zero[i]=zero[i-1];
        }

        if(a[i]==2){
            two[i]=two[i-1]+1;
        }
        else{
            two[i]=two[i-1];
        }
    }

    int ans = 0;
    int sum = 0;
    int i = 1;
    for(int j=1;j<=n;j++){
        sum += a[j];
        if(sum>3){
            while((sum>3 and i<=j) or a[i]==0){
                sum -= a[i];
                i++;
            }
        }
        if(sum==3){
            int cnt1 = one[j]-one[i-1];
            int cnt0 = zero[j]-zero[i-1];
            int cnt2 = two[j]-two[i-1];
            dbg(i);dbg(j);
            if(cnt0>0 and cnt1==1 and cnt2==1){
                int o = 0;
                int t = 0;
                for(int k = i;k<=j;k++){
                    if(a[k]==1){
                        o = k;
                    }
                    else if(a[k]==2){
                        t = k;
                    }
                }
                int left = o - i;
                int right = j - t;
                ans += (left*right+1) + ((left+1)*right);
            }
        }
        
    }

    sum = 0;
    i = 1;
    for(int j=1;j<=n;j++){
        sum += a[j];
        if(sum>2){
            while((sum>2 and i<=j) or a[i]==0){
                sum -= a[i];
                i++;
            }
        }
        if(sum==2){
            int cnt1 = one[j]-one[i-1];
            int cnt0 = zero[j]-zero[i-1];
            int cnt2 = two[j]-two[i-1];
            if(cnt0>0 and cnt1==2){
                ans++;
            }
        }
        
    }

    cout<<ans<<nl;
}
int32_t main() {
    Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}

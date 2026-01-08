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

void solve(int test) {
    int n;
    cin>>n;
    int a[n];
    cin(a,n);
    int mn = *min_element(a, a + n);
    int mx = *max_element(a, a + n);
    if(mn==mx){
        cout << 0 << "\n";
        return;
    }
    int ind[n];
    for (int i = 0; i < n;i++){
        if(a[i]==mn){
            ind[i] = -1;
        }
        else if(a[i]==mx){
            ind[i] = 1;
        }
        else{
            ind[i] = 0;
        }
    }
    int f = 0;//max
    int f1 = 0;//min
    for (int i = 0; i < n;i++){
        if(f==0 and ind[i]==-1){
            f = 1;
        }
        else if(f==1 and ind[i]==1){
            f = 2;
        }
        else if(f==2 and ind[i]==-1){
            f = 3;
        }
        else if(ind[i]==1){
            f = -1;
        }
    
        if(f1==0 and ind[i]==1){
            f1 = 1;
        }
        else if(f1==1 and ind[i]==-1){
            f1 = 2;
        }
        else if(f1==2 and ind[i]==1){
            f1 = 3;
        }
        else if(ind[i]==-1){
            f1 = -1;
        }
    }

  
    if(f==3){
        int first = -1;
        int last = -1;
        int mid = (mx + mn) / 2;
        for (int i = 0; i < n;i++){
            if(last!=-1 and a[i]==mn){
                break;
            }
            if(a[i]>=mid){
                last = i;
            }
        }
        for (int i = n-1; i>-1;i--){ 
            if(first!=-1 and a[i]==mn){
                break;
            }
            if(a[i]>=mid){
                first = i;
            }
           
        }
        int mnx = INT_MAX;
        for (int i = first; i <= last;i++){
            mnx = min(mnx, a[i]);
        }
        int xx = mnx - mn;
        mx -= xx;
        cout << mx - mn << "\n";
    }
    else if(f1==3){
        int first = -1;
        int last = -1;
        int mid = (mx + mn) / 2;
        for (int i = 0; i < n;i++){
            if(last!=-1 and a[i]==mx){
                break;
            }
            if(a[i]<=mid){
                last = i;
            }
        }
        for (int i = n-1; i>-1;i--){
            if(first!=-1 and a[i]==mx){
                break;
            }
            if(a[i]<=mid){
                first = i;
            }
        }
        int mnx = INT_MIN;
        for (int i = first; i <= last;i++){
            mnx = max(mnx, a[i]);
        }
        int xx = mx - mnx;
        mn += xx;
        cout << mx - mn << "\n";
    }
    else{
        int f2 = 0;//min
        int f3 = 0;//maxf
        for (int i = 0; i < n;i++){
           if(f2==0 and ind[i]==-1){
               f2 = 1;
           }
           else if(f2==1 and ind[i]==1){
               f2 = 2;
           }
           else if(f2==2 and ind[i]==-1){
               f2 = -1;
           }

           if(f3==0 and ind[i]==1){
               f3 = 1;
           }
           else if(f3==1 and ind[i]==-1){
               f3 = 2;
           }
           else if(f3==2 and ind[i]==1){
               f3 = -1;
           }
        
        }
        if(f2==2){
            int first = -1;
            int last = -1;
            int mid = (mx + mn) / 2;
            for (int i = 0; i < n;i++){
                if(last!=-1 and a[i]==mx){
                    break;
                }
                if(a[i]<=mid){
                    last = i;
                }
            }
            for (int i = n-1; i>-1;i--){
                if(first!=-1 and a[i]==mx){
                    break;
                }
                if(a[i]<=mid){
                    first = i;
                }
            }
            int mnx = INT_MIN;
            for (int i = first; i <= last;i++){
                mnx = max(mnx, a[i]);
            }
            int xx = mx - mnx;
            mn += xx;
            cout << mx - mn << "\n";
        }
        else if(f3==2){
            int first = -1;
            int last = -1;
            int mid = (mx + mn) / 2;
            for (int i = 0; i < n;i++){
                if(last!=-1 and a[i]==mn){
                    break;
                }
                if(a[i]>=mid){
                    last = i;
                }
            }
            for (int i = n-1; i>-1;i--){ 
                if(first!=-1 and a[i]==mn){
                    break;
                }
                if(a[i]>=mid){
                    first = i;
                }
            
            }
            int mnx = INT_MAX;
            for (int i = first; i <= last;i++){
                mnx = min(mnx, a[i]);
            }
            int xx = mnx - mn;
            mx -= xx;
            cout << mx - mn << "\n";
        }
        else{
            //dbg(mx);
            cout << mx - mn << "\n";
        }
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

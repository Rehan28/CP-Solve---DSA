#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;
//cout << "Case " << test << ": ";
//Muku28
char q(int a,int b,int c,int d){
    cout << '?' << " " << a << " " << b << " " << c << " " << d<<"\n";
    fflush(stdout);
    char res;
    cin >> res;
    return res;
}
int Rehan(int test){
    int n;
    cin>>n;
    bool f = true;
    int a = 0;
    int b = 1;
    int c = 0;
    int d = 1;
        for (int i = 0; i < n-1;i++){
            char res = q(a,a,b,b);
            if(res=='<'){
                a = b;
            }
            b++;
        }
        //cout<<a<<"\n";

        vector<int> v;
        v.push_back(0);
        for (int i = 0; i < n-1;i++){
            char res = q(a, c, a, d);
            if (res == '<')
            {
                c = d;
                v.clear();
                v.push_back(c);
            }
            else if(res=='='){
                 v.push_back(d);
            }
            d++;
        }
        c = v[0];
        for (int i = 1; i < v.size(); i++){
            char res = q(c, c, v[i], v[i]);
            if(res=='>'){
                c = v[i];
            }
        }
        cout << '!' << " " << a << " " << c << "\n";
        fflush(stdout);


    return 0;
}
//--------------28--------------//
int main(){
    //Muku28();
    int t = 1;
		cin>>t;
    for(int i=1;i<=t;i++){
        Rehan(i);
    }
		return 0;
 }

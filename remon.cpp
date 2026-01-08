// #include <bits/stdc++.h>
// using namespace std;
// typedef long long ll;
// void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
// #define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
// #define nl "\n"
// #define dbg(x) cout<<#x<<" = "<<x<<nl;
// #define no cout << "NO"<<nl;
// #define yes cout << "YES"<<nl;
// #define mod 1000000007

// void solve(int test) {
//     string s[7] = {"Bangla : ", "English : ", "ICT : ", "Physics : ", "Math : " ,"Chemistry : ", "Biology : "};
//     double a[7];
//     double sum = 0.0;
//     for (int i = 0; i < 7;i++){
//         cout << s[i] << "\n";
//         cin >> a[i];
//         if(i!=6){
//             sum += a[i];
//         }
//         else{
//             sum += (a[i] - 2);
//         }
//     }
//     cout << "Grade : " << (sum / 6) << "\n";
// }
// int main() {
//     Muku28();
//     int test=1;
//     //cin>>test;
//     for(int i=1;i<=test;i++) {
//         solve(i);
//     }
//     return 0;
// }
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
    double x, y;
    cout << "Give SSC GPA : ";
    cin >> x;
    cout << "Give HSC GPA : ";
    cin >> y;
    cout << "TOtal Marks out of 200 : " << (x * 15) + (y * 25) << "\n";
}
int main() {
    //Muku28();
    int test=1;
    //cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}


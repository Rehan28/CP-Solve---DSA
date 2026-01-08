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

//Basic akta problem
/*akta string ar pasa pasi 2 ta char soban hoile tader delelte korte parbo string tare minimum
koto size a banano possible ---> stack*/
//# palindrom string re rearrange kore palindrom banano jay kina--> even odd
// akta rage a kora jay kina -> + prifix sum
// koyta sub string ache __>> HW

#String Hashing
// Basic Hashing
const int N = 1e5 + 9, p = 137;//p prime
int pw[N];
void precal(){
    pw[0] = 1;
    for (int i = 1; i < N;i++){
        pw[i] = 1LL * pw[i - 1] * p % mod;
    }
}
int gethash(string s){
    int n = s.size();
    int hs = 0;
    for (int i = 0; i < n;i++){
        hs += (1LL * s[i] * pw[i] % mod);
        hs %= mod;
    }
    return hs;
}
void solve(int test) {
    string a, b;
    cin >> a >> b; 
    precal();//hashing precalculation 
    // main fun a korbo
    cout << gethash(a) << " " << gethash(b) << "\n";
    // gethash --> O(n);
}

#calculation unique string
// set use korle n*m*log(n) ar hashing a korle n*m + n*log(n);


#Double Hashing
//#substring ar jonno hash korte caile mara khaite pari

//# double hash use korle sob jaygay AC hobe
//basic
const int N = 1e5 + 9, p1 = 137, p2 = 277, mod1 = 1e9 + 7, mod2 = 1e9 + 9; // p prime
int pw[N];
int pw2[N];

void precal(){
    pw1[0] = 1;
    for (int i = 1; i < N;i++){
        pw1[i] = 1LL * pw1[i - 1] * p1 % mod1;
    }
    pw2[0] = 1;
    for (int i = 1; i < N;i++){
        pw2[i] = 1LL * pw2[i - 1] * p2 % mod2;
    }
}

pair<int,int> gethash(string s){
    int n = s.size();
    int hs1 = 0;
    for (int i = 0; i < n;i++){
        hs1 += (1LL * s[i] * pw1[i] % mod1);
        hs1 %= mod1;
    }
    int hs2 = 0;
    for (int i = 0; i < n;i++){
        hs2 += (1LL * s[i] * pw2[i] % mod2);
        hs2 %= mod2;
    }
    return {hs1,hs2};
}

//#double hashing templet
const int N = 1e5 + 9, p1 = 137, p2 = 277, mod1 = 1e9 + 7, mod2 = 1e9 + 9; // p prime

pair<int, int> pw[N];

void precal(){
    pw[0] = {1,1};
    for (int i = 1; i < N;i++){
        pw[i].first = 1LL * pw[i - 1].first * p1 % mod1;
        pw[i].second = 1LL * pw[i - 1].second * p2 % mod2;
    }
}

pair<int,int> gethash(string s){
    int n = s.size();
    pair<int, int> hs({0, 0});
    for (int i = 0; i < n;i++){
        hs.first += (1LL * s[i] * pw[i].first % mod1);
        hs.first %= mod1;
        hs.second += (1LL * s[i] * pw[i].second % mod2);
        hs.second %= mod2;
    }
    return hs;
}

//unsigned long long use kore mod try korbona


//#substring Hashing usning bigmod and mmi() 


//temp
//##double substring hashing


const int N = 1e6 + 9;
const int p1 = 137, mod1 = 127657753, p2 = 277, mod2 = 987654319;

//Big mod
int power(long long n, long long k, int mod) {
  int ans = 1 % mod; n %= mod; if (n < 0) n += mod;
  while (k) {
    if (k & 1) ans = (long long) ans * n % mod;
    n = (long long) n * n % mod;
    k >>= 1;
  }
  return ans;
}

//build prime and inverse prime
int ip1, ip2;
pair<int, int> pw[N], ipw[N];
void precal() {
  pw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    pw[i].first = 1LL * pw[i - 1].first * p1 % mod1;
    pw[i].second = 1LL * pw[i - 1].second * p2 % mod2;
  }
  ip1 = power(p1, mod1 - 2, mod1);
  ip2 = power(p2, mod2 - 2, mod2);
  ipw[0] =  {1, 1};
  for (int i = 1; i < N; i++) {
    ipw[i].first = 1LL * ipw[i - 1].first * ip1 % mod1;
    ipw[i].second = 1LL * ipw[i - 1].second * ip2 % mod2;
  }
}
//full string hash
pair<int, int> string_hash(string s) {
  int n = s.size();
  pair<int, int> hs({0, 0});
  for (int i = 0; i < n; i++) {
    hs.first += 1LL * s[i] * pw[i].first % mod1;
    hs.first %= mod1;
    hs.second += 1LL * s[i] * pw[i].second % mod2;
    hs.second %= mod2;
  }
  return hs;
}
//build prefix
pair<int, int> pfx[N];
void build(string s) {
  int n = s.size();
  for (int i = 0; i < n; i++) {
    pfx[i].first = 1LL * s[i] * pw[i].first % mod1;
    if (i) pfx[i].first = (pfx[i].first + pfx[i - 1].first) % mod1;
    pfx[i].second = 1LL * s[i] * pw[i].second % mod2;
    if (i) pfx[i].second = (pfx[i].second + pfx[i - 1].second) % mod2;
  }
}
//Sub string prefix
pair<int, int> sub_string_hash(int i, int j) {
  assert(i <= j);
  pair<int, int> hs({0, 0});
  hs.first = pfx[j].first;
  if (i) hs.first = (hs.first - pfx[i - 1].first + mod1) % mod1;
  hs.first = 1LL * hs.first * ipw[i].first % mod1;
  hs.second = pfx[j].second;
  if (i) hs.second = (hs.second - pfx[i - 1].second + mod2) % mod2;
  hs.second = 1LL * hs.second * ipw[i].second % mod2;
  return hs;
}


//# single hash use korle aktu fast hoy jodi dorkar hoy toh try kora jabe single hash

void solve(int test) {
   
    string s;
    cin >> s;
    precal();//must dite hobe
    build(s);//must dite hobe
    cout << sub_string_hash(0, 1).first << " " << sub_string_hash(0, 1).second << "\n";
    cout << sub_string_hash(3, 4).first << " " << sub_string_hash(3, 4).second << "\n";
    cout << (sub_string_hash(0, 1) == sub_string_hash(3, 4)) << "\n";
}



//# akta string ar modde koyta substring soman ata twmp use kore e par anay

//#problem - 3 (pattern matching) CSES
/*akta string ar moddy koy ta m ache m onno akta string
ata mainly KMP use kore kora hoy but hashing use kore easy.
w*/ 

//#[Problem 4] Number of Divisors of a String

/*A stringb is a divisor of s if it is possible to glue b zero or more times to 
get the string s.*/
void get_divisor(){
    string s;
    cin >> s;
    int ans = 0;
    //***** Time complexity is O(nlog(n))

    // seive ar moto kaj korteche and sub_string_hash O(1) a paitechi
    // ata chara O(n*n) hoitoh internal copare ar jonno
    for (int length = 1; length <= n / 2;length++){
        bool ok = true;
        for (int i = 0; i + length-1< n;i = i+length){
            ok &= (sub_string_hash(i, i + length - 1) == sub_string_hash(0, length - 1));
            // true hole 1 e thakbe then amra ans 1 pluse korbo
        }
        ans += ok;
    }
}

//#Longest Common prefix (LCP)
/* binary search kore suru theke max length koto possible log(n) a possible ar hashing ar jonno
compair O(1);
*/
//proble akta string 1e5 query thakbe 1e5 ta 2 ta sub string ar moodde LCP ber kora lagbe same
//problem 


//#sting s a minimum koto size ar string ache jeta atleast k bar occure kore
/*minimum hoile 1 size a substring gula e ans */
//** maximum koto size ar bolle size *binary search*  kore amra paite pari

//#Longest Common Substring (LCS)
/*boro size ar substring sara soman

length ar upor binary search kore amra kore felte pari.
*/

//#cyclic shift
/*koyta uniq cycle ache problem

***akta string s re 2bar con korlye 2s pabo setare 0,n-1 porjonto n length ar koyle all
cycle paoa jay.

then easyly hashing kore unique ber kora jay.

*/

//#kono 2 ta string lexicographically minimam naki soman
/* ata normally O(n) lage LCP(longest common prefix) ber kore tar porer charecter ta check
korlye hobe.
*/

//**# cyclic shift gular modde lexicographically minimam konta
/*
charecter wise korle n*n lagbe
protita point theke check korbo

3 2 4 5 amon array takle amra ki korbo minimum ber korar jonno 3 min then 2 min then 2 min amon


*/
//#all cyclic string sorting
/* compair sort korbo */

//#Extended cyclic shift 
/* akta string s ar koyta sub array ss string ar cyclic shift ar soman? hash kore array cinta korbo
*/

//#Hashing merging
/*
h1+(h1^length1) = new hash = new,length = (l1+l2);

*/

//#reverse Hashing
/*akta string ar 2 ta substr akta onnotar reversee kina dakha lagbe 

hs1 hibe s ar and hs2 hobe s re reverse kore then 2 ta check kore dakhlye hobe.
*/

//#NUmber of Palindromic substring
/*koyta substring ache jara palindrom
n = 1000 hole
hs == revese_hs hole seta palindrom ,ata O(n*n);
ata dp solve amon--> i and j soman kina and f(i+1,j-1) true kina amne O(n*n) a kora jay

n = 1e5 hole trick use kore nlog(n) a possible
odd length palindrrom dakhara jonno akta kpoint nia i+1 and j-1 a  ar dike binary search korlye hoy
even lenth ar jonno 2 ta nia kore felle e hoy

*/

//3odd length palindrom

//palindromic query
/*reverse hash kore felty pari
update thakte pare
update korte hole segment tree dia kore fela jay.
*/


//# Gp_hash_table
/*  ***unordered_map kokhono use korbona --> hashing nia kaj kore -->onek somoy O(n)
hoia jay.unordered_map use na kore ***gp_hash_table<int, int> mp use kora jay
unordered_map ar moto kaj kore.*/

//# hashing over array 
/*array hash kora jay*/
//# hash and Dp
/*akta string s deoa ache ara akta dictionary dioa ache 

s re koy vabe dictionary use kore banano jay
0 theke 1 ache kina then baki ta ar compare korbo hashing dia O(n^2) a hobe
*/

int main() {
    Muku28();
    int test=1;
    cin>>test;
    for(int i=1;i<=test;i++) {
        solve(i);
    }
    return 0;
}

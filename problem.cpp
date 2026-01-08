
//Problem - 
#include<bits/stdc++.h>
using namespace std;typedef long long ll;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
void dbg(int x) {cout << "x is " << x << endl; }
typedef vector<ll> vi;typedef vector<string> vs;typedef pair<ll, ll> pii;
#define cinv(v,n) for(int i=0;i<n;i++){int a;cin>>a;v.push_back(a);}
#define cin(a,n) for(int i=0;i<n;i++){cin>>a[i];}
#define all(x) x.begin(), x.end()
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define nl cout<<"\n";
ll mod = 1e9 + 7;

//Muku28

//#ll is 2 time slower then int

//### problem - Just solve it 1 - E
//problem a onek gula bpr ber korte bolche akta n array ,1e6 ,spf,gpf,t-prime,unique-prime,divisor,divisor sum 
int x = 1e6+1;
int spf[1000009];
int divisor[1000009];
ll divisor_sum[1000009];
int Rehan(){
    int n;//<=1e6
    cin>>n;
    int a[n];//a[i]<=1e6
    cin(a,n);//array input nichi
    for (int i = 2; i <=x;i++){
        spf[i] = i;
    }
    for (int i = 2; i<= x;i++){//i*i calale divisor gula paoa jabena karon
//100 ar jonno vable 10 porjonto pabo but 50,20 arao divisor 
        for (int j = i; j <= x;j=j+i){
            spf[j] = min(i, spf[j]);
            divisor[j]++;
            divisor_sum[j] += (ll)i;
        }
    }

    for (int k = 0; k < n;k++){
        int y = a[k];
        int p = y;
        int cpf = 0;
        int gpf = 0;
        int unique_p = 0;
        while (y>1){
            gpf = max(spf[y], gpf);
            int pp = spf[y];
            unique_p++;
            while (y%pp==0){
                 cpf++;
                y /= pp;
            }
        }
        cout << spf[p] << " ";
        cout << gpf << " ";
        cout << unique_p<< " ";
        cout << cpf << " ";
        cout << divisor[p]+1 << " ";
        cout << divisor_sum[p]+1 << "\n";
    }
    return 0;
}
// youKnowWho ar sol
/*ata more efficient akhane mathmatical solution dice
divisor gula pormula dia korche 
---> number of divisor = if(p^e,p1^e2) then ((e+1)*(e2+1))....
---> sum of divisor ar formula for per priem factor is = ((p^e+1)-1)/p-1
// ata holo onek gula power ar sum
*/
int x = 1e6+8; 
int spf[1000009];
bool f[1000009];
int Rehan(){
    int n;//<=1e6
    cin>>n;
    int a[n];//a[i]<=1e6
    cin(a,n);//array input nichi
    for (int i = 2; i <=x;i++){
        spf[i] = i;
    }
    for (int i = 2; i*i <= x;i++){
        if(!f[i]){
            for (int j = i*i; j <= x;j=j+i){
                spf[j] = min(i, spf[j]);
                f[i] = true;
            }
        }
    }
    for (int k = 0; k < n;k++){
        int y = a[k];
        int p = y;
        int cpf = 0;
        int gpf = 0;
        int unique_p = 0;
        int divisor = 1;
        ll divisor_sum = 1;
        while (y>1){   
            gpf = max(spf[y], gpf);
            int pp = spf[y];
            unique_p++;
            int factor_power = 1;
            int factor_mul = 1;
            while (y%pp==0){
                 cpf++;
                 factor_power++;
                 factor_mul *= pp;
                 y /= pp;
            }
            divisor *= factor_power;
            divisor_sum *= (((ll)factor_mul * pp)-1) / (pp - 1);
        }
        cout << spf[p] << " ";
        cout << gpf << " ";
        cout << unique_p<< " ";
        cout << cpf << " ";
        cout << divisor << " ";
        cout << divisor_sum << "\n";
    }
    return 0;
}

//## H - T-primes
// 2 ta divisor re prime bole and here 3 ta divisor k t-prime bolteche 
// number ta t-prime kina bola lagbe
// sqrt kina and sqrt ta prime kina
// Easy

//## F - Just Solve It! (3)
/* Given an array of n integers. Print the values of di (1≤i≤106) where di
 denotes the count of numbers divisible by i in the array.--
solve onek easy just problem statement ta thik thak moto pora lalgbe.*/
 

//## V - Count the factors
/*just find unique prime factor atao 2 vabe kora jay
for (int i = 2; i <= n;i++){-----jodi l2 kori then i*i korlye hoy but emny korlye uniq gula ber hoia jay*/
        if(!f[i]){
            for (int j = i; j <= n;j+=i){
                spf[j]++;//akhane unique gula count korteche
                f[j] = true;
            }
        }
    }
        // cin>>t;
        while (1){
            int a;
            cin >> a;
            if(a==0){
                break;
            }
            // int x = a;//l--22 
            // int c = 0;
            // while (x>1){
            //     c++;
            //     int p = spf[x];
            //     while (x%p==0){
            //         x /= p;
            //     }  
            // }
            cout << a << " : " << spf[a] << "\n";
        }

//### P - Trailing Zeroes (I)
/* all number ar divisor gula print kora lagbe normally sieve dia korle hobe na 
karon n<=10^12 jar jonno formula dia ber korbo using spf*/
const int x = 1e6 + 9;
int p[x + 1];
vector<int> v;
int main(){
    Muku28();
    int t = 1;
    for (int i = 2; i <= x;i++){
        if(p[i]==0){
            v.push_back(i);
            for (int j = i+i; j <= x; j += i){
                p[j] = 1;
            }
        }
    }
    cin >> t;
    for (int k = 0; k < t;k++){
        ll a;
        cin >> a;
        int divisor = 1;
        for (int i = 0; i < v.size();i++){
            if(1LL*v[i]*v[i]>a)break;
            int power = 0;
            while (a%v[i]==0)
            {
                power++;
                a /= v[i];
            }
            //dbg(power);
            divisor *= (power + 1);
        }
        if(a>1)
            //prime cole aste pare 
            //ager gulay lage nai karon while(n>1) claichi
            divisor *= 2;//because this number is a prime that why 1+1
        cout << "Case " << k + 1 << ": " << divisor-1 << "\n";//one divisor akhane hobena,q a cay nai
    }
    return 0;
 }
//ai solve ta

//### U - Twin Primes
/*2 ta prime ar moddy gap 2 thakle tare twin prime bole
while(cin>>n) pailam notun*/
const int N = 2e7 + 9;
bitset<N> is_prime;
void Best_sieve() {
  is_prime[1] = false;
  for (int i = 2; i < N; i++) {
    is_prime[i] = true;
  }
  for (int i = 2; i * i < N; i++) {
    if (is_prime[i]) {
      for (int j = i + i; j < N; j += i) {
        is_prime[j] = false;
      }
    }
  }
}
//best seive use korchi

//### X - Divisor Summation
/* divisor sum n bade formula dia korchi*/
			int p = spf[n];
            int prime_power = 1;
            while (n%p==0){
                prime_power *= p;
                n /= p;
            }
            divisor_sum *= ((1LL * prime_power * p) - 1) / (p - 1);

///### O - Chef and Tuples
	/* valo problem ata x,y,z dia n banano lagbe a,b,c ar choto hote hobe all possibl*/
		int t = 1;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a, b, c;
        cin >> a >> b >> c;
        ll ans = 0;
// ami n ar all divisor ber korchi then oi divisor gula n dia bad dia 2 side a sqrt root kore sekhan dia y,z ber korchi aro clear think kora dorkar 
        // for (ll i = 1; i * i <= n;i++){
        //     if(i>a)break;
        //     if(n%i==0){
        //         ll x = n/i;
        //         for (ll j = 1; j * j <= x;j++){
        //             if(x%j==0){
        //                 ll sec = j;
        //                 ll last = x / j;
        //                 if(sec<=b and last<=c){
        //                     ans++;
        //                 }
        //                 if(last<=b and sec<=c){
        //                     if(last==sec){
        //                         ans--;
        //                     }
        //                     ans++;
        //                 }
        //             }
        //         }
        //         if(i*i!=n){
        //             x = i;
        //             //cout << " " << x << "\n";
        //             if((n/i)<=a){
        //                 for (ll j = 1; j * j <= x;j++){
        //                     if(x%j==0){
        //                         ll sec = j;
        //                         ll last = x / j;
        //                         if(sec<=b and last<=c){
        //                             ans++;
        //                         }
        //                         if(last<=b and sec<=c){
        //                             if(last==sec){
        //                                 ans--;
        //                             }
        //                             ans++;
        //                         }
        //                     }
        //                 }
        //             }
        //         }
        //     }
        // }
// oder sol easyly korche all divisor ber kore 2 ta loop calaiche x,y ar joonno z emnitye ber hoia jabe
        vector<int> divisor;
        for (int i = 1; i * i <= n;i++){
            if(n%i==0){
                divisor.push_back(i);
                if(i*i!=n){
                    divisor.push_back(n / i);
                }
            }
        }
        for (auto x:divisor){
            for(auto y : divisor){
                if(n % (1LL*x*y)==0){
                    int z = n / (x * y);
                    if(x<=a and y<=b and z<=c){
                        ans++;
                    }
                }
            }
        }
            cout << ans << "\n";
    }
//### L - Primal Fear
/* seive and basic precalculation korlye hobe*/

//## J - Optimized Sieve
// just best_seive korlye cole .q valo kore pora dorkar.segmentation khaitechilam
const int N = 1e8;
bitset<N> is_prime;
void Best_sieve() {
  is_prime[1] = false;
  for (int i = 2; i <N; i++) {
    is_prime[i] = true;
  }
  for (int i = 2; i * i < N; i++) {
    if (is_prime[i]) {
      for (int j = i + i; j < N; j += i) {
        is_prime[j] = false;
      }
    }
  }
  
}

//## A - GCD and LCM
/*just gccd lcm dia kora jay but gcd funtion nije kore korbo*/
int gcd(int a,int b){
   if(a==0) return b;
	 if(b==0) return a;
	if(a>b) 
		swap(a,b)
  return gcd(a%b,b)
}

//## D - Common Divisors 
/* kono akta arrate common divisor mane array ar gcd ar number of divisor*/
int Common_Divisors(){
    ll n;
    cin>>n;
    ll a[n];
    cin(a,n);
    ll gc = a[0];
    for (int i = 0; i < n;i++){
        gc = __gcd(a[i], gc);
    }
    int number_of_divisor = 0; //jodi nicer ta use kori then 0 nibo

    // TLE astechilo karon gc ami int nitechilam ota overflow hoitechilo
    // then AC
//    //cout << gc << "\n";
//     int x = 2;
//     while (gc>1){
//         int power = 0;
//         ll spf = gc;
//         for (int i = x; 1LL*i*i <= gc;i++){
//             if(gc%i==0){
//                 spf = i;
//                 x = i;
//                 break;
//             }
//         }
//         while(gc%spf==0){
//             power++;
//             gc /= spf;
//         }
//         number_of_divisor *= (power + 1);
  //  }
    for (int i = 1; 1LL * i * i <= gc;i++){
        if(gc%i==0){
            number_of_divisor++;
            if(i*i!=gc){
                number_of_divisor++;
            }
        }
    }
    cout << number_of_divisor << "\n";
    return 0;
}

//## K - Just Solve It! (4)
/* akta range ar modde (l,r) n and m ar multiple koyta ache
lcm = (n/gc)*m; ata overflow komay

akhon n ar m ar multiple bolte lcm(n,m) ar multiple just (r)/lcm - (l-1)/lcm korlye hoy.
But n,m<=10^18 lcm ber korar somoy overfloww hoite pare , ar r amader 10^18 ar kom
lcm r ar basi hoile emnitye count hobe na, so (n/gcd)>(r/m) hoile ans nai kono
*/

//# G - Bachgold Problem 
/* Easy problem akta number re maximum koyta prime ar sum akare present kora jay
Hint : even - odd
*/


// ## T - Goldbach's Conjecture
/*akta conjecture -> 2 ar upore sob even number rye 2 ta prime ar sum akare represent kora
jay
just check then pair -- O(log(n))
L - simple cinta kora uchid 
*/


# Digital root
The digital root or digital sum of a non-negative integer is the 
single-digit value obtained by an iterative process of summing digits,
on each iteration using the result from the previous iteration to compute 
the digit sum. 
The process continues until a single-digit number is reached.
The digital root of a number is equal to the remainder when that number is 
divided by 9. If the remainder is 0 and the number is greater than 0, then the 
digital root is 9. If the number is 0, then the digital root of the number is 0.

For example, the digital root of the number 12,345 is 6 
because 1 + 2 + 3 + 4 + 5 equals 15 and then 1 + 5 equals 6.

formula = (k-1)*9 + x;
//--------------28--------------//
int main(){
    Muku28();
    int t = 1;
    cin>>t;
    while(t--){
        Rehan();
    }
		return 0;
 }

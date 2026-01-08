//Date 24/03/2023
##Usaco -->
1)average ar somoy!
(sum/n)==number; jodi sum/n fraction thake ans wrong dibe,ar jonno ulta use kora jy!
sum == number*n;
#Bronz-->
--Bubble sort

for (int i = 0; i < n; i++) {  
    for (int j = 0; j < n - 1; j++) {
        if (a[j] > a[j + 1]) {
            swap(a[j], a[j + 1])
        }
    }
}
-->tuple
vector<tuple<int,int,int>> v;
make_tuple(2,1,4)


-->sorting
bool comp(string a, string b) {
if (a.size() != b.size()) return a.size() < b.size();
return a < b;
}
 sort(v.begin(), v.end(), comp);
the following comparison function comp sorts
strings primarily by length and secondarily by alphabetical order:


1)set.count() many koyta uniq set acy!


#CF-->
priority_queue ar push pop time --> O(log(n));
next_permutation(a.begin(), a.end())
next_permutation(a,a+n) --> generate permuntation!
full line -->  getline(cin, s);
//modulo korar somy n<0 hole n%mod na dia (== n%mod then n+mod() hobe)

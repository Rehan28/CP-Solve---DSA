#Pigenhole Priciple
// onek ta amon j box ar basi element thakle must kono akta box a 2+ element thakbe 
// ata sure kore bola jay problem a ata use kora jay

# Coordinate Compression
//jokhon number matter na kore sudu order matter kore tokhon ata use kora jay

set<int> se;
for (auto x: a) se.insert(x);
map<int, int> mp;
int id = 0;
for (auto x: se) {
    mp[x] = ++id;
}
for (int i = 0; i < a.size(); i++) {
    a[i] = mp[a[i]];
    cout << a[i] << ' ';
}
// aro akta way ache same e just vector dia kora hoiteche
//1.08 min important 

#Different Array
// ata hocche j akta array ar modde different di = a[i] - a[i-1];
// l and r a change korle amra l a +x and r+1 = -x
//taile different array thik thake after apply l and r.

int32_t main() {
  int n, q; cin >> n >> q;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];//main array
  }
  while (q--) {
    int l, r, x; cin >> l >> r >> x;
    d[l] += x;//different array
    d[r + 1] -= x;
  }
  for (int i = 1; i <= n; i++) {
    ans[i] = ans[i - 1] + d[i];
    cout << ans[i] + a[i] << ' ';
  }
  return 0;
}


#Longest Arithmetic Progression.
//continues progression just check different array where d same
//problem akta array te l and r a akta arithmatic prograssinon add koro
// where d deoa thakbe amra just l = same rakhbo l+1 theke d d add kore jabo
// andr+1 = a (r-l) *d - korbo

//problem : 
/*Given n <= 1e5 empty sets and q <=1e5 updates of type (l,r,x): insert 
x to all sets from l to r. Find the sizes of all sets after all updates.*/
void solve(int test) {
    int n,q;
    cin >> n >> q;
    vector<int> add[n+3];
    vector<int> rem[n+3];
    while(q--){
        int l, r, x;
        cin >> l >> r >> x;
        add[l].push_back(x);
        rem[r + 1].push_back(x);
    }
    int unique = 0;
    map<int, int> mp;
    for (int i = 1; i <= n;i++){
        for (auto x:add[i]){
            mp[x]++;
            if(mp[x]==1){
                unique++;
            }
        }
        for(auto x:rem[i]){
            mp[x]--;
            if(mp[x]==0){
                unique--;
            }
        }
        cout << unique << "\n";
    }
}

#Direction Array
dx[] = {1, 0, -1, 0};
dy[] = {0, 1, 0, -1};

# constractive algorithm
// constract anything 
// THink normal and smallest and largest number nia kaj korbo
/*Try to make observations and cheat.
Try to think outside the box.
The solution will always more likely be tricky, so don't try complicated stuff. 
For example, this.
Think easy.
Think from a different angle.
Try with the smallest or the largest. For example, this, this, this and this 
problem.
Similarly try with 1, 2, 3, n - 2, n - 1, or n in any 
constructive problem. Check if you can fit them correctly. For example, 
this and this problem.
Learn more tricks by solving more problems! Get stuck, think, learn, repeat.*/

#Greedy Algorithm
// Always make the locally optimal choice at each stage with the hope of finding a global optimum.
--> Exchange Argument

#Fractional Knapsack
// ata hocche greedy algorithm er ekta example
// ata hocche jodi amra kono item ar fraction nia kaj korte pari tahole amra ata use korte pari\
// ata use kora jay jokhon amra kono item ar fraction nia kaj korte pari
full na nia half nite pari.

#minimal coverage
// ata hocche greedy algorithm er ekta example
// ata hocche jodi amra kono range ar modde kono range add korte pari tahole amra ata use korte pari


#Backtracking
// ata hocche ekta algorithm jeta brute force er ekta type
// Subset generation using bit manipulation
void generateSubsets(vector<int>& nums) {
    int n = nums.size();
    vector<vector<int>> subsets;
    for (int i = 0; i < (1 << n); i++) {
        vector<int> subset;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                subset.push_back(nums[j]);
            }
        }
        subsets.push_back(subset);
    }
    for (const auto& subset : subsets) {
        for (int num : subset) {
            cout << num << ' ';
        }
        cout << '\n';
    }
}
//N-Queen


#include <bits/stdc++.h>
using namespace std;
void Muku28(){ios_base::sync_with_stdio(false);cin.tie(NULL);}
#define cin(a,n) for(int i=0;i<n;i++){ cin>>a[i];}
#define nl "\n"
#define dbg(x) cout<<#x<<" = "<<x<<nl;
#define int long long

Bubble sort is a sorting algorithm that compares two adjacent elements and swaps them until they are in 
the intended order.

Just like the movement of air bubbles in the water that rise up to the surface, each 
element of the array move to the end in each iteration. Therefore, it is called a bubble sort.

optimized bubble sort
use a flag for is array sorted or not
*/
#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int swaps = 0;
  for (int step = 1; step <= n - 1; step++) {
    for (int i = 1; i < n; i++) {
      if (a[i] > a[i + 1]) {
        swap(a[i], a[i + 1]);
        ++swaps;
      }
    }
  }
  cout << "Array is sorted in " << swaps << " swaps.\n";
  cout << "First Element: " << a[1] << '\n';
  cout << "Last Element: " << a[n] << '\n';
  return 0;
}
(n-1) + (n-2) + (n-3) +.....+ 1 = n(n-1)/2=n*n
best case O(n)

Why space complexity O(1)?
No matter if the array has:

10 elements

10 million elements

👉 extra memory used does not grow with n.
Space complexity measures extra space used by the algorithm


## Selection Sort Algorithm

Selection sort is a sorting algorithm that selects the smallest element from an unsorted 
list in each iteration and places that element at the beginning of the unsorted list.

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  int swaps = 0;
  for (int i = 1; i <= n; i++) {
    int min_index = i;
    for (int j = i + 1; j <= n; j++) {
      if (a[j] < a[min_index]) {
        min_index = j;
      }
    }
    if (i != min_index) {
      swap(a[i], a[min_index]);
      ++swaps;
    }
  }
  for (int i = 1; i <= n; i++) {
    if (i > 1) cout << ' ';
    cout << a[i];
  }
  cout << '\n';
  cout << swaps << '\n';
  return 0;
}
// https://vjudge.net/problem/Aizu-ALDS1_2_B
best case O(n^2)
worst case O(n^2)
_SPACE COMPLEXITY O(1)_

## Insertion Sort Algorithm
Insertion sort is a sorting algorithm that places an unsorted element at its suitable place in each iteration.

Insertion sort works similarly as we sort cards in our hand in a card game.

We assume that the first card is already sorted then, we select an unsorted card. 
If the unsorted card is greater than the card in hand, it is placed on the right otherwise, 
to the left. 
In the same way, other unsorted cards are taken and put in their right place.

add new card on 

#include<bits/stdc++.h>
using namespace std;

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  int a[n + 1];
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++) {
    int pre = i - 1;
    int curr = a[i];
    while (pre >= 1 and a[pre] > curr) {
      a[pre + 1] = a[pre];
      pre--;
    }
    a[pre + 1] = curr;
  }
  for (int i = 1; i <= n; i++) {
    cout << a[i] << ' ';
  }
  cout << '\n';
  return 0;
}

Best	O(n)
Worst	O(n2)
Space Complexity	O(1)


## Merge Sort Algorithm
Merge Sort is one of the most popular sorting algorithms that is based on the principle of 
Divide and Conquer Algorithm.

Here, a problem is divided into multiple sub-problems. Each sub-problem is solved individually. Finally, 
sub-problems are combined to form the final solution.

pass by reference
let i = 5;
let j = ++i;
// At this point:
// i is 6 (i was incremented first)
// j is 6 (the new value of i was used)

















#include<bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> &l, vector<int> &r) {
  int n = l.size(), m = r.size();
  vector<int> ans;
  int i = 0, j = 0;
  while (i < n && j < m) {
    if (l[i] < r[j]) ans.push_back(l[i++]);
    else ans.push_back(r[j++]);
  }
  while (i < n) ans.push_back(l[i++]);
  while (j < m) ans.push_back(r[j++]);
  return ans;
}
vector<int> a;
vector<int> merge_sort(int l, int r) {
  if (l == r) return {a[l]};
  int mid = l + r >> 1;
  vector<int> left = merge_sort(l, mid);
  vector<int> right = merge_sort(mid + 1, r);
  return merge(left, right);
}

int32_t main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  int n; cin >> n;
  a.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> ans = merge_sort(0, n - 1);
  for (int i = 0; i < n; i++) {
    cout << ans[i] << ' ';
  }
  return 0;
}
// https://vjudge.net/problem/Gym-324997D


Best	O(n*log n)
Worst	O(n*log n)
Space Complexity	O(n)
An Inversion Count finds pairs of elements (arr[i], arr[j]) in an array where i < j but 
arr[i] > arr[j],indicating how unsorted an array is, 
Binary Indexed Trees and Merge Sort are two efficient algorithms to count inversions in O(n log n) time.
for merge sort just when add two sorted array then count inversions






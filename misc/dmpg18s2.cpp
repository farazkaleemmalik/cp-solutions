//begintemplate S
#pragma GCC optimize("Ofast")
#include <bits/stdc++.h>

// From https://dmoj.ca/tips/
#define scan(x) do{while((x=getchar())<'0'); for(x-='0'; '0'<=(_=getchar()); x=(x<<3)+(x<<1)+_-'0');}while(0)
char _;

#define loop(i, n) for(int i = 0; i < n; i++)
#define loopfrom(r, i, n) for(int i = r; i < n; i++)
#define printarr(arr) for (auto i : arr) { cout << i << " ";} cout << "\n";
#define printarrn(arr, n) loop(i, n) { cout << arr[i] << " ";} cout << "\n";
#define nl cout << "\n";
#define ll long long
#define ull unsigned long long
#define INF(type) numeric_limits<type>::max()

using namespace std;
deque<int> nums;
stack<ll> out;

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL);

    int n, temp;
    ll total = 0, sum;
    cin >> n;

    int mid = n/2;
    loop(i, n) {
      cin >> temp;
      nums.push_back(temp);
      total += temp;
    }

    if (!(n % 2)) {
      mid--;;
    }

    //printarr(nums);

    cout << total; nl;
    out.push(total);
    sum = total;
    loop(i, mid) {
      sum -= nums.front() + nums.back();
      //cout << sum << " : " << nums.front() + nums.back(); nl;
      nums.pop_back();
      nums.pop_front();
      total += sum;
      cout << total; nl;
      out.push(total);
    }

    if (n % 2) {
      out.pop();
    }
    while (out.size()) {
      cout << out.top(); nl;
      out.pop();
    }


    
    return 0;
}
//endtemplate S
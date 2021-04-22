
#pragma GCC optimize("Ofast")

#include <bits/stdc++.h>
#include <vector>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>


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

float arr[100], mid[100];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    loop(i, n) {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    //printarrn(arr, n);
    loop(i, n) {
        if (i > 0) {
            mid[i] = (arr[i]+arr[i-1])/2;
        }
    }


    //printarrn(mid, n);
    float m = INF(float);

    loopfrom(1, i, n) {
        if (i > 1) {
            m = min(m, abs(mid[i]-mid[i-1]));
            //cout << abs(mid[i]-mid[i-1]); nl;
        }
    }

    cout << fixed << setprecision(1) << m; nl;


    return 0;
}

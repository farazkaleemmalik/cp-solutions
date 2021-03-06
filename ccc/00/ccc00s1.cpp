
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

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a, b, c, n, t = 0;

    cin >> n >> a >> b >> c;

    while (n > 0) {
        t++;
        n--;
        a++;
        a %= 35;
        if (a == 0) {
            n += 30;
        }
        if (n <= 0) {
            break;
        }
        t++;
        n--;
        b++;
        b %= 100;
        if (b == 0) {
            n += 60;
        }
        if (n <= 0) {
            break;
        }
        t++;
        n--;
        c++;
        c %= 10;
        if (c == 0) {
            n += 9;
        }
    }

    cout << "Martha plays " << t << " times before going broke."; nl;

    return 0;
}

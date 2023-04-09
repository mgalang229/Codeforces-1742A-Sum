#include <bits/stdc++.h>
using namespace std;

void test_case(int& tc) {
    int a[3];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    cout << (a[0] + a[1] == a[2] ? "YES" : "NO") << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int T = 1;
    cin >> T;
    for (int tc = 1; tc <= T; tc++) {
        test_case(tc);
    }
}

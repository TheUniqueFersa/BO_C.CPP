#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, x_1, x_2, x_3, problems=0;
    cin >> n;
    for(int i=0; i<n; i++){
        cin >> x_1;
        cin >> x_2;
        cin >> x_3;
        if((x_1 && x_2)||(x_2 && x_3)||(x_1 && x_3))
            problems++;
    }
    cout << problems << '\n';
}

int main() {
    fastIo();
    solve();
    return 0;
}
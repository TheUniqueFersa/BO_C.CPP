#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
#define endl '\n'
#define fi first
#define se second
#define ll long long

void fastIO()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}


void build(int n, ll arr[], ll tree[]) {
    for (int i = 0; i < n; i++) tree[n + i] = arr[i];
    for (int i = n - 1; i > 0; --i) tree[i] = tree[2 * i] + tree[2 * i + 1];
}
ll sum(int a, int b, ll tree[], int n) {
    a += n; b += n;
    ll s = 0;
    while (a <= b) {
        if (a%2 == 1) s += tree [a++];
        if (b%2 == 0) s += tree [b--];
        a /= 2; b /= 2;
    }
    return s;
}

void update(int pos, int n, ll tree[]) {
    pos += n;
    if(tree[pos] != 0) {
        tree[pos] = tree[pos] - 1;
    }
    for (pos /= 2; pos >= 1; pos /= 2) {
        tree[pos] = tree[2*pos]+tree[2*pos+1];
    }
}

void solve() {
    int n, t;
    cin >> n >> t;

    ll arr[n];
    ll tree[2 * n];
    arr[0] = 1;
    for (int i = 1; i < n; i++) {
        arr[i] = 1;
    }
    build(n, arr, tree);
    //imprimir arreglo
    // for (int i = 0; i < 2*n; i++) {
    //     cout << tree[i] << ' ';
    // }
    char c; int a,b;
    for (int i = 0; i < t; i++) {
        cin >> c;
        if(c == 'R'){
            cin >> a;
            update(a-1, n, tree);
        } else {
            cin >> a >> b;
            cout << sum(a-1, b-1, tree, n) << '\n';
        }
        
    }    

}

int main() {
    solve();
}
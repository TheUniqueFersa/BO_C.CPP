#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

void solve() {
    int n, k, q, i;
    cin >> n;
    cin >> k;
    cin >> q;
    int a[k+1], b[k+1], queries[q];
    a[0] = 0;
    b[0] = 0;
    for(i =1; i<k+1;i++){
        cin >> a[i];
    }
    for(i =1; i<k+1;i++){
        cin >> b[i];
    }
    for(i = 0; i<q; i++){
        cin >> queries[i];
    }
    double d, t;
    int j=1;
    double div;
    for(int o= 0; o<q; o++){
        i = 0;  j = 1;
        while(queries[o] > a[j]){
            i++;
            j++;
        }

        d = a[j] - a[j-1];
        t= b[j] - b[j-1];
        
        div = d/t;
        // cout << "AAAAAAAAAAAAA" << div <<'\n';
        // cout <<"Iteración: " << j << "Quer:" << queries[o] << " " << d << " " << t << " " << a[j-1] << "," <<b[j-1] << '\n';
        // cout << " " << (double(queries[o]-a[j-1]) / div) + double(b[j-1]);
        div = (((double(queries[o]-a[j-1]) / div))) + double(b[j-1]);
        // cout << div << '\t';
        // cout << "\nResultado" << int(floor(div)) << ' ';
        cout << int(floor(div)) << ' ';

    }
    cout << "\n";
}

int main() {
    fastIo();
    int t = 1;
    cin >> t;
    for(int i = 0; i < t; i++) solve();
}
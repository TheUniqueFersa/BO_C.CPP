#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

typedef vector<int> List;

void bubble_sort(List &list){
    int n = list.size();
    for(int i = n; i>1; i--){
        for(int j=0; j<i-1; j++){
            if(list[j]>list[j+1]){
                swap(list[j], list[j+1]);
            }
        }
    }
}
void printList(List &l){
    for(auto each : l){
        cout << each << ", " ;
    }
    cout << '\n';
}

int main() {
    fastIo();
    List a = {5,2,4,6,1,3};
    cout << "Original: \n";
    printList(a);
    bubble_sort(a);
    cout << "Sorted: \n";
    printList(a);
    return 0;
}
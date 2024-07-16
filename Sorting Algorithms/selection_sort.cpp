#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;

typedef vector<int> List;

void selection_sort(List &list){
    int n = size(list);
    for(int i = 0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(list[j] < list[min])
                min = j;
        }
        swap(list[i], list[min]);
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
    int i, j;
    List a = {5,2,4,6,1,3};
    cout << "Original: \n";
    printList(a);
    selection_sort(a);
    cout << "Sorted: \n";
    printList(a);
    return 0;
}
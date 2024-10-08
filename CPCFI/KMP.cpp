#include <bits/stdc++.h>
#define ll long long
#define fastIo() ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
using namespace std;
//char T[MAX_N], P[MAX_N]; // T = text, P = pattern
string T = "I DO NOT LIKE SEVENTY SEV BUT SEVENTY SEVENTY SEVEN";
string P = "SEVENTY SEVEN";
int b[50], n = T.size(), m = P.size(); // b = back table, n = length of T, m = length of P

void kmpPreprocess() { // call this before calling kmpSearch()
    int i = 0, j = -1; b[0] = -1; // starting values
    while (i < m) { // pre-process the pattern string P
        while (j >= 0 && P[i] != P[j]) j = b[j]; // if different, reset j using b
        i++; j++; // if same, advance both pointers
        b[i] = j; // observe i = 8, 9, 10, 11, 12 with j = 0, 1, 2, 3, 4
    } 
} // in the example of P = "SEVENTY SEVEN" above
void kmpSearch() { // this is similar as kmpPreprocess(), but on string T
    int i = 0, j = 0; // starting values
    while (i < n) { // search through string T
        while (j >= 0 && T[i] != P[j]) j = b[j]; // if different, reset j using b
        i++; j++; // if same, advance both pointers
        if (j == m) { // a match found when j == m
            printf("P is found at index %d in T\n", i - j);
            j = b[j]; // prepare j for the next possible match
        }
    }
    
}
int main(){
    kmpPreprocess();
    kmpSearch();
}
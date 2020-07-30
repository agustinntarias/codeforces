#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    string s;
    cin >> s;
    if (count_if(s.begin(), s.end(), [](char c){return isupper(c);}) > s.size()/2)
        for (auto &x:s) putchar (toupper(x));
    else
        for (auto &x:s) putchar (tolower(x));
    printf("\n");
}

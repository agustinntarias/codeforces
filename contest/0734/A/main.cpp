#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    int n;
    scanf("%d", &n);
    string s;
    cin >> s;
    int a = count_if(s.begin(), s.end(), [](char c){return c == 'A';});
    if (a < n-a) printf("Danik\n");
    else if (a > n-a) printf("Anton\n");
    else printf("Friendship\n");
}

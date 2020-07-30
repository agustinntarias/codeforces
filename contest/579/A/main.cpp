#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    int x;
    scanf("%d", &x);
    int n = -1;
    while ((1<<(++n)) <= x) DBG(n);
    printf("%d\n", n);
}

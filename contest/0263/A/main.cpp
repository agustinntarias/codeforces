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
    for(int c = 0; c < 25; c++) {
        scanf("%d", &x);
        if (x)
        printf("%d\n", abs(c/5-2) + abs(c%5-2));
    }
}

#include <bits/stdc++.h>
using namespace std;

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    int n = 0;
    while(a*pow(3, n) <= b*pow(2, n)) n++;
    printf("%d\n", n);
}

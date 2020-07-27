#include <bits/stdc++.h>
using namespace std;
#define forn(x, n) for(int x = 0; x < n; x++)
#define DEBUG 0 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    int n, a1;
    scanf("%d%d", &n, &a1);
    vector<int> parties = {1};
    int total_seats = a1, a_parties = a1;
    forn(x, n-1) {
        int a;
        scanf("%d", &a);
        DBG(a);
        if (2*a <= a1) {parties.push_back(x+2); a_parties += a;}
        total_seats += a;
    }
    DBG(total_seats); DBG(a_parties);
    if (total_seats/2 < a_parties) {
        printf("%d\n", (int) parties.size());
        for(auto x: parties) printf("%d ", x);
    } else printf("%d", 0);
    printf("\n");
}

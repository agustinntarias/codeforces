#include <bits/stdc++.h>
using namespace std;

#define forn(x, n, bol) for(int x = 0; x < n && bol; x++)

#define DEBUG 1 // change this to 0 to disable DEBUG mode
#if DEBUG == 1
#define DBG(x) do {cerr << #x << ": " << x << endl; } while (0)
#else
#define DBG(x)
#endif


int main() {
    int n;
    scanf("%d", &n);
    int A[n][n];
    forn(i, n, true) forn(j, n, true)
    {
        int a;
        scanf("%d", &a);
        A[i][j] = a;
    }
    bool good_lab = true;
    forn(x, n, good_lab) forn(y, n, good_lab)
    {
        bool found_one = false;
        if (A[x][y] != 1) {
            forn(s, n, !found_one) forn(t, n, !found_one)
            {
                if (A[x][s] + A[t][y] == A[x][y]) found_one = true;
            }
        if (!found_one) {
            printf("No\n");
            good_lab = false;
        }
        }
    }
    if (good_lab) printf("Yes\n");

}

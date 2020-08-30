#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define forn(x, n, b) for(int x = 0; x < n && b; x++)
/*Rectangle of color "c":
    v0----v1
    |      |
    |      |
    |      |
    v2-----x
*/

int main() {
    int n, m;
    char c;
    scanf("%d%d %c", &n, &m, &c);
    char A[n][m];
    // read vector
    forn(i, n, 1){
        string s; cin >> s;
        forn(j, m, 1) A[i][j] = s[j];
    }
    pair<int, int> vertices[3];
    int in_rec = 0;
    // find v0 and v1:
    forn(i, n, in_rec != -1) forn(j, m, in_rec != -1) {
        if (A[i][j] == c && !in_rec) {
            vertices[0] = make_pair(i, j);
            in_rec = 1;
        }
        if (in_rec && (j == m-1 || A[i][j] != c)){
            if (j == m-1) vertices[1] = make_pair(i, j);
            else vertices[1] = make_pair(i, j-1);
            in_rec = -1;
        }
    }
    // find v2
    int k = vertices[0].ff;
    while (k<n && A[k][vertices[0].ss] == c) k++;
    vertices[2] = make_pair(k-1, vertices[0].ss);
    set<char> colors;
    // go up -
    for(int i = vertices[0].ss; vertices[0].ff-1 >= 0 && i <= vertices[1].ss ; i++) {
        char color = A[vertices[0].ff-1][i];
        if (color != '.') colors.insert(color);
    }
    // go down _
    for(int i = vertices[0].ss; vertices[2].ff+1 < n && i <= vertices[1].ss ; i++){
        char color = A[vertices[2].ff+1][i];
        if (color != '.') colors.insert(color);
    }
    // go left |x
    for(int i = vertices[0].ff; vertices[0].ss-1 >= 0 && i <= vertices[2].ff ; i++){
        char color = A[i][vertices[0].ss-1];
        if (color != '.') colors.insert(color);
    }
    // go right x|
    for(int i = vertices[0].ff; vertices[1].ss+1 < m && i <= vertices[2].ff ; i++) {
        char color = A[i][vertices[1].ss+1];
        if (color != '.') colors.insert(color);
    }

    printf("%d\n", (int) colors.size());
}

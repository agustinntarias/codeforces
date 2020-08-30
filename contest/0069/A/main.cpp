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
	int fx=0, fy=0, fz=0;

	while(n--){
		int x,y,z;
		scanf("%d%d%d", &x, &y, &z);
		fx+=x;
		fy+=y;
		fz+=z;
	}
	if(fx==0 && fy==0 && fz==0) printf("YES\n");
	else printf("NO\n");
}

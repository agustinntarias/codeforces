#include <iostream>
using namespace std;

void reverse_reordering(int s[], int n) {
    int a[n] = {};
    for (int i = 1; i < (n+1)/2; i += 2) {
        a[i] = s[i];
        a[n-1-i] = s[n-1-i];
    }
    for (int i = 0; i < (n+1)/2; i += 2) {
        a[n-1-i] = s[i];
        a[i] = s[n-1-i];
    }
    for (int x: a) cout << x << " ";
    cout << endl;
}

int main() {
    int n;
    cin >> n;
    int s[n] = {};
    for(int i = 0; i < n; i++) {
        int a_i;
        cin >> a_i;
        s[i] = a_i;
    }
    reverse_reordering(s, n);
    return 0;
}

// AiaSoft #044 — კუბიკების კიბე
// Complexity: O(?)
// Topics: <!-- Topic1, Topic2 -->

#include <iostream>
using namespace std;
int d[200][200];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        d[i][i] = 1;
    }

    // d[3][2]=1;
    // d[4][3]=1;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            int x = i - j;
            for (int k = 1; k < j; k++) {
                d[i][j] += d[x][k];
            }
        }
    }

    int cnt = 0;
    for (int i = 1; i <= n; i++) {
        cnt += d[n][i];
    }

    cout << cnt;


    return 0;
}

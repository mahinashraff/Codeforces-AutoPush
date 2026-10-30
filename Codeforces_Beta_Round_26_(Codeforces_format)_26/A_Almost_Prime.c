#include <stdio.h>

int spf[3001];

void build_sieve(int n) {
    for (int i = 2; i <= n; i++) {
        if (spf[i] == 0) {
            for (int j = i; j <= n; j += i) {
                if (spf[j] == 0) spf[j] = i;
            }
        }
    }
}

int distinct_prime_count(int x) {
    int cnt = 0, last = 0;
    while (x > 1) {
        int p = spf[x];
        if (p != last) { cnt++; last = p; }
        x /= p;
    }
    return cnt;
}

int main() {
    int n;
    scanf("%d", &n);
    build_sieve(n);

    int total = 0;
    for (int i = 1; i <= n; i++) {
        if (distinct_prime_count(i) == 2) total++;
    }
    printf("%d\n", total);
    return 0;
}
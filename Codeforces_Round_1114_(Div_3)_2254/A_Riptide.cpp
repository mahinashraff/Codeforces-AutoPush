#include <stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t--){
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);

        int count = 0;
        while (a != b && b != c && a != c) {
            int max = a, min = a;
            if (b > max) max = b;
            if (c > max) max = c;
            if (b < min) min = b;
            if (c < min) min = c;

            if (a == max) a--;
            else if (b == max) b--;
            else c--;

            if (a == min) a++;
            else if (b == min) b++;
            else c++;

            count++;
        }

        printf("%d\n", count);
    }
    return 0;
}
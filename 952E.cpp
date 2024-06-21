#include <stdio.h>
 
long long count_placements(long long length, long long width, long long height, long long a, long long b, long long c) {
    if (a <= length && b <= width && c <= height)
        return (length - a + 1) * (width - b + 1) * (height - c + 1);
    return -1;
}
 
int main() {
    int num_cases;
    scanf("%d", &num_cases);
    while (num_cases--) {
        long long length, width, height, k;
        scanf("%lld %lld %lld %lld", &length, &width, &height, &k);
        long long max_count = 0;
        for (long long a = 1; a * a * a <= k; ++a) {
            if (k % a == 0) {
                long long k1 = k / a;
                for (long long b = 1; b * b <= k1; ++b) {
                    if (k1 % b == 0) {
                        long long c = k1 / b;
                        max_count = (max_count > count_placements(length, width, height, a, b, c)) ? max_count : count_placements(length, width, height, a, b, c);
                        max_count = (max_count > count_placements(length, width, height, a, c, b)) ? max_count : count_placements(length, width, height, a, c, b);
                        max_count = (max_count > count_placements(length, width, height, b, a, c)) ? max_count : count_placements(length, width, height, b, a, c);
                        max_count = (max_count > count_placements(length, width, height, b, c, a)) ? max_count : count_placements(length, width, height, b, c, a);
                        max_count = (max_count > count_placements(length, width, height, c, a, b)) ? max_count : count_placements(length, width, height, c, a, b);
                        max_count = (max_count > count_placements(length, width, height, c, b, a)) ? max_count : count_placements(length, width, height, c, b, a);
                    }
                }
            }
        }
        printf("%lld\n", max_count);
    }
    return 0;
}

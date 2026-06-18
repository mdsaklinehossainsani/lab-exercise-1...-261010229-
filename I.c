#include <stdio.h>

int main() {
    long long n;
    scanf("%lld", &n);

    long long original = n;
    long long reverse = 0;

    while (n > 0) {
        int digit = n % 10;
        reverse = reverse * 10 + digit;
        n /= 10;
    }

    printf("%lld\n", reverse);

    if (original == reverse)
        printf("Yes\n");
    else
        printf("No\n");

    return 0;
}

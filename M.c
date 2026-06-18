#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    int found = 0;

    for (int i=a; i<=b; i++) {
        int x=i;
        int lucky=1;
        while (x>0) {
         int digit=x%10;
            if (digit!=4 && digit!=7) {
                lucky=0;
                break;
            }
            x=x/10;
        }
        if (lucky==1) {
            printf("%d ", i);
            found = 1;
        }
    }
    if (found==0)
        printf("-1");
    return 0;
}

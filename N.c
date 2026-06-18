#include <stdio.h>

int main() {
     int n;
    char ch;
    scanf(" %c", &ch);
    scanf("%d", &n);

    for (int i=0;i< n;i++) {
        int x;
        scanf("%d",&x);

        for (int j=0;j<x;j++) {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}

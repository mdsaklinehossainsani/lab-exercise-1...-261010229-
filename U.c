#include <stdio.h>

int main() {
    int num,a,b,sum=0;
    scanf("%d%d%d",&num,&a,&b);
    for (int i = 1; i <= num; i++) {
        int temp= i;
        int digitSum = 0;
        while (temp>0) {
            digitSum+=temp%10;
            temp/=10;
        }
        if (digitSum>=a&&digitSum<=b) {
            sum+= i;
        }
    }
    printf("%d\n",sum);
    return 0;
}

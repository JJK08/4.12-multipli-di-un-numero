#include <stdio.h>

int main() {
    int i;
    int n;
    int a;
    int b;
    printf("n:");
    scanf("%d",&n);
    printf("a:");
    scanf("%d",&a);
    printf("b:");
    scanf("%d",&b);
    while(i<=b) {
        printf("%d\n",n*i);
        i=a;
        i++;
    }
    return 0;
}

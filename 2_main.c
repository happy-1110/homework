//尹忠泉
//202610305133
#include <stdio.h>

int main(void) {
    float a;
    printf("输入的实数是:");
    scanf("%f", &a);
    if(a > 0) {
        printf("输入的实数是正数\n");
    } else if(a < 0) {
        printf("输入的实数是负数\n");
    } else {
        printf("输入的实数是零\n");
    }
    return 0;
}
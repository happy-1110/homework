//尹忠泉
//202610305133
#include<stdio.h>
int main(void) {
    printf("输入构成三角形三边的三条边长：");
    float a, b, c;
    scanf("%f %f %f", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a) {
        printf("输入的三条边长可以构成三角形\n");
    } else {
        printf("输入的三条边长不能构成三角形\n");
    }
    return 0;
}
//尹忠泉
//202610305133
#include<stdio.h>
int main(void) {
    printf("简易计算器\n");
    float a, b;
    int op;
    scanf ("%f %c %f", &a,&op,&b);
    if(op == '+') {
        printf("%.1f + %.1f = %.1f\n", a, b, a + b);
    } else if(op == '-') {
        printf("%.1f - %.1f = %.1f\n", a, b, a - b);
    } else if(op == '*') {
        printf("%.1f * %.1f = %.1f\n", a, b, a * b);
    } else if(op == '/') {
        if(b != 0) {
            printf("%.1f / %.1f = %.1f\n", a, b, a / b);
        } else {
            printf("错误:除数不能为零\n");
        }
    } else {
        printf("不支持的运算符\n");
    }


    return 0;
}

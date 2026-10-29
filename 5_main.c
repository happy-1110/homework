//202610305133
//尹忠泉
#include<stdio.h>
int main(void) {
    float a, b;
    char op;
    scanf ("%f %c %f", &a,&op,&b);
    if(op == '+') {
        printf("%.2f\n", a + b);
    } else if(op == '-') {
        printf("%.2f\n", a - b);
    } else if(op == '*') {
        printf("%.2f\n", a * b);
    } else if(op == '/') {
        if(b != 0) {
            printf("%.2f\n", a / b);
        } else {
            printf("错误:除数不能为0\n");
        }
    } else {
        printf("错误:不支持的运算符\n");
    }


    return 0;
}

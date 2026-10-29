//202610305133
//尹忠泉
#include <stdio.h>

int main(void) {
    float c;
    float f;
    printf("请输入摄氏度：");
    scanf("%f", &c);
    f = c * 9.0 / 5 + 32;
    printf("华氏温度=%.1f\n", f);

    return 0;
}

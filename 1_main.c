//尹忠泉
//202610305133
#include <stdio.h>

int main(void) {
    float c;
    float f;
    printf("输入：");
    scanf("%f", &c);
    f = c * 9.0 / 5 + 32;
    printf("输出：华氏温度%.1f\n", f);

    return 0;
}

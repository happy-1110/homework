//尹忠泉
//202610305133
#include<stdio.h>
int main(void) {
    printf("请输入成绩：");
    float score;
    scanf("%f", &score);
    if(score > 100 || score < 0) {
        printf("输入无效\n");
    } else if(score >=90) {
        printf("成绩等级为A\n");
    } else if(score >= 80) {
        printf("成绩等级为B\n");
    } else if(score >= 70) {
        printf("成绩等级为C\n");
    } else if(score >= 60) {
        printf("成绩等级为D\n");
    } else {
        printf("成绩等级为E\n");
    }

    return 0;
}
#include <stdio.h>

int main() {
    printf("성적 입력좀요");
    int test_score;
    scanf("%d", &test_score);
    if(test_score>=90)
        printf("A");
    else if(test_score>=80)
        printf("B");
    else if(test_score>=70)
        printf("C");
    else if(test_score>=60)
        printf("D");
    else
        printf("F");

    return 0;
}


#include <stdio.h>
using namespace std;

int main()
{
    int score;
    
    printf("점수를 입력하세요.\n");
    
    scanf("%d",&score);
    
    
    if(score >= 90 && score <= 100)
    {
        printf("A학점입니다.\n");
    }
    else if(score < 90 && score >= 80)
    {
        printf("B학점입니다.\n");
    }
    else if(score < 80 && score >= 70)
    {
        printf("C학점입니다.\n");
    }
    else if(score < 70 && score >= 60)
    {
        printf("D학점입니다.\n");
    }
    else if(score < 60 && 0 <= score)
    {
        printf("F학점입니다.\n");
    }
    return 0;
}

//5.修改程序清单8.4的猜数字程序，使用更智能的猜测策略。例如，程序最初猜50，询问用户是猜大了、猜小了还是猜对了。如果猜小了，那么下一次猜测的值应是50和100中值，也就是75。
//如果这次猜大了，那么下一次猜测的值应是50和75的中值，等等。使用二分查找（binary search）策略，如果用户没有欺骗程序，那么程序很快就会猜到正确的答案。
#include <stdio.h>
int main(void) {
    int low=1;
    int high=100;
    int guess=(low + high)/2;
    char response;
    while(1){
        printf("猜%d,大了(L)，小了(S)，对了(C)",guess);
        scanf(" %c",&response);
        if (response=='C'){
            printf("猜对了\n");
            break;
        }else if(response=='L'){
            high=guess-1;
        }else if(response=='S'){
            low=guess+1;
        }
        guess=(low+high)/2;
    }
    return 0;
}

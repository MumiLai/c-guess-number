#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    // 亂數種子只需要設定一次，所以放在所有迴圈的外面
    srand((unsigned int)time(NULL));

    // 存放玩家回答「要不要再玩」的字元
    char again;

    // 外圈迴圈：每跑一輪就是完整的一局遊戲
    do {
        // 這三個變數宣告在外圈裡面，所以每一局開始都會重新出題、次數歸零
        int answer = rand() % 100 + 1;
        int guess;
        int attempts = 0;

        printf("I picked a number between 1 and 100.\n");

        // 內圈迴圈：同一局裡反覆猜，直到猜對
        do {
            printf("Your guess: ");
            scanf("%d", &guess);
            attempts++;

            if (guess < answer) {
                printf("Too low!\n");
            } else if (guess > answer) {
                printf("Too high!\n");
            }
        } while (guess != answer);

        // 跳出內圈代表這一局猜對了
        printf("Correct! You got it in %d attempts.\n", attempts);

        // 詢問是否再玩一局
        printf("Play again? (y/n): ");
        // %c 讀取一個字元；%c 前面的空格很重要，
        // 它會略過上一次輸入後殘留的換行，不然會直接讀到換行而不是你打的字
        scanf(" %c", &again);

    // || 是「或」：輸入小寫 y 或大寫 Y 都會再玩一局，其他任何字元就結束
    } while (again == 'y' || again == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}
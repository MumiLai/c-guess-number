#include <stdio.h>
#include <stdlib.h> // 引入「標準函式庫」，亂數功能包含在這裡面
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));
    int answer = rand() % 100 + 1;// % 100 是「除以 100 取餘數」，結果會落在 0 到 99
    int guess;                   // + 1 之後範圍就變成 1 到 100，最後把結果存進名叫 answer 的整數變數
    int attempts = 0;           //用來記錄猜測次數，從0開始計算
    printf("I picked a number between 1 and 100.\n");
    scanf("%d", &guess);
    // 下方為 do...while：先執行一次大括號裡的內容，再檢查條件
    do {
        printf("Your guess: ");
        scanf("%d", &guess);
        attempts++;     // attempts 加 1，等同 attempts = attempts + 1

        if (guess < answer) {
            printf("Too low!\n");
        } else if (guess > answer) {
            printf("Too high!\n");
        }
    } while (guess != answer);   // != 是「不等於」

    // 跳出迴圈代表猜對了
    printf("Correct! You got it in %d attempts.\n", attempts);

    return 0;
}
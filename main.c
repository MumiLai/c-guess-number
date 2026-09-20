#include <stdio.h>
#include <stdlib.h> // 引入「標準函式庫」，亂數功能包含在這裡面
#include <time.h>

int main(void) {
    srand((unsigned int)time(NULL));
    int answer = rand() % 100 + 1;// % 100 是「除以 100 取餘數」，結果會落在 0 到 99
    int guess;                   // + 1 之後範圍就變成 1 到 100，最後把結果存進名叫 answer 的整數變數
    printf("I picked a number between 1 and 100. Your guess: ");
    scanf("%d", &guess);

    if (guess == answer) {
        printf("Correct!\n");// 兩個等號 == 是「比較是否相等」（一個等號 = 是「賦值」，兩者不一樣）
    } else if (guess < answer) {
        printf("Too low! The answer was %d.\n", answer);// 猜的數字比答案小；%d 的位置會被後面的 answer 取代
    } else {
        printf("Too high! The answer was %d.\n", answer); // 前兩種都不是，就只剩「猜太大」
    }

    return 0; // 回傳 0 給作業系統，代表「程式正常結束」
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 清除輸入緩衝區：把這一行剩下的字元一個個讀出來丟掉，直到遇到換行為止
// getchar() 每次讀一個字元；EOF 代表輸入已經結束（例如按了 Ctrl+Z）
void clear_input(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {
        // 迴圈本體是空的，作用只是把字元讀掉
    }
}

// 反覆要求玩家輸入，直到輸入一個 1 到 100 的有效整數，才把它回傳
int read_guess(void) {
    int value;
    int result;

    while (1) {   // 無限迴圈，只有 return 才會離開
        printf("Your guess (1-100): ");

        // scanf 回傳成功讀到的項目數：成功讀到整數是 1，讀不到是 0
        result = scanf("%d", &value);

        // EOF 表示輸入來源已經關閉，沒辦法再讀了，直接結束程式
        if (result == EOF) {
            exit(0);
        }

        // 不論成功或失敗，都把這一行剩下的內容清掉
        clear_input();

        if (result != 1) {
            printf("That's not a number. Try again.\n");
        } else if (value < 1 || value > 100) {
            printf("Please enter a number between 1 and 100.\n");
        } else {
            return value;   // 輸入有效，回傳給呼叫的地方
        }
    }
}

int main(void) {
    srand((unsigned int)time(NULL));
    char again = 'n';   // 給預設值，避免讀取失敗時使用到未設定的變數

    do {
        int answer = rand() % 100 + 1;
        int guess;
        int attempts = 0;

        printf("I picked a number between 1 and 100.\n");

        do {
            guess = read_guess();   // 只會拿到有效的數字
            attempts++;             // 無效輸入不會計入次數

            if (guess < answer) {
                printf("Too low!\n");
            } else if (guess > answer) {
                printf("Too high!\n");
            }
        } while (guess != answer);

        printf("Correct! You got it in %d attempts.\n", attempts);

        printf("Play again? (y/n): ");
        scanf(" %c", &again);
    } while (again == 'y' || again == 'Y');

    printf("Thanks for playing!\n");
    return 0;
}
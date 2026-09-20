[English](README.md) | 繁體中文

# c-guess-number

用 C 語言寫了個無聊的命令列猜數字遊戲(讓Claude教我語法)。

電腦會隨機選一個 1 到 100 的數字，你要一直猜，直到猜中為止。

## 功能

- 每一局都會產生新的隨機數字
- 每次猜完都會提示「太大」或「太小」
- 記錄你總共猜了幾次
- 輸入檢查：拒絕英文字母和超出 1 到 100 的數字
- 每局結束後可以選擇再玩一局

## 環境需求

- C 編譯器，例如 `gcc`

## 編譯與執行

```bash
gcc -Wall -o guess main.c
```

Windows（PowerShell）執行：

```powershell
.\guess.exe
```

macOS / Linux 執行：

```bash
./guess
```

## 執行範例

程式的提示訊息是英文，所以範例輸出和英文版相同：

```
I picked a number between 1 and 100.
Your guess (1-100): 50
Too high!
Your guess (1-100): 25
Too low!
Your guess (1-100): 37
Correct! You got it in 3 attempts.
Play again? (y/n): n
Thanks for playing!
```

## 我學到了什麼

- 變數、`if / else` 和迴圈（`do...while`）
- 用 `rand()` 和 `srand()` 產生亂數
- 用 `scanf` 安全地讀取輸入，並清除輸入緩衝區

## 授權

MIT
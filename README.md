# c-guess-number

A command-line number guessing game written in C.

The computer picks a random number between 1 and 100, and you keep guessing until you get it right.

## Features

- Random number generated each round
- "Too high" / "Too low" hints after every guess
- Counts how many attempts you took
- Input validation: rejects letters and numbers outside 1-100
- Play again option after each round

## Requirements

- A C compiler such as `gcc`

## Build and Run

```bash
gcc -Wall -o guess main.c
```

Run on Windows (PowerShell):

```powershell
.\guess.exe
```

Run on macOS / Linux:

```bash
./guess
```

## Example

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

## What I Learned

- Variables, `if / else`, and loops (`do...while`)
- Random numbers with `rand()` and `srand()`
- Reading input safely with `scanf` and clearing the input buffer
- Writing my own functions

## License

MIT
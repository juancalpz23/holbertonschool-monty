# Holberton - C - Stacks, Queues - LIFO, FIFO

### Table of Contents

- [Description](#description)
- [Files](#files)
- [Features](features)
- [Use](#use)
- [Examples](#examples)
- [Resources](#resources)
- [Credits](#credits)

## Description

This project is an interpreter for Monty ByteCodes, developed in C. Monty is a stack-based scripting language used for instructing stack operations, similar to assembly language. The interpreter executes Monty bytecode files, allowing for various stack manipulations.

## Files

- `monty.h`: Header file with structure definitions and function prototypes.
- `monty.c`: Main program file.
- `build_arr.c`: Functions for building the instruction array.
- `find_fun.c`: Functions to identify and execute opcodes.
- `free.c`: Memory management functions.
- `op_func.c`, `other_op.c`, `push.c`: Implementation of various opcodes.

## Features

- Interpretation of Monty bytecode files (`.m` extension).
- Supports a variety of stack operations including `push`, `pall`, `pint`, `pop`, `swap`, `add`, `nop`, and others.
- Efficient memory management to handle stack operations.

## Use

### Installation

Clone the repository:
```shell
https://github.com/juancalpz23/holbertonschool-monty.git
```
Compile the program using:
```shell
gcc -Wall -Werror -Wextra -pedantic *.c -o monty
```

### Usage

Run the interpreter with a Monty bytecode file:
```shell
./monty file.m
```

## Examples

```
juancalpz23@penguin:~/holbertonschool-monty$ ./monty bytecodes/001.m
3
2
1
0
6
5
4
3
2
1
0
juancalpz23@penguin:~/holbertonschool-monty$
```

```
juancalpz23@penguin:~/holbertonschool-monty$ ./monty bytecodes/00.m
3
2
1
juancalpz23@penguin:~/holbertonschool-monty$
```
```
juancalpz23@penguin:~/holbertonschool-monty$ ./monty bytecodes/06.m
1
2
3
juancalpz23@penguin:~/holbertonschool-monty$
```
```
juancalpz23@penguin:~/holbertonschool-monty$ ./monty bytecodes/07.m
3
2
1
2
1
1
juancalpz23@penguin:~/holbertonschool-monty$
```
```
juancalpz23@penguin:~/holbertonschool-monty$ ./monty bytecodes/09.m
3
2
1
2
3
1
juancalpz23@penguin:~/holbertonschool-monty$
```
```
juancalpz23@penguin:~/holbertonschool-monty$ ./monty bytecodes/12.m
3
2
1
5
1
juancalpz23@penguin:~/holbertonschool-monty$
```
## Resources

- *[Google](https://intranet.hbtn.io/rltoken/0BnGxP9OJGM4vvO8SuXRvQ)*
- *[How to use exten to share variables between source files](https://intranet.hbtn.io/rltoken/LeTvCFCvcgkvd-6USy3yrA)*

## Credits

- *[Norman Colon](https://github.com/normancolon)*
- *[Juan C Lopez Loyola](https://github.com/juancalpz23)*

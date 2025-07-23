![](.README/header.png)

# Sea Of C
C programming assignments and lab work completed as part of my undergraduate coursework at Sister Nivedita University. 

---

## Setup
All C programs in this repository were written and tested on Windows using:

- [MinGW](https://www.mingw-w64.org/) as the GCC compiler
- [Visual Studio Code](https://code.visualstudio.com/) as the editor
- [Code Runner extension](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner) to easily compile and run .c files with a single shortcut key

## Installing MinGW using [Chocolatey](https://chocolatey.org/)
To install the MinGW compiler, I used [Chocolatey](https://chocolatey.org/), a Windows package manager. If you want to install [choco](https://chocolatey.org/), you can follow this [guide](https://chocolatey.org/install).

And then you can install the compiler by pasting this command in your command prompt  
```
choco install wingw
```
> You will be recommended to do this while running the shell as an Administrator.


## Running  the code
Press `Ctrl + Alt + N` to compile and run the code (using the [Code Runner extension](https://marketplace.visualstudio.com/items?itemName=formulahendry.code-runner)).
The output will appear in the `OUTPUT` tab of the integrated terminal. You can also change the keyboard shortcut in `Settings` or create a custom macro for it.

--- 

## Questions

### 1. Hello World in C
WAP in C to display "Hello World!" in the output console!

``Answer`` [hello-world.c](src/hello-world.c)


``Output Terminal``
```
Hello World!
```


### 2. Arithmetic Operations in C

WAP in C to display to input 2 integers from the user, and perform the basic arithmetic operations on them.
The operations which are to be performed are : 

- Addition `(+)`
- Subtraction `(-)`
- Multiplication `(*)`
- Division `(/)`
- Remainder `(%)`

``Answer`` [arithmetic-operations.c](src/arithmetic-operations.c)

``Output Terminal``
```
=== [INPUT] ===
Enter the value of A : 8
Enter the value of B : 6

=== [OUTPUT] ===
Sum of 8 and 6 is 14
Difference of 8 and 6 is 2
Product of 8 and 6 is 48
Quotient of 8 and 6 is 1.333333
Remainder of 8 and 6 is 2
```


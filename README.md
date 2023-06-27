# Programming Assignment 5 - List ADT

The file **List.cpp** has implementation of the **List** Data Structure.

## Files In The Repository

1. List.cpp
2. List.h
3. ListTest.cpp
4. Shuffle.cpp
5. README.md
6. Makefile

# Make commands
```
$ make clean
```
This command will make the repository clean by deleting the object file and executable file of **ListTest.cpp**, **Shuffle.cpp**, and **List.cpp**.


```
$ make
```

This command will just compile other C files and make the executable and object file for **ListTest.cpp** and **Shuffle.cpp**.

# Running the program

```
$ make
```
1. This command will just compile and make the executable and object file for **ListTest.cpp** and **Shuffle.cpp**.

```
$ ./ListTest
```

2. This command will run the ListTest file and show the output of List ADT functions.

```
$ ./Shuffle <deck size>
```

3. This command will run Shuffle.cpp and it takes **1** argument i.e. positive integer number.


# Memory Leak Check

1. Run the make command

```
$ make
```

2. Run the following command to check the memory leaks in ListTest file.

```
$ make checkTest
```

3. Run the following command to check the memory leaks in Shuffle File.

```
$ make checkShuffle
```

# Other Commands

1. To clean the **.txt** files.

```
$ make cleanText
```

2. To clean the **backup** directory.

```
$ make cleandir
```

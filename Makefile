# ==========================================
# Name: Anurag Prashant Umale              =
# Student Id: 1887255                      =
# E-mail: aumale@ucsc.edu                  =
# File: Makefile						   =
# Class: CSE 101 Spring 2023               =
# ==========================================

CC = g++
CFLAGS = -std=c++17 -Wall

all: ListTest Shuffle

Shuffle: Shuffle.o List.o
	$(CC) -o $@ $^

ListTest: ListTest.o List.o
	$(CC) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -f ListTest Shuffle List *.o

cleanText:
	rm -f *.txt

cleandir:
	rm -r backup

checkShuffle:
	valgrind --leak-check=full ./Shuffle 50

checkTest:
	valgrind --leak-check=full ./ListTest

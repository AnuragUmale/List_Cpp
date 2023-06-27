/*
=================================
Name: Anurag Prashant Umale     =
Student Id: 1887255             =
E-mail: aumale@ucsc.edu         =
File: Shuffle.cpp               =
Class: CSE 101 Spring 2023      =
=================================
*/

#include <string> // including the string library
#include "List.h" // including the List header file

using namespace std;

void shuffle(List &D);

void shuffle(List &D)
{
  List a; // decalring the list
  int d_half = D.length() / 2; // halving the length of the list
  D.moveFront(); // moving front in the list
  for (int i = 0; i < d_half; i++) // looping in half of the list
  {
    a.insertBefore(D.moveNext()); // inseerting before in list a by moving next in list D
    D.eraseBefore(); // erasing before in the list D
  }
  a.moveFront(); // moving front in the list a
  for (int i = 0; i < a.length(); i++) // looping from 0 till length of the list
  {
    D.moveNext(); // moving front in the list D
    D.insertBefore(a.moveNext()); // inserting the element before in the list D by moving next in list a
  }
}

int main(int argc, char *argv[])
{

  if (argc != 2) // checking if the arguments passed are not equal to 2
  {
    cerr << "Usage: " << argv[0] << " <deck size>" << endl; // printing the error message
    return (EXIT_FAILURE); // returning the failure
  }

  int deck_size = atoi(argv[1]); // getting the second argument and set to deck size
  if (deck_size <= 0) // checking if the argument is positive number
  {
    cerr << "Deck size must be a positive integer" << endl; // Error message
    return (EXIT_FAILURE); // returning failure
  }

  cout << "deck size\t\tshuffle count\n------------------------------" << endl; // printing the message

  for (int i = 1; i <= deck_size; i++) // looping from 0 till deck size
  {
    List deck; // creating the deck
    for (int j = 1; j <= i; j++) // looping from 1 to i 
    {
      deck.insertBefore(j); // inserting before the element in deck
    }

    List deck_copy = deck; // copying the deck
    int count = 0; // setting the count to 0
    while (true) // while true
    {
      shuffle(deck); // calling the shuffle function on deck
      count++; // count is incremented by 1
      if (deck.equals(deck_copy)) // deck is checked if it is equal to copy of deck
      {
        break; // breaking the loop
      }
    }
    cout << i << "\t\t\t\t" << count << endl; // printing the value and the count
  }
  return (EXIT_SUCCESS); // returning success
}
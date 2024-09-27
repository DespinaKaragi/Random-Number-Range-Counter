# Random-Number-Range-Counter
A simple C program that generates an array of 100 random numbers between 1 and 100, then counts and displays how many numbers fall within predefined ranges of ten (e.g., 1-10, 11-20, ..., 91-100)

Features:

  Generates 100 random integers in the range [1-100].
  Counts how many numbers belong to each of the following intervals:
        1-10
        11-20
        21-30
        31-40
        41-50
        51-60
        61-70
        71-80
        81-90
        91-100
  Displays both the randomly generated numbers and the count of numbers in each range.

Technologies Used:

  C programming language: The core logic is implemented in C.
  Standard C libraries:stdlib.h for random number generation (rand()).
             time.h for seeding the random number generator (srand()).

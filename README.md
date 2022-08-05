# Lseek-Function-Implementation
This C Program test whether the Standard input is capable of seeking and Create a file with a hole, without hole and compare them.



Question:

1)    Run the program in Figure 3.1 to test if the standard input is capable of seeking and write your report on it.

2) Run the program in Figure 3.2 to to create a file with a hole in it and compare it with a file of the same size with no hole in it, compare the blocks occupied both the files, show the result obtained as a screenshot.


Solution:

a. This C file (Asignment1a.c) was compiled and run with required header files and tested whether the standard input is capable of seeking or not. And the program returned “cannot seek”. Because the file descriptor refers to a pipe, FIFO, or socket, lseek sets errno to ESPIPE and returns -1 (Cannot seek). 


b. These C files (Assignment1b.c & Assignment1bnh.c) were compiled and run with required header files and created one file with a hole in it and another file with no hole in it. Both files were compared with each other using command ls -ls. The file with hole occupied only 8 blocks and the file with no hole occupied 20 blocks.


//Reference to assignment 2-1 Hello C++
#include <iostream>
#include <stdio.h> //contains the standard input/output 

int main()
{
    std::cout << "Hello C++" << std::endl; 
    /*have to use std:: cause namespace std is not included.
    cout is character output so we are telling program to output Hello C++*/ 
    puts("Hello C!");
    //this is another output mode based in stdio.h. 
    printf("Hello Alice!\n"); //printf means print formatted. we put \n for new line.
    printf("Hello %s!\n","Bob"); //%s is a place holder for a string. Bob is the string inserted here. new line \n

}
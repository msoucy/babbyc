/*
 * =====================================================================================
 *
 *       Filename:  pointers.c
 *
 *    Description:  Pointers example
 *
 *        Version:  1.0
 *        Created:  09/15/2012 05:16:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  William Dignazio (slackwill), slackwill@csh.rit.edu
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(int argc, char *argv[]) 
{ 
    int foo; 
    int *bar; 
    bar = &foo;

    char *str = "Hello World\n"; 
    char baz = str[0]; 
    
    return 0; 
}

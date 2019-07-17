//
//  main.c
//  Node
//
//  Created by Rajabi Chavari, Hamed on 2019-07-16.
//  Copyright © 2019 Rajabi Chavari, Hamed. All rights reserved.
//

#include <stdio.h>
#include "myFunctions.h"
typedef struct Node Nodeptr;

typedef struct Node
{
    int data;
    Nodeptr* next;
    Nodeptr* previous;
} Nodeptr;

extern Nodeptr * start;
extern Nodeptr * endNode;

int main(int argc, char *argv[])
{
    //it may give you some error or warnings for some compilers
    //no init
    int choice;
    start = NULL;
    endNode = NULL;
    
    do
    {
        
        printf("1 - add (left) | 2- add (right) |  5 - print | ");
        puts("99 - extend the menu | ");
        scanf("%d", &choice);
        
        switch (choice)
        {
            case 99:
                menu();
                break;
            case 1:
                addToLeft();
                break;
            case 2:
               
                addToRight();
                break;
            case 3:
                puts("under construction");
                addMiddleAfter();
                break;
            case 4:
                puts("under construction");
                addMiddleBefore();
                break;
            case 5:
                
                printTheNodes();
                break;
            case 6:
                puts("under construction");
                printTheNodesBackwards();
                break;
            case 0:
                break;
            default:
                printf("please enter a valid number\n\n");
                break;
        }
        
    } while (choice != 0);
    
    
    
    return 0;
}


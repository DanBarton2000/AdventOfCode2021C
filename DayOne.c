//
// Created by Dan on 05/12/2021.
//

#include <stdio.h>
#include <stdlib.h>
#include "DayOne.h"

void partOne();
void partTwo();
FILE * readFile();

void run()
{
    partOne();
    partTwo();
}

FILE * readFile()
{
    FILE *file;
    file = fopen("../Files/day1.txt", "r");

    if (file == NULL)
    {
        perror("Unable to open file");
        exit(1);
    }

    return file;
}

void partOne()
{
    FILE *file = readFile();

    char chunk[128];

    int isPrevious = 0;

    int previousNumber;
    int currentNumber;

    int counter = 0;

    while (fgets(chunk, sizeof(chunk), file) != NULL)
    {
        if (isPrevious == 1)
        {
            char *ptr;
            currentNumber = strtol(chunk, &ptr, 10);

            if (currentNumber > previousNumber)
                counter++;
        }
        else
        {
            isPrevious = 1;
        }

        previousNumber = currentNumber;
    }

    printf("%d", counter);
}

void partTwo()
{
    FILE *file = readFile();

    char chunk[128];

    int aCounter = 0;
    int bCounter = 0;
    int cCounter = 0;


    while (fgets(chunk, sizeof(chunk), file) != NULL)
    {

    }
}


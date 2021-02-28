#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

//random password generator

int main()
{
    srand((unsigned int)(time(NULL))); //*reset initial rand-seed value by time 
    int i;
    char pass[12];

    printf("Press enter to get a twelve-character password\n");
    getchar();

    for (i = 0; i < 4; i++) {
        pass[i] = rand() % 10;     //rand() % M , means that can generate a value between 0 to M-1 
        						  //if only "rand()" , then it will generate a integer( the value between 0 to RAND_MAX ), ex: int x = rand();
        char capLetter = 'A' + (rand() % 26);
        pass[i + 2] = capLetter;
        char letter = 'a' + (rand() % 26);
        pass[i + 3] = letter;
        printf("%d%c%c", pass[i], pass[i + 2], pass[i + 3]);
    }
    printf("\n\n");
}

#include <stdio.h>
#include <stdlib.h>

void showSeat(int seat[][][])
{
    

}

int bookSeat()
{

}


int main()
{
    //variable intialization
    int choice;
    int block = 4; row = 10, colomn = 10;
    // array declaration
    int seat[4][10][10] = {{{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}
    ,{0,0,0,0,0,0,0,0,0,0} },
    {{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}
    ,{0,0,0,0,0,0,0,0,0,0} },
    {{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}
    ,{0,0,0,0,0,0,0,0,0,0} },
    {{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},
    {0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0,0,0}
    ,{0,0,0,0,0,0,0,0,0,0} }
    };
    printf("-----------------------------");
    printf("MOVIE TICKET BOOKING SYSTEM ");
    printf("-----------------------------");
    printf("1. show seat status:");
    printf("2. book seat:");
    printf("3. Exit:");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        void showSeat(int seat[][][]);
        break;

        case 2:
        int bookSeat();
        break;

        case 3:
        return 0;

    }  
}

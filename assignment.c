#include <stdio.h>
#include <stdlib.h>




int bookSeat(char seats[4][10][10],char booked )
{
    int hall, row,seat;


    printf("Enter the Hall, Row and seat\n");
    scanf("%d%d%d",&hall,&row,&seat);
    seats[hall][row][seat] = 'x';


}

void showSeat(char seats[4][10][10])
{

    for (int i=0; i<4; i++)
    {
        printf("Hall %d:\n", i+1);
        {
            for (int j=0; j<10; j++)
            {
                for (int k=0; k<10; k++)
                {
                    printf("%c",seats[i][j][k]);
                }
                printf("\n");
            }
        }
        printf("\n");


}}


int main()
{
    //variable intialization
    int choice;
    char booked = 'x';
    // array declaration
    char seats[4][10][10] = {{{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},
    {o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},
    {o,o,o,o,o,o,o,o,o,o}},
    {{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},
    {o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},
    {o,o,o,o,o,o,o,o,o,o}},
    {{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},
    {o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},
    {o,o,o,o,o,o,o,o,o,o}},
    {{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},
    {o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},{o,o,o,o,o,o,o,o,o,o},
    {o,o,o,o,o,o,o,o,o,o}}
    };
    while(choice != 3)
    {

    printf("-----------------------------\n");
    printf("MOVIE TICKET BOOKING SYSTEM \n");
    printf("-----------------------------\n");
    printf("1. show seat status:\n");
    printf("2. book seat:\n");
    printf("3. Exit:\n");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
        showSeat(seats);
        break;

        case 2:
        bookSeat(seats, booked);
        break;

        case 3:
        return 0;

    }

    }
}

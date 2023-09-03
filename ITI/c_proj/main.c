#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "STD_TYPES.h"
#include "conf.h"

u8 i;
u8 AccountID =0;
//New_Account Acc ;
static New_Account database[100]; //array of struct of max 100 client








void Open_Account ()
{
    New_Account database[100];
    New_Account Acc ;
    u32 id;
    printf("please enter the account national ID : \n");
    scanf("%d",&id);
    for(int i=0; i < AccountID ; ++i)
    {
        if(database[i].ID == id )
        {
            printf("%d \n", database[i]);
        }
        else
        {
            printf("Sorry the Id is not valid ^-^");
        }

    }



}







void Create_Account ()
{
    New_Account Acc;
    if (AccountID >= 100)
    {
        printf("please try again later because the database is full");
    }
    printf("please enter the Full name : \n");
    scanf(" %[^\n]",&Acc.name);
    printf("please enter the Full Address : \n");
    scanf(" %[^\n]",&Acc.address);
    printf("please enter the Age : \n");
    scanf("%d",&Acc.age);
    if(Acc.age <= 21)
    {
        printf("please enter the Guardian National ID: \n");
        scanf("%d",&Acc.G_ID);
    }



    char arr[15]; // Use char array to store digits as characters

    printf("Enter a 14-digit of the national Id : ");
    scanf("%s", arr); // Read up to 14 characters (digits)

    int i = 0;
    while (arr[i] != '\0')
    {
        i++; // Count the number of characters (digits).......strlen (length of a string)
    }

    if (i == 14)
    {
        printf("Number exceeds 14 digits.\n");
        Create_Account ();
    }
    else
    {
        printf("Number has %d digits.\n", i);


    }
    printf("please enter the Balance : \n");
    scanf("%d",&Acc.Balance);
    Acc.Acc_ID = ++AccountID;
    database[++AccountID] = Acc ;
}









void Admin ()
{
    u8 choice;
    New_Account Acc ;

    do
    {
        printf("1. Create New Account  \n");
        printf("2. Open Existing Account  \n");
        printf("3. Exit System \n");
        printf("Please  Enter your choice : \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1 :
            Create_Account ();
            break;
        case 2 :
            Open_Account ();

            break;
        case 3:
            printf("Are you sure you want to exit the system press \'ENTER\'\n");
            exit (0);
            break;
        default:
            printf("Please Enter a right choice \n \a");

        }

    }
    while(choice != 3);

}










void Admin_Login ()
{
    u8 Username[20] ;
    u32 Password;
    printf("Please enter your Username\n");
    scanf("%s", &Username);
    printf("Please enter your Password \n");
    scanf("%d", &Password);
    if (strcmp(Username, "Ib")== 0 && Password == 1234)
    {
        printf(" Welcome %s \n", Username);
        Admin ();
    }
    else if(strcmp(Username, "Ebram" )== 0 && Password == 987)
    {
        printf(" Welcome %s \n", Username);
        Admin ();
    }
    else if ( strcmp(Username,"Marwan")== 0 && Password == 1122)
    {
        printf(" Welcome %s \n", Username);
        Admin ();

    }
    else
    {
        printf("please enter a Valid Username And Password\n");
        Interface();
    }
}










void Interface ()
{
    u8 choice;


    do
    {
        printf("1. Admin  \n");
        printf("2. Client  \n");
        printf("3. Exit \n");
        printf("Please  Enter your choice : \n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1 :
            Admin_Login ();
            break;
        case 2 :
            //User_Login();
            break;
        case 3:
            printf("Thanks for using our app ^_^");
            exit (0);
            break;
        default:
            printf("Please Enter a right choice \n \a");

        }

    }
    while(choice != 3);

}

int main()
{
    Interface();
    return 0;

}

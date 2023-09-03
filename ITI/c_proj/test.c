#include <stdio.h>
#include <ctype.h>
#include <conio.h>
#include <string.h>

struct account
{
    int acno;
    char name[50];
    int deposit;
    char type;
};

void create_account(struct account *acc);
void valid_name(char *name);
void show_account(struct account *acc);
void modify(struct account *acc);
void dep(struct account *acc, int amount);
void draw(struct account *acc, int amount);
void report(struct account *acc);
int retacno(struct account *acc);
int retdeposit(struct account *acc);
char rettype(struct account *acc);

void valid_name(char *name)
{
    int cname = 0;
    for (int i = 0; i < 50; i++)
    {
        if (name[i] != '\0')
        {
            if (((name[i] >= 'a' && name[i] <= 'z') || (name[i] >= 'A' && name[i] <= 'Z')) || (name[i] == ' '))
                continue;
            else
                cname++;
        }
        else
            break;
    }
    if (cname < 50)
    {
        printf("Invalid name. Please enter a valid name.\n");
        valid_name(name);
    }
}

void create_account(struct account *acc)
{
    printf("Enter the account number: ");
    scanf("%d", &acc->acno);
    printf("Enter the name of the account holder: ");
    scanf("%s", &acc->name);
    valid_name(acc->name);
    printf("Enter the initial deposit amount: ");
    scanf("%d", &acc->deposit);
    printf("Enter the type of account (S for savings, C for current): ");
    scanf(" %c", &acc->type);
}

void show_account(struct account *acc)
{
    printf("Account Number: %d\n", acc->acno);
    printf("Account Holder Name: %s\n", acc->name);
    printf("Account Balance: %d\n", acc->deposit);
    printf("Account Type: %c\n", acc->type);
}

void modify(struct account *acc)
{
    printf("Account Number: %d\n", acc->acno);
    printf("Modify Account Holder Name: ");
    scanf("%s", acc->name);
    valid_name(acc->name);
    printf("Modify Account Balance: ");
    scanf("%d", &acc->deposit);
    printf("Modify Account Type: ");
    scanf(" %c", &acc->type);
}

void dep(struct account *acc, int amount)
{
    acc->deposit += amount;
}

void draw(struct account *acc, int amount)
{
    if (amount > acc->deposit)
    {
        printf("Insufficient balance.\n");
    }
    else
    {
        acc->deposit -= amount;
    }
}

void report(struct account *acc)
{
    printf("%-15d%-20s%-15d%-10c\n", acc->acno, acc->name, acc->deposit, acc->type);
}

int retacno(struct account *acc)
{
    return acc->acno;
}

int retdeposit(struct account *acc)
{
    return acc->deposit;
}

char rettype(struct account *acc)
{
    return acc->type;
}

int main()
{
    struct account acc;
    create_account(&acc);
    show_account(&acc);
    modify(&acc);
    show_account(&acc);
    dep(&acc, 1000);
    show_account(&acc);
    draw(&acc, 500);
    show_account(&acc);
    report(&acc);
    return 0;
}

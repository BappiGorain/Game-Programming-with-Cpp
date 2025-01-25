#include<stdio.h>


struct BankAcc
{
	char *account_holder[100];
	float balance;
};

void createAcc(struct BankAcc *ba)
{
	printf("Enter holder name : ");
	scanf("%s",*ba->account_holder);
	ba->balance = 0.0;
}


void deposite(struct BankAcc *ba,float amt)
{
	ba->balance+= amt;
}

void withdraw(struct BankAcc *ba,float amt)
{
	ba->balance-= amt;
}

void details(struct BankAcc *ba)
{
	printf("name : %s",*ba->account_holder);
	printf("Balance : %f",ba->balance);
}


int main()
{
	struct BankAcc a1;
	createAcc(&a1);
	deposite(&a1,1000);
}

#define _CRT_SECURE_NO_WARNINGS 1
#define bool int
#define false 0
#define true (!false)

#include <stdio.h>
#include <string.h>
#define SIZE 3

struct bank_customer
	{
     long accountNumber;
	 char name[20];
	 float balance;
    };

//Global Variables
///ADD Code - Declare the bank array
struct bank_customer arr_bank[SIZE];

//function prototypes
void inputCustomers(struct bank_customer *);
bool overDrawn(struct bank_customer );//return false if there are no accounts overdrawn
void displayCustomer(long, struct bank_customer *);



int main()
{
     
	//1. Input customers
	inputCustomers(arr_bank);
	//2. For each customer in the array, 
	//display names of those that are overdrawn by calling overDrawn()
	//in a loop
	int i;
	for(i = 0; i < SIZE; i++ )
    {
    	if(overDrawn(arr_bank[i])==true){
    		printf("This account has overdrawn: %ld\n",arr_bank[i].accountNumber);
		}
		else{
			printf("This account has not overdrawn: %ld\n",arr_bank[i].accountNumber);
		}
    }
	//3. Ask user to input an account number, then call displayCustomer()
	//which passes in the account number and array and searches
	//and displays the account details if it finds it
	long tempAccNo;
    printf("Input the Account Number you wish to see the details of:");
    scanf("%ld", &tempAccNo);
    displayCustomer(tempAccNo, arr_bank);
}

void inputCustomers(struct bank_customer *){
	int i;
	for(i = 0; i < SIZE; i++ )
    {
		printf("Customer %d\n",i+1);
		printf("Input unique account number:\n");
		scanf("%ld", &arr_bank[i].accountNumber);
		printf("Input your name:\n");
		scanf("%s", &arr_bank[i].name);
		printf("Input your Bank Balance:\n");
		scanf("%f", &arr_bank[i].balance);
	}	
}
bool overDrawn(struct bank_customer b){
	int i;
	bool overdrawn;
	float tempbal = b.balance;
	if (tempbal<0){
		overdrawn = true;
	}else{
		overdrawn = false;
	}
	return overdrawn;
}
void displayCustomer(long x, struct bank_customer *){
	int i;
	bool found = false;
	for(i = 0; i < SIZE; i++ )
    {
		if(x==arr_bank[i].accountNumber){
			found = true;
			printf("This is Customer %d 's Account:\n",i+1);
			printf("Account Number: %ld \n",arr_bank[i].accountNumber);
			printf("Name: %s \n",arr_bank[i].name);
			printf("Bank Balance: %.2f \n",arr_bank[i].balance);
		}
	}
	if(found==false){
		printf("The Account Number entered does not match any in the system...");
	}
		
		
}

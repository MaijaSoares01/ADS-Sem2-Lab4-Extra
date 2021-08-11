#include <stdio.h>
#include <string.h>
char generatePassword(char *);
int generatePassword1(char *);
char generatePassword2(char *);
int main()
{
 char email[70];
 int passlength;
printf("Enter email: ");
gets(email);
printf("Password is being generated!...\n");
generatePassword(email);
passlength = generatePassword1(email);
printf("\nPassword has : %d characters....\n",passlength);
printf("Email: ");
puts(email);
generatePassword2(email);
}

char generatePassword(char *email){
	int length = strlen (email);
	int i;
	char password[70];
	for(i=0;i<length;i++){
	 password[i]=email[i]+1;
	}
	printf("Password: %s",password);
}
int generatePassword1(char *email){
	int length = strlen (email);
	int i;
	char password[70];
	for(i=0;i<length;i++){
	 password[i]=email[i]+1;
	}
	return length;
}
char generatePassword2(char *email){
	int length = strlen (email);
	int i;
	char password[70];
	for(i=0;i<length;i++){
	 password[i]=email[i]+1;
	}
	strcpy(password, email);
	printf("Password has been changed to the email..password is now: %s",password);
}

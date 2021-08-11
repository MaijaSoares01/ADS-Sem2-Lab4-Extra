#include <stdio.h>
#include <string.h>
int num_vowels(char *);
char backwards(char *);
int main()
{
 char name[10]; int num=0;
printf("Enter name: ");
gets(name);
num = num_vowels(name);
printf("Number of vowels in %s = %d\n",name, num);
printf("%s backwards is.....\n", name);
backwards(name);
}
//Formal parameter is a char pointer so the actual parameter must be the address of a char.
int num_vowels(char *name)
{ int index; int num = 0;
 for (index=0;index < strlen(name); index++)
 switch(name[index])
 { case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U': 
 	num++; 
	break;
 }
 return num;
 
}
char backwards(char *name){
int begin, end, count = 0;
    char x[30];
    while (name[count] != '\0')
      count++;
    
    end = count - 1;
    for (begin = 0; begin < count; begin++) {
      x[begin] = name[end];
      end--;
   }
   x[begin] = '\0';
   printf(x);	
}


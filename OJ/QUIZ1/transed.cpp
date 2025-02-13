#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

char name [100][100];
int age [100];
int rating [100];
char country [100][100];
int price [100];

int count = 0;
void menu();
void create();
void del ();

int nextInt();
void enterContinue();
char validation ();


int main (){
	int input = -1;
	do{
		do{
		if (count == 0){
			puts ("No player Information available...");
			getchar();
		} else if (count > 9){
			puts ("===========================================================================");
			puts ("| No   | Name                  | Age  | Rating | Country   | Price          |");
			puts ("============================================================================");
			for (int i = count- 10; i < count; i++){
				printf ("| %-5d| %-22s| %-5d| %-7d| %-10s| %-10d|\n", i + 1, name[i], age[i] , rating[i] , country[i], price[i]);
				puts ("=========================================================================");
			}
		} else {
			puts ("===========================================================================");
			puts ("| No   | Name                  | Age  | Rating | Country   | Price          |");
			puts ("============================================================================");
			for (int i = 0; i < count; i++){
				printf ("| %-5d| %-22s| %-5d| %-7d| %-10s| %-10d|\n", i + 1, name[i], age[i] , rating[i] , country[i], price[i]);
				puts ("=========================================================================");	
			}
		}
		menu();
		printf (">> ");
		input = nextInt ();
		} while (input < 1 || input > 3);
		
		switch (input){
			case 1:
				create();
				break;
			case 2:
				del();
				break;
			case 3:
				puts ("Goodbyee");
				enterContinue();
				return 0;
		}
	} while (1);
	
}

void menu(){
	puts ("1. Create Profile");
	puts ("2. Delete Profile");
	puts ("Exit");
}

void create (){
	system ("cls");
	do {
		printf ("Player Name [More than 5 character] : ");
		scanf ("%[^\n]", name[count]);getchar ();
	} while (strlen (name[count]) < 5);
	
	do{
		printf ("Player age [More than or equals 18 years old and lesst than 50 years old] : ");
		age [count] =  nextInt();
	} while (age[count] < 18 || age[count] >= 50);
	
	do {
		printf ("Player market rating [1 - 100] : ");
		rating [count] = nextInt ();
	} while (rating[count] < 1 || rating[count] > 100);
	
	do {
		printf ("Player Country [Must be 'Spain', 'Englang', Argentina] : ");
		scanf ("%s", country[count]); getchar ();
	} while (strcmp (country[count], "Spain") != 0 && 
			 strcmp (country [count], "England") != 0 &&
			 strcmp (country [count], "Argentina") != 0);
			 
	srand (time(NULL));
	int random = 0;
	random = rand() % 1000 + 1;
	price[count] = rating[count] * random * 120;
	
	puts ("New Player Information");
	puts ("======================");
	printf ("Name					: %s\n", name[count]);
	printf ("Age					: %d\n", age[count]);
	printf ("Rating					: %d\n", rating[count]);
	printf ("Country					: %s\n", country[count]);
	printf ("Market Price				: %d\n", price[count]);
			 
	char validat = validation();
	if (validat == 'Y'){
		count++;
		puts ("Successfully created a new player");
		enterContinue ();
		
		return;
	}
	puts ("Gagal created");
	enterContinue();
return;
}

void del (){
		system ("cls");
		if (count == 0){
			puts ("No player Information available...");
			getchar();
			return;
		} else if (count > 9){
			puts ("===========================================================================");
			puts ("| No   | Name                  | Age  | Rating | Country   | Price          |");
			puts ("============================================================================");
			for (int i = count- 10; i < count; i++){
				printf ("| %-5d| %-22s| %-5d| %-7d| %-10s| %-10d|\n", i + 1, name[i], age[i] , rating[i] , country[i], price[i]);
				puts ("=========================================================================");
			}
		} else {
			puts ("===========================================================================");
			puts ("| No   | Name                  | Age  | Rating | Country   | Price          |");
			puts ("============================================================================");
			for (int i = 0; i < count; i++){
				printf ("| %-5d| %-22s| %-5d| %-7d| %-10s| %-10d|\n", i + 1, name[i], age[i] , rating[i] , country[i], price[i]);
				puts ("=========================================================================");
			}
		}
		int number = -1;
		printf ("Please enter number index to be deleted [1 - %d] : ", count);
		number = nextInt ();
		
		char valid = validation ();
		if (valid == 'Y'){
			for (int i = number - 1; i < count -1 ; i++){
				strcpy (name[i], name[i+1]);
				strcpy (country[i], country[i+1]);
				age [i] = age [i+1];
				rating [i] = rating [i+1];
				price [i] = price [i+1];
			}
			puts ("Successfully to deleted player");
			count--;
			enterContinue();
			return;
		}
		
		puts ("Gagal deleted");
		enterContinue();
		return;
		
}
	

int nextInt (){
	int input;
	scanf ("%d", &input);getchar();
	return input;
}

char validation (){
	char valid;
	do {
		printf ("Are yor sure [Y | N] : "); 
		scanf ("%c", &valid); getchar();
	}while ( valid != 'Y' &&
			 valid != 'N');
	return valid;
}

void enterContinue (){
	puts ("Press Enter to continue...");
	getchar();
}

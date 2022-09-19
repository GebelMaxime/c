#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> //pour getch()

int main()
{
	int nb;
	printf("entrez un nombre compris entre 1 et 1000\n");
	scanf(" %d ", &nb);
	printf(" le caractère lu est : %d \n", nb);
	_getch();
}

/*

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h> //pour getch()

int main()
{
	int x = 4, y;
	y = (x > 5) && (x < 8);
	printf("1ere evaluation : \t x = %d y = %d\n ", x, y); //x=4 y=0
	x = y + x + 2;
	y = (x > 5) && (x < 7);
	printf("2eme evaluation : \t x = %d y = %d\n ", x, y); //x=6 y=1
	_getch();

	return 0;

}
*/
/*
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h> //pour exit
#include <conio.h> //pour getch()

int main(int argn, int argvs)
{
	float x;
	printf("entrez votre nombre \n");
	scanf("%f", &x);
	if (!x) //x vaut 0
		printf("erreur de saisie");
	else
		printf("l inverse du nombre est : %f", 1 / x);
	_getch();

}
*/
/*
#include <stdio.h>
#include <conio.h>
int main(int argc, char ** argv)
{
	int N, nbc, n;
	printf("entrez un nombre : ");
	scanf("%d", &N);

	while (nbc != N) {
		nbc += nb;

	}
}
*/
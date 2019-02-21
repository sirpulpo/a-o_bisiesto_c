#include<stdio.h>

void f_portada();
void f_bisiesto(int *);
void f_repetir(int *);

main(){
	int year;
	int check;
  	f_portada();
	do{
  		f_bisiesto(&year);
  		f_repetir(&check);
	}while(check == 1);
	printf("\n\n\tGracias por utilizar este programa vuelva pronto \2\n\n");
}

void f_portada(){
	printf("\n\t\t\tPrograma Bisiesto");
  	printf("\n\t\t\t_________________\n");
  	printf("\n\tEstre programa tiene como objetivo determinar si\n\tun a\xA4o es o no bisiesto dependiendo del\n\tsiguiente criterio:");
  	printf("\n\n\tUn a\xA4o es bisiesto si es divisible entre 4, a menos que sea ");
  	printf("\n\tdivisible entre 100.\n\tSin embargo, si un a\xA4o es divisible entre 100 y ademas es divisible\n\tentre 400, tambien resulta ser bisiesto.\n\n");

  	system("pause");
  	system("cls");
}

void f_bisiesto(int *y){
	printf("\n\t\tDeterminar si un a\xA4o es bisiesto");
    printf("\n\t\t________________________________\t\t");
  	printf("\n\n\nIntrodusca el a\xA4o del cual desea saber si es bisiesto:");
    scanf("%d",y);
    if(((*y % 4 == 0) && (*y % 100 != 0)) || (*y % 400 == 0))
    	printf("\n\t\t\32El a\xA4o es bisiesto\33");
    else
    	printf("\n\t\t\32El a\xA4o NO es bisiesto\33");
}

void f_repetir(int *r){
	do{
		printf("\n\n\250Desea evaluar otro a\xA4o?\n1 - Si\t0 - No\t\20");
		fflush(stdin);
		scanf("%i", r);
		//printf("respuesta %i", *r);
		if(*r > 1 || *r < 0)
			printf("\n\t --> Valor no valido intente de nuevo.\n");
	}while(*r > 1 || *r < 0);
	system("cls");
}

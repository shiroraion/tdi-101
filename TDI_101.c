/*
 ============================================================================
 Name        : 500.c
 Author      : shiro raion
 Version     : beta
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>


 main() {

	   int p ;//,p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11;


	   printf("========================================\n");
	   printf("********* 1 - carre     *************** \n");
	   printf("********  2 - soustraction************* \n");
	   printf("********* 3 - produit    ************** \n");
	   printf("********  4 - surfface   ************** \n");
	   printf("********* 5 -  racine    ************** \n");
	   printf("********  6 - somme       ************* \n");
	   printf("********* 7 - temperature    ********** \n");
	   printf("********  8 - bissecstile ************* \n");
	   printf("********* 9 - poids   ***************** \n");
	   printf("********  10 - absolue  *************** \n");
       printf("********* 11 - ensemble   ************* \n");
       printf("********  12 - paire ****************** \n");  //*/
       printf("********  13 - plus_grand ************* \n");
       printf("********  14 - moyenne  *************** \n");
       printf("********  15 - operations ************* \n");
       printf("********  16 -jour_mois_anne ********** \n");
       printf("********  17 - resistance ************* \n");
       printf("********  18 -    ONCF  *************** \n");
	   printf("========================================\n");
	 printf("donner le choix : ");
	 scanf("%d",&p );

	if( p <6 || p >0){
		printf(" le choix invalide  : ");
	}else {
		switch (p) {
		case 1 :
			carre();break;
		case 2 :
			soustraction();break;
		case 3 :
			produit(); break;
		case 4 :
			surfface();break;
		case 5 :
			racine();break;
		case 6 :
			somme();break;
		case 7 :
			temperature();break;
		case 8 :
			bissecstile();break;
		case 9 :
			poids();break;
		case 10 :
			absolue();break;
		case 11 :
			ensemble();break;
		case 12 :
			paire();break;
		case 13 :
			plus_grand();break;
		case 14 :
			moyenne();break;
		case 15 :
			operations();break;
		case 16 :
			jour_mois_anne();break;
		case 17 :
			resistance();break;
		case 18 :
			oncf();break;

		}

	}

              }
 carre (){
 	int n,c ;
 	printf("Donner la valeur  de n :");
 	scanf("%d",&n);
 	c =n*n;
 	printf("Le carre est : %d",c);

 }
 soustraction(){

	 	int n , m , d = 0 ;
	 	printf("Donner la valeur de  n :");
	 	scanf("%d",&n);
	 	printf("Donner la valeur de m  :");
	 	scanf("%d",&m);
	 	d=n-m;
	 	printf("La difference est : %d",d );


 }
 produit(){
	 int x , y , p = 1 ;
	 	printf("Donner la valeur de  x :");
	 	scanf("%d",&x);
	 	printf("Donner la valeur de y  :");
	 	scanf("%d",&y);
	 	p=x*y;
	 	printf("Le produit  est : %d", p);
 }
 surfface(){
	 int r ; float s ;
	 	printf("Donner la valeur  de r :");
	 	scanf("%d",&r);
	 	s = r*r*3.14;
	 	printf("La surfface est : %.2f",s);

 }
 racine(){

	 int x ;
	 	float rc ;
	 	printf("Donner la valeur  de x :");
	 	scanf("%d",&x);
	 	rc = sqrt(x);

	 	printf("La racine est : %.2f",rc);
 }
 somme(){
	 int a , b , s = 0 ;
	 	printf("Donner la valeur de  a :");
	 	scanf("%d",&a);
	 	printf("Donner la valeur de b  :");
	 	scanf("%d",&b);
	 	s=a+b;
	 	printf("La somme est : %d", s);

 }

 temperature(){
	 int t ;
	  printf( " Donner la valeur du temperature : ");
	  scanf("%d",&t);
	 if (t<-10  || t>120)
	 {printf("La temperature invalide");}
	 else
	 if ( t> 100)
	 {printf("Vapeur ");}
	 else
	  if ( t> 0)
	  {printf("liquide ");}
	  else
	  printf("Glasse");
 }
 bissecstile(){
	 int a ;
	  printf( " Donner l'annee : ");
	  scanf("%d",&a);
	 if (a<1900)
	 {printf("L'annee invalide !! ");}
	 else
	 if (a%4==0 && a%100!=0 || a%400==0)
	 {printf("Annee bissecstile ");}
	 else
	  printf("Annee non bissecstile ");
 }
poids(){

	int t , g ; float pi ;
	printf("Donner 1 pour Homme ou 2 pour Femme :  ") ;
	scanf("%d",&g);
	printf("Donner la taille  : ");
	scanf("%d",&t);
	if(t<120 || t >220 )
	{
		printf("Taille invalide !! ");
	}
	else
		if(g==1)
	{
		pi = (t-100)*0.9 ;
		printf("Le poids ideal de l'homme  : %.2f ",pi );
	 }
	 else
	 if(g==2)
	 {
	 	pi = (t-100)*0.85 ;
		printf("Le poids ideal de la femme  : %.2f ",pi );
	  }

}
absolue(){
	int n , va ;
		printf("Donner la valeur de  n :");
		scanf("%d",&n);
		if(n<0)
		{
			va = -n ;
		}
		else { va = n ;
		}
		printf("La valeur absolue est : %d",va);
}
ensemble(){
	 int a, b;
	 float x ;
	 printf( " Donner la valeur de  a : ");
	 scanf("%d",&a);
	 printf("Donner la valeur de b : ");
	 scanf("%d",&b);
	 if (a==0 && b == 0)
	 {printf("La solution est l'ensemble R");}
	 else
	 if ( a ==0 && b!= 0)
	 {printf("L'ensemble est  vide");}
	 else{
	 	 x=((-b)*(1.0))/a ;
	printf("La solution est  : %.2f",x);
	 }
}
paire(){
	int n ;
		printf("Donner la valeur de n :");
		scanf("%d",&n);
		if(n%2==0)
		{
			printf("le nombre est paire" );
		}
		else
		{ printf("le nombre est impaire");}
}
plus_grand(){
	int a ,b , sup ;
	printf("Donner la valeur du a : ");
	scanf("%d",&a);
	printf("Donner la valeur du b : ");
	scanf("%d",&b);
	if(a>b)
	{
		sup = a ;


	}
	else {
		sup = b ;
	}
	printf("Le plus grand : %d",sup);
}
moyenne(){
	float mg ;
		printf("Donner le moyenne  generale : ");
		scanf("%f",&mg);
		if(mg<0 || mg>20)
		{
		printf("Moyenne incorrecte !!!");
		}
		else

			if(mg>=10)
		{
			printf("Admis");
		}
		else
		{
			printf("Non admis");

		}
}
operations(){
	float a,b,r;
	int choix;
	printf("\t\t²²²²²²²²²²²²²²²²²²²²²²²\n");
    printf("\t\t²-------*Menu*--------²\n");
	printf("\t\t²-------1:Somme-------²\n");
	printf("\t\t²-------2:Produit-----²\n");
	printf("\t\t²----3:Soustraction---²\n");
	printf("\t\t²------4:Division-----²\n");
	printf("\t\t²²²²²²²²²²²²²²²²²²²²²²²\n");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("donner votre choix :");
	scanf("%d",&choix);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    if(choix<1 || choix >4 )
	{
	printf("Choix invalide !!\n ");
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    }
	else {
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("donner la valeur de a :");
	scanf("%f",&a);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	printf("donner la valeur de b :");
	scanf("%f",&b);
	printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	switch(choix)

	{
		case 1 :{r=a+b;printf("la somme est %.f",r);
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");

			break;
		}
		case 2 :{r=a*b;printf("le produit est %.1f",r);
			printf("~~~~~~~~~~~~~~~~~~~~~~~~~\n");

			break;
		}
		case 3 :{r=a-b;printf("la soustraction est %.f",r);
			break;
		}
		case 4 :{if(b==0)printf("division impossible");
		else{r=a/b;printf("la division est %.2f",r);
		}
			break;
		}
		default :{printf("erreur de choix");
			break;
		}
	}
	}

}
jour_mois_anne(){
	int an,m,j;
	int r,jour;

	printf("Donner le nombre :");
	scanf("%d",&jour);

	if (jour  < 0)
	{
	  printf(" Jour invalide !! " );
	}

	else
	{

	 r =jour%365 ; an= jour/365  ; printf("%d annee\t",an);

        m= r/30      ; printf("%d mois\t",m);

     j= r%30  ;printf("%d jour ",j);

	}

}
resistance(){
	int choix;
		float r1, r2 ,re;
		printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
		printf("°°------------------------*Menu*-----------------------°°\n");
		printf("°°                                                     °°\n");
		printf("°°-----------------------1:Serie-----------------------°°\n");
		printf("°°---------------------2:Pararllele--------------------°°\n");
		printf("°°                                                     °°\n");
	    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
		printf("\n | Donner votre Choix: ");
		scanf("%d",&choix);
		  if(choix<1 || choix >2 )
		{
		printf(" \n Choix invalide !!\n ");

	    }
	    else {
	    		printf("\n | Donner la valeur de r1: ");
		scanf("%f",&r1);
		printf("\n | Donner la valeur de r2: ");
		scanf("%f",&r2);
		if(r1<=0 || r2<=0 )
		{
		printf(" \n Valeur invalide !!\n ");

	    } else {
	    		switch(choix)
		{
			case 1 :{ re=r1+r2 ;
		     printf("\n- la resistance equivalent est:%.2f",re);
				break;
			}
			case 2 :{
			re=(r1*r2)/(r1+r2);
			printf("\n- la resistance equivalent est:%.2f",re);

				break;
			}

			default :
				break;

		}
		}

		}
}
oncf(){
	int categorie;
		float d,r,pt,pb;
		printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
		printf("°°------------------------*Menu*-----------------------°°\n");
		printf("°°                                                     °°\n");
		printf("°°----------------------1:Adulte-----------------------°°\n");
		printf("°°----------------------2:Mineur-----------------------°°\n");
		printf("°°----------------------3:Vieux------------------------°°\n");
		printf("°°---------------------4:andicape----------------------°°\n");
		printf("°°                                                     °°\n");
	    printf("°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°\n");
		printf("\n | Donner votre categorie :");
		scanf("%d",&categorie);
		  if(categorie<1 || categorie >4 )
		{
		printf(" \n Categorie invalide !!\n ");

	    }
	    else {
	    		printf("\n | Donner la distance :");
		scanf("%f",&d);
		if(d<1)
		{
		printf(" \n Distance invalide !!\n ");

	    }
	    else {
	    	pt=d/3;

		switch(categorie)
		{
			case 1 :{printf("\n- le prix plein tarif est :%.2f Dh\n",pt);
			r=pt*0;printf("- la reduction est :%.2f Dh\n",r);
			pb=pt-r;printf("- le prix de billet est :%.2f Dh\n",pb);
				break;
			}
			case 2 :{printf("\n- le prix plein tarif est :%.2f Dh\n",pt);
			r=pt*0.5;printf("- la reduction est :%.2f Dh\n",r);
			pb=pt-r;printf("- le prix de billet est :%.2f Dh\n",pb);
				break;
			}
			case 3 :{printf("\n- le prix plein tarif est :%.2f Dh\n",pt);
			r=pt*0.6;printf("- la reduction est :%.2f Dh\n",r);
			pb=pt-r;printf("- le prix de billet est :%.2f Dh\n",pb);
				break;
			}
			case 4 :{printf("\n- le prix plein tarif est :%.2f Dh\n",pt);
			r=pt*0.75;printf("- la reduction est :%.2f Dh\n",r);
			pb=pt-r;printf("- le prix de billet est :%.2f Dh\n",pb);
				break;
			}
			default :
				break;

		}
		}

		}

}

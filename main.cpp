
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int days,members,adults;
char name[50];
char ticket='T';
int nrooms,extrab,roomt,mealt;
int room_c,meal_c;
char lo_h,lo_d,yes;
int sight,dom=1;
int dd1,mm1,yyyy1;
int dd2,mm2,yyyy2;
void bill()
{
	if(mm1==12||mm1==1||mm1==2)
	room_c+=3000;
	if(mm1==6)
	room_c+=2000;
	if(mm1==7||mm1==3||mm1==4)
	room_c-=2000;
	nrooms=members/2;
	system("cls");
	printf("\n\n\n\n");
	printf("\n\t\t\t\tT\tR\tA\tV\tE\tL\tL\tI\tN\tG\n");
	printf("\t\t\t   -----------------------------------------------------------------------------------\n");
	printf("\n\t\t\t\t\t\tP\tI\tR\tA\tT\tE\tS\n\t\t\t\t\t    ----------------------------------------------------------\n");

	printf("\n\n\t\t\t\t\t\t  B\tI\tL\tL\n\t\t\t\t\t\t---------------------------");
	printf("\n\n\t*\tNAME :\t %s",name);
	printf("\n\n\t*\tDEPARTURE DATE :\t %d/%d/%d",dd1,mm1,yyyy1);
	printf("\n\n\t*\tRETURN DATE :\t\t %d/%d/%d",dd2,mm2,yyyy2);
	int cost;float payment=0;
	if(dom==1)
	{
	if(ticket=='A')
    cost=5000;
	else
	cost=2500;
	}
	else
    {
    	cost=15000;
	}
		if(mm1==12||mm1==1||mm1==2)
	printf("\n\n\t*\tAS UHH GOING IN WINTERS SO PRICE RANGE OF HOTELS MAY HIKE BY 3000/- ");
	if(mm1==6)
		printf("\n\n\t*\tAS UHH GOING IN JUNE SO PRICE RANGE OF HOTELS MAY HIKE BY 2000/- ");
	if(mm1==7||mm1==3||mm1==4)
		printf("\n\n\t*\tAS UHH GOING IN NON-HOLIDAY MONTHS SO PRICE RANGE OF HOTELS DISCOUNTED BY 2000/- ");
	printf("\n\n\t\t\t\t\t\t\tQuantity\tPrice\t\tAmount");
	printf("\n\n\t*\tTICKETING\tDEPARTURE\t\t%d\t*\t%d\t\t%d",adults,cost,adults*cost);
	payment+=adults*cost;
	if(members!=adults){
	printf("\n\t\t\t\t\t\t\t%d\t*\t%d\t\t%d",members-adults,cost-500,(members-adults)*(cost-500));
	payment+=(members-adults)*(cost-500);
}
	printf("\n\n\t\t\t\tRETURN\t\t\t%d\t*\t%d\t\t%d",adults,cost,adults*cost);
		payment+=adults*cost;
		if(members!=adults)
		{
	printf("\n\t\t\t\t\t\t\t%d\t*\t%d\t\t%d",members-adults,cost-500,(members-adults)*(cost-500));
	payment+=(members-adults)*(cost-500);
}
	printf("\n\n\t*\tHOTEL\t\tROOM\t\t\t%d\t*\t%d\t\t%d",nrooms,room_c,nrooms*room_c);
	if(extrab>0)
	printf("\n\n\t\t\t\tEXTRA BEDDING\t\t%d\t*\t%d\t\t%d",extrab,1000,extrab*1000);
	printf("\n\n\t\t\t\tMEAL\t\t\t%d\t*\t%d\t\t%d",members,meal_c,members*meal_c);
	
	int amount_h;
 amount_h=nrooms*room_c+extrab*1000+members*meal_c;
		printf("\n\n\t\t\t\tFOR  %d  DAYS\t\t\t\t\t\t%d",days,amount_h*days);
		payment+=amount_h*days;
		if(yes=='y'||yes=='Y'){

		printf("\n\n\t*\tACTIVITES\tSIGHT SEEING\t\t%d\t*\t%d\t\t%d",members,sight,members*sight);
		payment+=members*sight;
	}
		if(lo_h=='y'||lo_h=='Y'){
		
			printf("\n\n\t*\tLOCAL TRAVEL\tHOME\t\t\t%d\t*\t%d\t\t%d",members,200,members*200);
			payment+=members*200;
		}	if(lo_d=='y'||lo_d=='Y'){
		
		if(dom==0){
		
		
		printf("\n\n\t*\tLOCAL TRAVEL\tDESTINATION\t\t%d\t*\t%d\t\t%d",members,1200,members*1200);
		payment+=members*1200;
		}else{
		
			printf("\n\n\t*\tLOCAL TRAVEL\tDESTINATION\t\t%d\t*\t%d\t\t%d",members,200,members*200);
			payment+=members*200;}
		}	printf("\n\n\t----------------------------------------------------------------------------------------");
			float gst;
			gst=(18*payment)/100;
			printf("\n\n\t*\tGST\t\t\t\t\t\t\t%d\%\t\t%.2f",18,gst);
				printf("\n\n\t----------------------------------------------------------------------------------------");
				payment+=gst;
				printf("\n\n\t*\tTOTAL AMOUNT :\t\t\t\t\t\t\t\t%.2f",payment);
					printf("\n\n\t----------------------------------------------------------------------------------------");
	getch();
	system("cls");
	printf("\n\n\n\n\n\n\n\n\n\t\t\t\t\tTHANKS FOR BOOKING,HAVE A SAFE JOURNEY\t\t\t\t\t\t\t\t\t\t");
	getch();
	
}
 void VICTORIA()
{
		system("cls");
	printf("\n\t\t\t\t*******************************\n\t\t\t\t\t  Victoria Hotel\n\t\t\t\t\t   C A N A D A\n\t\t\t\t*******************************\t\t");
    getch();
	printf("\n\n\t*\tModest rooms, suites & apartments in a casual hotel, offering a pool, a spa & 3 restaurants.");
    printf("\n\t*\t3 restaurants and 3 cafes.\n\t*\tFree shuttle to the beach\n\t*\tBasketball and tennis courts\n\t*\tFitness centre\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 14000/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 17500/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 11000/-per night\t\t");   
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]"); 
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available");
	  getch();
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,14000,17500,11000},roomt;
	 scanf("%d",&roomt);
	 if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
	
	
	//printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
	 //scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING(0,1,2,3....)\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\n\t\t->SELECT YOUR MEAL PLAN\t");
	  int meal[5]={0,0,2000,7000,5500},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 2000/-");
	  printf("\n\n\t3-American plan INR 7000/-");
	  printf("\n\n\t4-Modified American plan INR 5500/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	   room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto x;
	  
	  
}
void THE_OAKS_HOTEL()
{
		system("cls");
	printf("\n\t\t\t\t*******************************\n\t\t\t\t\t  The Oaks Hotel\n\t\t\t\t\t   C A N A D A\n\t\t\t\t*******************************\t\t");
    getch();
	printf("\n\n\t*\tModest rooms, suites & apartments in a casual hotel, offering a pool, a spa & 3 restaurants.");
    printf("\n\t*\t3 restaurants and 3 cafes.\n\t*\tFree shuttle to the beach\n\t*\tBasketball and tennis courts\n\t*\tFitness centre\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 14000/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 17500/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 11000/-per night\t\t");   
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]"); 
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available");
	  getch();
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,14000,17500,11000},roomt;
	 scanf("%d",&roomt);
	  if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
//	 printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
//	 scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING(0,1,2,3....)\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\n\t\t->SELECT YOUR MEAL PLAN\t");
	  int meal[5]={0,0,2000,7000,5500},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 2000/-");
	  printf("\n\n\t3-American plan INR 7000/-");
	  printf("\n\n\t4-Modified American plan INR 5500/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	   room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto x;
}
void HOMEWOOD_SUITES()
{
	
		system("cls");
	printf("\n\t\t\t\t********************************\n\t\t\t\t\t  Homewood Suites \n\t\t\t\t\t   C A N A D A\n\t\t\t\t********************************\t\t");
    getch();
	printf("\n\n\t*\tModest rooms, suites & apartments in a casual hotel, offering a pool, a spa & 3 restaurants.");
    printf("\n\t*\t3 restaurants and 3 cafes.\n\t*\tFree shuttle to the beach\n\t*\tBasketball and tennis courts\n\t*\tFitness centre\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 14000/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 17500/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 11000/-per night\t\t");   
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]"); 
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available");
	  getch();
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,14000,17500,11000},roomt;
	 scanf("%d",&roomt);
	  if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
//	 printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
//	 scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING(0,1,2,3....)\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\t\t->SELECT YOUR MEAL PLAN\t");
	  int meal[5]={0,0,2000,7000,5500},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 2000/-");
	  printf("\n\n\t3-American plan INR 7000/-");
	  printf("\n\n\t4-Modified American plan INR 5500/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	   room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto x;
}

void CANADA()
{
	system("cls");
char ticket='A';
char hotel;
x:
printf("\n\n\n\n\tSELECT YOUR HOTEL(Enter First letter of Hotel Name) :-");
printf("\n\n\t*\tVICTORIA [*****]");
printf("\n\n\t*\tTHE_OAKS_HOTEL [***]");
printf("\n\n\t*\tHOMEWOOD_SUITS [****]\t\t->");

scanf(" %c",&hotel);
switch(hotel)
{
case 'v':case 'V':
VICTORIA();
break;
case 'o':case 'O':
THE_OAKS_HOTEL();
break;
case 'h':case 'H':
HOMEWOOD_SUITES();
break;
       default:
       	{
       		printf("\n\n\t*\tENTER A CORRECT CHOICE\t");
       		goto x;
		   }
}
 
system("cls");
	 printf("\n\n\t\t*\tWanna Hangout Somewhere,if interested click 'y'\t\t->");
	 int option;
	 scanf(" %c",&yes);
	 getch();
	 if(yes=='y'||yes=='Y')
	 {
	 	y:
	 	printf("\n\n\t*\t1-\tNIAGARA FALLSt INR 3000/-PER PERSON  ");
	 	printf("\n\n\t*\t2-\tVICTORIA INR 2550/-PER PERSON  ");
	 	printf("\n\n\t\t\tSELECT YOUR OPTION\t\t->");
	 	scanf("%d",&option);
	 	if(option!=1&&option!=2)
	 	{
	 	printf("\n\n\t*\tENTER A CORRECT OPTION\t");
       		goto y;	
		 }
	 		int sig[3]={0,3000,2550};
	 	sight=sig[option];
	 	getch();
	}
	system("cls");
	b:
	 printf("\n\n\t*\tLOCAL TRAVEL");
	    printf("\n\n\t\t*\tHOME STATION\t");
	    if(ticket=='T')
	 	printf("\n\n\t\t\t*\tTO & FROM STATION");
	 	else
	 	printf("\n\n\t\t\t*\tTO & FROM AIRPORT");
	 	printf("\n\n\t\t\tIF NEEDED ,PRESS 'y'\t\t->");
		 scanf(" %c",&lo_h);
		 getch();
	 	printf("\n\n\t\t*\tDESTINATION\t");
	 	if(ticket=='T')
	 	printf("\n\n\t\t\t*\tFROM & TO STATION");
	 	else
	 	printf("\n\n\t\t\t*\tFROM & TO AIRPORT");
	 	
	 	printf("\n\n\t\t\tIF NEEDED ,PRESS 'y'\t\t->");
	 	scanf(" %c",&lo_d);
	 	if('B'==getch())
	 goto b;
	 	printf("\n\n\t\t\tPROCEED TO BILLING\n\t\t\t---------------------");
	 	getch();
	 	bill();
}
void JWMarriott()
{
		system("cls");
	printf("\n\t\t\t\t******************************\n\t\t\t\t  JW Marriott Marquis Hotel \n\t\t\t\t\t    DUBAI\n\t\t\t\t******************************\t\t");
    getch();
	printf("\n\n\t*\tRefined high-rise hotel offering polished quarters, a nightclub & a spa, plus 14 restaurants & bars.");
    printf("\n\t*\t14 restaurants and bars\n\t*\tFrench bistro\n\t*\tTop-floor cocktail bar and a nightclub\n\t*\tSpa with a sauna\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 19500/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 24500/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 16000/-per night\t\t");   
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]"); 
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available\t\t");
	  getch();
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,19500,24500,16000},roomt;
	 scanf("%d",&roomt);
	  if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
//	 printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
//	 scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING(0,1,2,3....)\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\n\t\t->SELECT YOUR MEAL PLAN\t");
	  int meal[5]={0,0,7500,14500,12000},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 4500/-");
	  printf("\n\n\t3-American plan INR 14500/-");
	  printf("\n\n\t4-Modified American plan INR 12000/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	  room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto x;
}
void HYATT()
{
	system("cls");
	printf("\n\t\t\t\t************************\n\t\t\t\t\tHyatt Regency \n\t\t\t\t\t   DUBAI\n\t\t\t\t************************\t\t");
    getch();
	printf("\n\n\t*\tUpscale lodging with a revolving restaurant & karaoke, plus an outdoor pool, a spa & an ice rink.");
    printf("\n\t*\t4 bars and 4 restaurants\n\t*\tRooftop restaurant with an international buffet\n\t*\tCocktail lounge with karaoke\n\t*\tTennis courts\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 18000/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 21000/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 13000/-per night\t\t");   
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]"); 
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available\t\t");
	  getch();
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,18000,21000,13000},roomt;
	 scanf("%d",&roomt);
	  if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
//	 printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
//	 scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING(0,1,2,3....)\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\n\t\t->SELECT YOUR MEAL PLAN\t");
	  int meal[5]={0,0,7000,9500,11000},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 7000/-");
	  printf("\n\n\t3-American plan INR 9500/-");
	  printf("\n\n\t4-Modified American plan INR 11000/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	  room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto x;
}
void Emirates()
{
		system("cls");
	printf("\n\t\t\t\t**********************************\n\t\t\t\t  Emirates Concorde Hotel & Suites\n\t\t\t\t\t     DUBAI\n\t\t\t\t**********************************\t\t");
    getch();
	printf("\n\n\t*\tModest rooms, suites & apartments in a casual hotel, offering a pool, a spa & 3 restaurants.");
    printf("\n\t*\t3 restaurants and 3 cafes.\n\t*\tFree shuttle to the beach\n\t*\tBasketball and tennis courts\n\t*\tFitness centre\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 14000/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 17500/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 11000/-per night\t\t");   
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]"); 
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available\t\t");
	  getch();
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,14000,17500,11000},roomt;
	 scanf("%d",&roomt);
	  if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
//	 printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
//	 scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\n\t\t->SELECT YOUR MEAL PLAN\t");
	  int meal[5]={0,0,2000,7000,5500},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 2000/-");
	  printf("\n\n\t3-American plan INR 7000/-");
	  printf("\n\n\t4-Modified American plan INR 5500/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	  room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto x;
}
void dubai()
{
	system("cls");
 ticket='A';
char hotel;
x:
printf("\n\n\n\tSELECT YOUR HOTEL(Enter First letter of Hotel Name) :-");
printf("\n\n\t*\tHYATT [*****]");
printf("\n\n\t*\tTHE JW MARIOT HOTEL [****]");
printf("\n\n\t*\tEMIRATES [****]\t\t->");
scanf(" %c",&hotel);
switch(hotel)
{
case 'h':case 'H':
HYATT();
break;
case 'j':case 'J':
JWMarriott();
break;
case 'e':case 'E':
Emirates();
break;
       default:
       	{
       		printf("\n\n\t*\tENTER A CORRECT CHOICE\t");
       		goto x;
		   }
}
 
system("cls");
	 printf("\n\n\t\t*\tWanna Hangout Somewhere,if interested click 'y'\t\t->");
	 int option;
	 scanf(" %c",&yes);
	 getch();
	 if(yes=='y'||yes=='Y')
	 {
	 	y:
	 	printf("\n\n\t*\t1-\tBURJ KHALIFAt INR 1500/-PER PERSON  ");
	 	printf("\n\n\t*\t2-\tTHE DUBAI FOUNTAIN INR 1250/-PER PERSON  ");
	 	printf("\n\n\t\t\tSELECT YOUR OPTION\t\t->");
	 	scanf("%d",&option);
	 	if(option!=1&&option!=2)
	 	{
	 	printf("\n\n\t*\tENTER A CORRECT OPTION\t");
       		goto y;	
		 }
	 		int sig[3]={0,1500,1250};
	 	sight=sig[option];
	 	getch();
	}
	system("cls");
	b:
	 printf("\n\n\t*\tLOCAL TRAVEL");
	    printf("\n\n\t\t*\tHOME STATION\t");
	    if(ticket=='T')
	 	printf("\n\n\t\t\t*\tTO & FROM STATION");
	 	else
	 	printf("\n\n\t\t\t*\tTO & FROM AIRPORT");
	 	printf("\n\n\t\t\tIF NEEDED ,PRESS 'y'\t\t->");
		 scanf(" %c",&lo_h);
		 getch();
	 	printf("\n\n\t\t*\tDESTINATION\t");
	 	if(ticket=='T')
	 	printf("\n\n\t\t\t*\tFROM & TO STATION");
	 	else
	 	printf("\n\n\t\t\t*\tFROM & TO AIRPORT");
	 	
	 	printf("\n\n\t\t\tIF NEEDED ,PRESS 'y'\t\t->");
	 	scanf(" %c",&lo_d);
	 	printf("\n\n\t*\tBACK,PRESS B");
	 	if('B'==getch())
	 goto b;
	 	printf("\n\n\t\t\tPROCEED TO BILLING\n\t\t\t---------------------");
	 	getch();
	 	bill();
}

void international()
{
	system("cls");
	dom=0;
	x:
	printf("\n\n\n\t*\tSELECT YOUR COUNTRY(Enter First letter of Country Name):");
	printf("\n\n\n\t\t*\tCANADA");
	printf("\n\n\t\t*\tDUBAI");
	printf("\n\n\t\t\tENTER YOUR op :-\t\t->");
    char option;
    scanf(" %c",&option);
    switch(option)
    {
    	case 'C':case 'c':
    		CANADA();;
    		break;
        case 'D':case 'd':
        	dubai();
        	break;
       default:
       	{
       		printf("\n\n\t*\tENTER A CORRECT CHOICE\t");
       		goto x;
		   }
    }
     

}
void thelalit()
{
	system("cls");
	printf("\n\t\t\t\t*********************\n\t\t\t\t  T H E\t L A L I T\n\t\t\t\t     NEW DEHLI\n\t\t\t\t*********************\t\t");
    getch();
	printf("\n\n\t*\tLuxurious Business Stays");
    printf("\n\t*\tSpa and Wellness\n\t*\tSwimming pool\n\t*\tPower Backup\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 26000/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 23000/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 13000/-per night\t\t");   
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]"); 
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available\t\t");
	  getch();
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,26000,23000,13000},roomt;
	 scanf("%d",&roomt);
	  if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
//	 printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
//	 scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING(0,1,2,3....)\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\n\t\t->SELECT YOUR MEAL PLAN\t");
	  int meal[5]={0,0,3000,10000,8000},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 3000/-");
	  printf("\n\n\t3-American plan INR 10000/-");
	  printf("\n\n\t4-Modified American plan INR 8000/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	  room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto x;
}

void thepark()
{
		system("cls");
	printf("\n\t\t\t\t*********************\n\t\t\t\t  T H E\t P A R K\n\t\t\t\t     NEW DEHLI\n\t\t\t\t*********************\t\t");
    getch();
	printf("\n\n\t*\tLuxurious Business Stays");
    printf("\n\t*\tSpa and Wellness\n\t*\tSwimming pool\n\t*\tPower Backup\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 24000/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 20000/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 13000/-per night\t\t");   
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]"); 
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available\t\t");
	  getch();
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,24000,20000,13000},roomt;
	 scanf("%d",&roomt);
	 if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
//	 printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
//	 scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING(0,1,2,3....)\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\n\t\t->SELECT YOUR MEAL PLAN\t");
	  int meal[5]={0,0,3000,10000,8000},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 3000/-");
	  printf("\n\n\t3-American plan INR 10000/-");
	  printf("\n\n\t4-Modified American plan INR 8000/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	  room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto x;
}
	  

void emperorpalmskarolbagh()
{
		system("cls");
	printf("\n\t\t\t\t***********************************************\n\t\t\t\t  E M P E R O R P A L M S , K A R O L B A G H\n\t\t\t\t\t       NEW DEHLI\n\t\t\t\t***********************************************\t\t");
    getch();
	printf("\n\n\t*\tLuxurious Business Stays");
    printf("\n\t*\tSpa and Wellness\n\t*\tSwimming pool\n\t*\tPower Backup\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 20000/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 19000/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 13000/-per night\t\t");   
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]"); 
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available\t\t");
	  getch();
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,20000,19000,13000},roomt;
	 scanf("%d",&roomt);
	  if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
//	 printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
//	 scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING(0,1,2,3...)\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\n\t\t->SELECT YOUR MEAL PLAN\t");
	  int meal[5]={0,0,3000,10000,8000},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 3000/-");
	  printf("\n\n\t3-American plan INR 10000/-");
	  printf("\n\n\t4-Modified American plan INR 8000/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	  room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\tBACK,PRESS B");
	   if('B'==getch()){
	 goto x;
}
}

void delhi()
{
		system("cls");
	char hotel;
	printf("\n\n\n\n\tAS YOU HAVE OPT FOR DELHI ,AS DISTANCE IS LESS THAN 500km ,SO UHH MAY TRAVEL THROUGH TRAIN ,\n\tSO IF WANT TO TARAVEL BY AIR PRESS 'A'");
	 char t=getch();
	 if(t=='A')
ticket='A';
x:
	 printf("\n\n\n\t\tSELECT YOUR HOTEL(Enter First letter of Hotel Name) :-");
	 printf("\n\n\t*\tTHE LALIT [*****]");
	 printf("\n\n\t*\tTHE PARK[****]");
	 printf("\n\n\t*\tHOTEL EMPERORPALMS, KAROLBAGH[***]\t\t->");
	 scanf(" %c",&hotel);
	 switch(hotel)
	 {
		case 'E':case'e':
		     emperorpalmskarolbagh();
			 break;
	    case 'p':case 'P':
		     thepark();
			 break;
	    case 'l':case 'L':
		     thelalit();
			 break;	
       default:
       	{
       		printf("\n\n\t*\tENTER A CORRECT CHOICE\t");
       		goto x;
		   }
	 		
	 }
	  
	 system("cls");
	 printf("\n\n\t\t*\tWanna Hangout Somewhere,if interested click 'y'\t\t->");
	 int option;
	 scanf(" %c",&yes);
	 getch();
	 if(yes=='y'||yes=='Y')
	 {
	 	y:
	 	printf("\n\n\t*\t1-\tRED FORT\t INR 15/-PER PERSON ");
	 	printf("\n\n\t*\t2-\tLOTUS TEMPLE\t INR 20/-PER PERSON ");
	 	printf("\n\n\t\t\tSELECT YOUR OPTION\t\t->");
	 	scanf("%d",&option);
	 	int sig[3]={0,15,20};
	 	sight=sig[option];
	 	if(option!=1&&option!=2)
	 	{
	 	printf("\n\n\t*\tENTER A CORRECT OPTION\t");
       		goto y;	
		 }
	 	getch();
	}
	system("cls");
	b:
	 printf("\n\n\t*\tLOCAL TRAVEL");
	    printf("\n\n\t\t*\tHOME STATION\t");
	    if(ticket=='A')
	 	printf("\n\n\t\t\t*\tTO & FROM AIRPORT");
	 	else
	 	printf("\n\n\t\t\t*\tTO & FROM STATION");
	 	printf("\n\n\t\t\tIF NEEDED ,PRESS 'y'\t\t->");
		 scanf(" %c",&lo_h);
		 getch();
	 	printf("\n\n\t\t*\tDESTINATION\t");
	 	if(ticket=='A')
	 	printf("\n\n\t\t\t*\tFROM & TO AIRPORT");
	 	else
	 	printf("\n\n\t\t\t*\tFROM & TO STATION");
	 	
	 	printf("\n\n\t\t\tIF NEEDED ,PRESS 'y'\t\t->");
	 	scanf(" %c",&lo_d);
	 	if('B'==getch())
	 goto b;
	 	printf("\n\n\t\t\tPROCEED TO BILLING\n\t\t\t---------------------");
	 	getch();
	 	bill();

}  



void HARDROCK()
{
		system("cls");
	printf("\n\t\t\t\t*******************************\n\t\t\t\t  H A R D   R O C K  H O T E L\n\t\t\t\t\t     G O A\n\t\t\t\t*******************************\t\t");
    getch();
	printf("\n\n\t*\tLuxurious Business Stays");
    printf("\n\t*\tSpa and Wellness\n\t*\tSwimming pool\n\t*\tPower Backup\n\t*\tDeluxe Rooms\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 16000/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 13000/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 9000/-per night\t\t");
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]");
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available\t\t");
	  getch();\
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,16000,13000,9000},roomt;
	 scanf("%d",&roomt);
	  if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
//	 printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
//	 scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING(0,1,2,3....)\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\n\t\t->SELECT YOUR MEAL PLAN\t");
	  int meal[5]={0,0,4500,6000,8000},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 4500/-");
	  printf("\n\n\t3-American plan INR 6000/-");
	  printf("\n\n\t4-Modified American plan INR 8000/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	  room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto x;
}
void CARAVELA()
{
	system("cls");
	printf("\n\t\t\t\t****************************\n\t\t\t\t  C A R A V E L A  H O T E L\n\t\t\t\t\t   G O A\n\t\t\t\t****************************\t\t");
    getch();
	printf("\n\n\t*\tLuxurious Business Stays");
    printf("\n\t*\tSpa and Wellness\n\t*\tSwimming pool\n\t*\tPower Backup\n\t*\tDeluxe Rooms\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 15000/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 12000/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 8000/-per night\t\t");
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]");
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available\t\t");
	  getch();
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,15000,12000,8000},roomt;
	 scanf("%d",&roomt);
	  if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
//	 printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
//	 scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING(0,1,2,3....)\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\n\t\t->SELECT YOUR MEAL PLAN\t");
	  int meal[5]={0,0,3000,5500,7500},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 3000/-");
	  printf("\n\n\t3-American plan INR 5500/-");
	  printf("\n\n\t4-Modified American plan INR 7500/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	  room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto x;
}
void THEHQ()
{
		system("cls");
	printf("\n\t\t\t\t**************************\n\t\t\t\t  T H E   H Q  H O T E L\n\t\t\t\t\t   GOA\n\t\t\t\t**************************\t\t");
    getch();
	printf("\n\n\t*\tLuxurious Business Stays");
    printf("\n\t*\tSpa and Wellness\n\t*\tSwimming pool\n\t*\tPower Backup\n\t*\tDeluxe Rooms\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 14000/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 11000/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 7000/-per night\t\t");
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]");
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available\t* Free Parking\t");
	  getch();
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,14000,11000,7000},roomt;
	 scanf("%d",&roomt);
 if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
//	 printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
//	 scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING(0,1,2,3....)\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\n\t\t->SELECT YOUR MEAL PLAN\t");
	  int meal[5]={0,0,2000,5200,7000},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 2000/-");
	  printf("\n\n\t3-American plan INR 5200/-");
	  printf("\n\n\t4-Modified American plan INR 7000/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	  room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto x;
}

void GOA()
{
	system("cls");
ticket='A';
char hotel;
printf("\n\n\n\n\t\tAS YOU HAVE OPT FOR GOA ,AS DISTANCE IS MORE THAN 500km ,SO UHH MAY TRAVEL THROUGH AIR ,\n\t\tSO IF WANT TO TARAVEL BY RAIL PRESS 'T'");
char t=getch();
if(t=='T')
ticket='T';
x:
printf("\n\n\t\tSELECT YOUR HOTEL(Enter First letter of Hotel Name) :-");
printf("\n\n\t*\tTHE HQ [****]");
printf("\n\n\t*\tCARAVELA BEACH RESORT [*****]");
printf("\n\n\t*\tHARD ROCK HOTEL GOA [***]\t\t->");
scanf(" %c",&hotel);
switch(hotel)
{
case 't':case 'T':
THEHQ();
break;
case 'c':case 'C':
CARAVELA();
break;
case 'h':case 'H':
HARDROCK();
break;	
       default:
       	{
       		printf("\n\n\t*\tENTER A CORRECT CHOICE\t");
       		goto x;
		   }
}
 
system("cls");
	 printf("\n\n\t\t*\tWanna Hangout Somewhere,if interested click 'y'\t\t->");
	 int option;
	 scanf(" %c",&yes);
	 getch();
	 if(yes=='y'||yes=='Y')
	 {
	 	y:
	 	printf("\n\n\t*\t1-\tBAGA BEACH\t INR 150/-PER PERSON  ");
	 	printf("\n\n\t*\t2-\tFORT AGUADA \t INR 15/-PER PERSON  ");
	 	printf("\n\n\t\t\tSELECT YOUR OPTION\t\t->");
	 	scanf("%d",&option);
	 	if(option!=1&&option!=2)
	 	{
	 	printf("\n\n\t*\tENTER A CORRECT OPTION\t");
       		goto y;	
		 }
	 	int sig[3]={0,150,15};
	 	sight=sig[option];
	 	getch();
	}
	system("cls");
	b:
	 printf("\n\n\t*\tLOCAL TRAVEL");
	    printf("\n\n\t\t*\tHOME STATION\t");
	    	if(ticket=='T')
	 	printf("\n\n\t\t\t*\tTO & FROM STATION");
	 	else
	 	printf("\n\n\t\t\t*\tTO & FROM AIRPORT");
	 	printf("\n\n\t\t\tIF NEEDED ,PRESS 'y'\t\t->");
		 scanf(" %c",&lo_h);
		 getch();
	 	printf("\n\n\t\t*\tDESTINATION\t");
	 		if(ticket=='T')
	 	printf("\n\n\t\t\t*\tFROM & TO STATION");
	 	else
	 	printf("\n\n\t\t\t*\tFROM & TO AIRPORT");
	 	
	 	printf("\n\n\t\t\tIF NEEDED ,PRESS 'y'\t\t->");
	 	scanf(" %c",&lo_d);
	 	if('B'==getch())
	 goto b;
	 	printf("\n\n\t\t\tPROCEED TO BILLING\n\t\t\t---------------------");
	 	getch();
	 	bill();
	 	
	 
	 
}

void oldharbour()
{
		system("cls");
	printf("\n\t\t\t\t*********************************\n\t\t\t\t  O L D  H A R B O U R  H O T E L\n\t\t\t\t\t     KERELA\n\t\t\t\t*********************************\t\t");
    getch();
	printf("\n\n\t*\tLuxurious Business Stays");
    printf("\n\t*\tSpa and Wellness\n\t*\tSwimming pool\n\t*\tPower Backup\n\t*\tDeluxe Rooms\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 18000/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 22000/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 11000/-per night\t\t");   
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]"); 
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available\t\t");
	  getch();
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,18000,22000,11000},roomt;
	 scanf("%d",&roomt);
	  if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
	// printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
	 //scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING(0,1,2,3....)\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\n\t\t->SELECT YOUR MEAL PLAN\t");
	  int meal[5]={0,0,2000,9000,7500},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 2000/-");
	  printf("\n\n\t3-American plan INR 9000/-");
	  printf("\n\n\t4-Modified American plan INR 7500/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	  room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto x;
}
void hotelwilton()
{
		system("cls");
	printf("\n\t\t\t\t******************************\n\t\t\t\t  H O T E L   W I L T O N\n\t\t\t\t\t   KERELA\n\t\t\t\t******************************\t\t");
    getch();
	printf("\n\n\t*\tLuxurious Business Stays");
    printf("\n\t*\tSpa and Wellness\n\t*\tSwimming pool\n\t*\tPower Backup\n\t*\tDeluxe Rooms\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 17500/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 19000/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 9000/-per night\t\t");   
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]"); 
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available\t\t");
	  getch();
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,17500,19000,9000},roomt;
	 scanf("%d",&roomt);
 if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
//	 printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
//	 scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING(0,1,2,3....)\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\n\t\t->SELECT YOUR MEAL PLAN\t->");
	  int meal[5]={0,0,2300,8000,7500},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 2300/-");
	  printf("\n\n\t3-American plan INR 8000/-");
	  printf("\n\n\t4-Modified American plan INR 7500/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	  room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto x;
}
void CHRISSIE()
{
		system("cls");
	printf("\n\t\t\t\t*******************************\n\t\t\t\t  C H R I S S I E'S  H O T E L\n\t\t\t\t\t    KERELA\n\t\t\t\t*******************************\t\t");
    getch();
	printf("\n\n\t*\tLuxurious Business Stays");
    printf("\n\t*\tSpa and Wellness\n\t*\tSwimming pool\n\t*\tPower Backup\n\t*\tDeluxe Rooms\t\t\t");
    getch();
    printf("\n\n\t\t\t\tT Y P E   O F  R O O M S\n\t\t\t\t----------------------------");
    printf("\n\t\t1\tBusiness Suite\tINR 16000/-per night");
     printf("\n\t\t2\tExecutive Suite\tINR 18000/-per night");
	  printf("\n\t\t3\tLuxury Suite\tINR 9000/-per night\t\t");   
	  getch();
	  printf("\n\n\t\t[PRICES WILL VARY WITH SEASONS]"); 
	  printf("\n\n\t* Free wifi\t* 24X7 Room Service\t* GST EXTRA\t* Extra Bedding Available\t\t");
	  getch();
	  x:
	  	z:
	 printf("\n\n\t*\tSELECT YOUR ROOM TYPE\t->");
	 int room[4]={0,16000,18000,9000},roomt;
	 scanf("%d",&roomt);
	 if(roomt!=1&&roomt!=2&&roomt!=3){
	 		printf("\n\n\t*\tENTER A GIVEN ROOM TYPE");
	 goto z;
	 }
//	 printf("\n\t*\tENTER NO OF ROOMS REQUIRED\t->");
//	 scanf("%d",&nrooms);
	 printf("\n\t*\tANY EXTRA BEDDING(0,1,2,3....)\t->");
	 scanf("%d",&extrab);
	 m:
	  printf("\n\n\t\t->SELECT YOUR MEAL PLAN\t");
	  int meal[5]={0,0,3000,8200,9000},mealt;
	  printf("\n\t1-Europeon plan INR 0/-");
	  printf("\n\n\t2-Continental plan INR 3000/-");
	  printf("\n\n\t3-American plan INR 8200/-");
	  printf("\n\n\t4-Modified American plan INR 9000/-\t\t->");
	  scanf("%d",&mealt);
	  if(mealt!=1&&mealt!=2&&mealt!=3&&mealt!=4){
	  	printf("\n\n\t*\tENTER A GIVEN PLAN");
	 goto m;
}
	  room_c=room[roomt];
	  meal_c=meal[mealt];
	  printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto x;
}



	  
	  

void kerela()
{
		system("cls");
char ticket='A';
char hotel;
printf("\n\n\n\n\t\tAS YOU HAVE OPT FOR KERALA ,AS DISTANCE IS MORE THAN 500km ,SO UHH MAY TRAVEL THROUGH AIR ,\n\t\tSO IF WANT TO TARAVEL BY RAIL PRESS 'T'");
char t=getch();
if(t=='T')
ticket='T';
x:
printf("\n\n\n\t\tSELECT YOUR HOTEL(Enter First letter of Hotel Name) :-\n");
printf("\n\n\t\t*\tOLD HARBOUR HOTEL [****]");
printf("\n\n\t\t*\tCHRISSIE'S HOTEL [****]");
printf("\n\n\t\t*\tHOTEL WILTON [****]\t\t->");
scanf(" %c",&hotel);
switch(hotel)
{
case 'o':case'O':
oldharbour();
break;
case 'C':case 'c':
CHRISSIE();
break;
case 'W':case 'w':
hotelwilton();
break;	
       default:
       	{
       		printf("\n\n\t*\tENTER A CORRECT CHOICE\t");
       		goto x;
		   }
}
 
system("cls");
	 printf("\n\n\t\t*\tWanna Hangout Somewhere,if interested click 'y'\t\t->");
	 int option;
	 scanf(" %c",&yes);
	 getch();
	 if(yes=='y'||yes=='Y')
	 {
	 	y:
	 	printf("\n\n\t*\t1-\tCHERAI BEACH\t INR 150/-PER PERSON ");
	 	printf("\n\n\t*\t2-\tMARARI BEACH\t INR 100/-PER PERSON  ");
	 	printf("\n\n\t\t\tSELECT YOUR OPTION\t\t->");
	 	scanf("%d",&option);
	 	if(option!=1&&option!=2)
	 	{
	 	printf("\n\n\t*\tENTER A CORRECT OPTION\t");
       		goto y;	
		 }
	 		int sig[3]={0,150,100};
	 	sight=sig[option];
	 	getch();
	}
	system("cls");
	b:
	 printf("\n\n\t*\tLOCAL TRAVEL");
	    printf("\n\n\t\t*\tHOME STATION\t");
	    if(ticket=='T')
	 	printf("\n\n\t\t\t*\tTO & FROM STATION");
	 	else
	 	printf("\n\n\t\t\t*\tTO & FROM AIRPORT");
	 	printf("\n\n\t\t\tIF NEEDED ,PRESS 'y'\t\t->");
		 scanf(" %c",&lo_h);
		 getch();
	 	printf("\n\n\t\t*\tDESTINATION\t");
	 	if(ticket=='T')
	 	printf("\n\n\t\t\t*\tFROM & TO STATION");
	 	else
	 	printf("\n\n\t\t\t*\tFROM & TO AIRPORT");
	 	
	 	printf("\n\n\t\t\tIF NEEDED ,PRESS 'y'\t\t->");
	 	scanf(" %c",&lo_d);
        printf("\n\n\t*\t BACK,PRESS B");
	 if('B'==getch())
	 goto b;
	 	printf("\n\n\t\t\tPROCEED TO BILLING\n\t\t\t---------------------");
	 	getch();
	 	bill();
}

void domestic()
{
		system("cls");
		x:
		printf("\n\n\n\t*\tSELECT YOUR CITY (Enter First letter of City Name):");
	printf("\n\n\n\t\t*\tDElHI");
	printf("\n\n\t\t*\tKERALA");
	printf("\n\n\t\t*\tGOA");
	printf("\n\n\t\t\t\tENTER YOUR op :-\t\t->");
    char option;
    scanf(" %c",&option);
    
    switch(option)
    {
    	case 'd':case 'D':
    		delhi();;
    		break;
        case 'K':case 'k':
        	kerela();
        	break;
        case 'G':case 'g':
        	GOA();
        	 break;
       default:
       	{
       		printf("\n\n\t*\tENTER A CORRECT CHOICE\t");
       		goto x;
		   }
    }
}
int main()
{
	printf("\n\n\n\n");
	printf("\n\t\t\t\tT\tR\tA\tV\tE\tL\tL\tI\tN\tG\n");
	printf("\t\t\t   -----------------------------------------------------------------------------------\n");
	printf("\n\t\t\t\t\t\tP\tI\tR\tA\tT\tE\tS\n\t\t\t\t\t    ----------------------------------------------------------\n");
	getch();
	printf("\n\n\t\t\tENTER YOUR DETAILS :\n");
	d:
	printf("\n\n\tENTER YOUR NAME :\t");
	scanf(" %[^\n]",name);
	getch();
	printf("\n\n\tENTER YOUR EMAIL :\t");
	char email[50];
	int i,f=0;
	scanf(" %[^\n]",email);
	for( i=0;email[i];i++)
	{
		if(email[i]=='@')
		f=1;
	}
	if(f==0){
	printf("ENTER A CORRECT EMAIL ADDERESS\t");
	scanf(" %[^\n]",email);
     }
	getch();
	printf("\n\n\tENTER NO MEMBERS :\t");
	scanf("%d",&members);
	getch();
	printf("\n\n\tENTER NO OF ADULTS :\t");
	scanf("%d",&adults);
  	getch();
	printf("\n\n\tDEPARTURE DATE (dd/mm/yyyy) :\t");
	
	scanf("%d/%d/%d",&dd1,&mm1,&yyyy1);
	getch();
	printf("\n\n\tRETURN DATE (dd/mm/yyyy) :\t");

	scanf("%d/%d/%d",&dd2,&mm2,&yyyy2);
	getch();
	int ndays;
	switch(mm1)
	{
		case 4: case 6: case 9: case 11:
			{
		     ndays=30;
	        }
	        break;
	     case  2:
		 {
		 if(yyyy1%4==0)
		 ndays=29;
		 else
		 ndays=28;	
		  }  
		  break;
		  default :
		  ndays=31;
	}
	 days=0;
	for(i=dd1;i!=dd2;i++)
	{
		if(i==ndays)
		i=0;
		days++;
	}
	days+=1;
	getch();
	printf("\n\n\t*\tBACK,PRESS B");
	if('B'==getch())
	goto d;
		system("cls");
		x:
	printf("\n\n\n\t*\tDOMESTIC\n\n\t*\tINTERNATIONAL");
	printf("\n\n\t->\tENTER YOUR CHOICE\t\t->");
	 char choice;
	scanf(" %c",&choice);
	switch(choice)
     {
     	case 'D':case 'd':
     	domestic();
     	break;
     	case 'I':case 'i':
        international();
       break;
       default:
       	{
       		printf("\n\n\t*\tENTER A CORRECT CHOICE(Enter First letter of Choice)\t");
       		goto x;
		   }
	 }


	
}

#include <stdio.h>
#include <math.h>
#define num 200
// i know u asked for french but u got english so enjoy
//made by ismail bentabet
//hello sir follow me whole I'm presenting this project
//dec or decimal means base 10 
//shadok is base 10
//the concept is easy 
/*the user either chose between dec or shadok then he gives the valuesvand give the correct values then he will get a result based on his choices */
//
//this is the main function 
int main(){
	int overalln;
	overalln = 1;
	while(overalln == 1 && overalln >= 1 && overalln  <=1){
		

	int shadok_or_decimal;
	printf("<------------------------------------->\n");
printf("DecimaltoShadok<1>\n");
printf("ShadoktoDecimal<2>\n");	
	printf("<------------------------------------->\n");
do{
printf("chose one of them 2 \n");
printf("> ");
scanf("%d",&shadok_or_decimal);	
}while(shadok_or_decimal>2 || shadok_or_decimal<0);	
	printf("<------------------------------------->\n");
printf("ADD<1>\n");
printf("SUBSTRACT<2>\n");
printf("DIVIDE<3>\n");
printf("MULTIPLY<4>\n");
printf("MOD<5>\n");
printf("CONVERT<6>\n");
printf("<------------------------------------->\n");
int n ;
do{
printf("chose one  \n");
printf("> ");
scanf("%d",&n);	
}while(n>6 || n<0);




	int number1,number2,number;
char shadotable[num];	
char shadotable1[num];
char shadotable2[num];


int a , b ,numbersh;	

switch(shadok_or_decimal){
	case 1:
		
		switch(n){
	case 1:
			printf("give it now \n");
		scanf("%d",&number1);
		printf("+ \n");
	scanf("%d",&number2);
		Add(number1,number2);
	break;
	case 2:
			printf("give it now \n");
			scanf("%d",&number1);
		printf("- \n");
	scanf("%d",&number2);
		Sou(number1,number2);
		break;
	case 3:
		printf("give it now \n");
			scanf("%d",&number1);
		printf("* \n");
	scanf("%d",&number2);
		
		Mul(number1,number2);
		break;
	case 4:
	
		printf("give it now \n");
			scanf("%d",&number1);
		printf("/ \n");
	scanf("%d",&number2);
		
		Div(number1,number2);
		break;
	case 5:
			printf("give it now \n");
		scanf("%d",&number1);
		printf("% \n");
	scanf("%d",&number2);
	
		Mod(number1,number2);
		break;
	case 6:
				printf("give it now 2\n");
		scanf("%d",&number);
	
		Con(number);
		break;
}
		
		
	break;
	case 2:
switch(n){
	case 1:
			printf("give it now \n");
			scanf("%s",&shadotable1);
			scanf("%s",&shadotable2);
			
		 a = shadoktodec(shadotable1);
			 b = shadoktodec(shadotable2);
 numbersh = a+b;
		
		dectoshadok(numbersh);
			if(numbersh == 0){
			printf("GA");
		}
	break;
	case 2:
			printf("give it now \n");
			scanf("%s",&shadotable1);
			scanf("%s",&shadotable2);
			
		 a = shadoktodec(shadotable1);
			 b = shadoktodec(shadotable2);
 numbersh = a-b;
		
		dectoshadok(numbersh);
		if(numbersh == 0){
			printf("GA");
		}
		break;
	case 3:
			printf("give it now \n");
			scanf("%s",&shadotable1);
			scanf("%s",&shadotable2);
			
		 a = shadoktodec(shadotable1);
			 b = shadoktodec(shadotable2);
 numbersh = a*b;
		
		dectoshadok(numbersh);
		if(numbersh == 0){
			printf("GA");
		}
		break;
	case 4:
	
			printf("give it now \n");
			scanf("%s",&shadotable1);
			scanf("%s",&shadotable2);
			
		 a = shadoktodec(shadotable1);
			 b = shadoktodec(shadotable2);
 numbersh = a/b;
		
		dectoshadok(numbersh);
		if(numbersh == 0){
			printf("GA");
		}
		break;
	case 5:
			printf("give it now \n");
			scanf("%s",&shadotable1);
			scanf("%s",&shadotable2);
			
		 a = shadoktodec(shadotable1);
			 b = shadoktodec(shadotable2);
 numbersh = a%b;
		
		dectoshadok(numbersh);
		
			if(numbersh == 0){
			printf("GA");
		}
		break;
		break;
	case 6:
				printf("give it now 2\n");
		scanf("%d",&shadotable);
	 a = shadoktodec(shadotable1);
	printf("%d\n", a);
		break;
			if(numbersh == 0){
			printf("GA");
		}
}
break;

}
printf("\n");
printf("<------------------------------------->\n");
printf("press 1 to redo it\n");
printf("press any key to exit\n");
scanf("%d",&overalln);

printf("<------------------------------------->\n");

	}

    return 0;  
		
}

//<--------------decimal functions from decimal to shadok----------------->

int dectoshadok(int number){
		int  n ;
	n = 10;
	int remainder , result;
	int  table[n];
	
	result = number;
	int i = 0;
	while(result > 0 && i < n ){
	
		remainder = result % 4; 
		 table[i] = remainder;		
	
		result =  result / 4 ;	
				
		i++;

	}
	
n = i;
		
	int j;
	int table2[n];
	for(i = 0 , j = n-1 ;j >= 0 ; j--,i++){
		table2[i] = table[j]; 
	}
	for(i = 0; i < n ; i++){
		table[i] = table2[i];
	}


printf("\n");
printf("shadok : ");
	for(i = 0; i < n ; i++){
		
			if(table[i] == 0){
				printf("GA");
			}
	if(table[i] == 1){
				printf("BU");

			}
			
				if(table[i] == 2){
				printf("ZO");
			}
			
				if(table[i] == 3){
				printf("MEU");
			}
	}
}

//this is the add function
Add(int number1 , int number2){
	int number = number1 + number2;
	printf("base 10 : %d\n",number);
	return  dectoshadok(number);
}
//this is the substract function
int Sou(int number1 , int number2){
		int number = number1 - number2;
		printf("base 10 : %d\n",number);
	return  dectoshadok(number);
}
//this is the multiplication function 
int Mul(int number1 , int number2){
		int number = number1 * number2;
		printf("base 10 : %d\n",number);
	return  dectoshadok(number);
}
//this is the division function 
int Div(int number1 , int number2){
	int number = number1 / number2;
	printf("base 10 : %d\n",number);
	return  dectoshadok(number);
}
// this is the remaining from the division function
int Mod(int number1 , int number2){
	int number = number1 % number2;
	printf("base 10 : %d\n",number);
	return  dectoshadok(number);
}
int Con(int number){
	return  dectoshadok(number);

}
//<------------------------------->

////<--------------shadok functions or from shadok to decimal----------------->
  int shadoktodec(char shadotable[num]){
int tab[num];
int i;
	int sizeofit1;
	
	for(i = 0  ; i<num ; i++){
			if(shadotable[i] == 'M' & shadotable[i+1] == 'E' && shadotable[i+2] == 'U' || shadotable[i] == 'Z' && shadotable[i+1] == 'O' ||shadotable[i] == 'G' && shadotable[i+1] == 'A' || shadotable[i] == 'B' && shadotable[i+1] == 'U'||shadotable[i] == 'm' & shadotable[i+1] == 'e' && shadotable[i+2] == 'u' || shadotable[i] == 'z' && shadotable[i+1] == 'o' ||shadotable[i] == 'g' && shadotable[i+1] == 'a' || shadotable[i] == 'b' && shadotable[i+1] == 'u'){

	    sizeofit1++;
printf(" ");
	}
				
		}
		
	int sizeofit2 = sizeofit1;
	


int c;
int  zength = 0;
while(zength < num){
	  

for(i = 0 ; i<num ; i++){
	if(shadotable[i] == 'm' && shadotable[i+1] == 'e' && shadotable[i+2] == 'u' || shadotable[i] == 'M' && shadotable[i+1] == 'E' && shadotable[i+2] == 'U') {
		tab[zength] = 3;
		zength++;

	}else
		if(shadotable[i] == 'z' && shadotable[i+1] == 'o' || shadotable[i] == 'Z' && shadotable[i+1] == 'O' ) {
			tab[zength] = 2;
			zength++;
	}else
		if(shadotable[i] == 'g' && shadotable[i+1] == 'a' || shadotable[i] == 'G' && shadotable[i+1] == 'A') {
			tab[zength] = 0;
		zength++;
	}else
	if(shadotable[i] == 'b' && shadotable[i+1] == 'u' || shadotable[i] == 'B' && shadotable[i+1] == 'U') {
		tab[zength] = 1;
		zength++;
}
}

	
}
//new 
int tab2[sizeofit2];


for(i = 0 ; i<sizeofit2 ; i++){
	tab2[i] = tab[i];


}


int j;
int conresnew = 0;


for(i = 0 , j=sizeofit2-1 ; j<=0, i<sizeofit2 ; j-- , i++){

conresnew += tab2[i] *pow(4,j) ;
}

sizeofit1= 0;
sizeofit1= 0;

i= 0;
j= 0;
zength = 0;

return conresnew;
}
    
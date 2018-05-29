#include<stdio.h>
#include<math.h>

void decor()
{
	printf("\n");
	printf("*******************************************************************************");
	printf("\n");
	printf("* 																			  *");
	printf("\n");
	printf("*\ht\ht\ht100%% ACCURATE DAY CALCULATOR						  *");
	printf("\n");
	printf("* 																			  *");
	printf("\n");
	printf("*******************************************************************************");
	printf("\n");
}

void calendar(int dd, int mm, int yy)
{
	int century=yy/100;
	int year=yy%100;
	int day=dd+ (int)floor(2.6*mm-0.2)-2*century+year+(int)floor(year/4)+(int)floor(century/4);
	day%=7;
	switch(day){
		case 0 : 
			printf("Sunday\n");
			break;
		case 1 : 
			printf("Monday\n");
			break;
		case 2 : 
			printf("Tuesday\n");
			break;
		case 3 : 
			printf("Wednesday\n");
			break;
		case 4 : 
			printf("Thursday\n");
			break;
		case 5 : 
			printf("Friday\n");
			break;
		case 6 : 
			printf("Saturday\n");
			break;			
	}
}


int main()
{
	int dd,mm,yy;
	printf("Enter date in dd mm yyyy format : ");
	scanf("%d %d %d",&dd,&mm,&yy);
	
	/*pre-processing the date*/
	
	mm-=2;
	if (mm<=0)
		{
			mm+=12;
			yy--;
		}
	
	decor();
		
	printf("\n");
	
	calendar(dd,mm,yy);
	
	return 0;	
}

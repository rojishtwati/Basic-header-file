//int num1,num2,num3;
/*This header file is writen for Bachelor Student for fun XD
  Title::: EASY IN CODING
  Author:::GOD
  Date:::2001/02/03

*/
//Proggram for largest number
void largestNum(int num1,int num2,int num3){
	if (num1>num2&num1>num3){
	printf("Largest number is %d",num1);
	}
	else if(num2>num1&num2>num3){
	printf("Largest number is %d",num2);
	}
		else
	{printf("Largest number is %d",num3);
}}
//Program for smallest number
void smallestNum(int num1,int num2,int num3){
	if (num1<num2&num1<num3){
	printf("Smallest number is %d",num1);
	}
	else if(num2<num1&num2<num3){
	printf("Smallest number is %d",num2);
	}
		else
	{printf("Smallest number is %d",num3);
}	
}
//Program for middle number 
void middleNum(int num1,int num2,int num3){
	if (num1<num2&num1>num3||num1>num2&num1<num3){
	printf("Middle number is %d",num1);
	}
	else if(num2<num1&num2>num3||num2>num1&num2<num3){
	printf("Middle number is %d",num2);
	}
		else
	{printf("Middle number is %d",num3);
}}	
//Program for odd or even
void printOddEven(int number){

int rem;
rem=number%2;
if(rem==0){
	printf("\nEven number was enter");
}
else
{printf("\nOdd number was enter");
}}
//PRogram for positive or negative
void printNumber(int number){
	if (number>0){printf("The number is Positive");
	}
	else{printf("the number is Negative");
	}
}
//Program for odd or even and return
const char* Readoddeven(int number){

int rem;
rem=number%2;
if(rem==0){
	return"Even ";
}
else
{return "Odd";
}}
//PRogram for positive or negative and return
const char* Readnumber(int number){
	if (number>0){return"Positive";	}
	else{return" Negative";
	}
}
//Program for prime or composite
void printPC(int number){
	int i,count;
	for(i=1;i<number;i++)
	{
		if (number%i==0){count=count+1;
		}}
		
		if (count>2){printf("composite");
		}else{
		printf("prime");
		}
	
}


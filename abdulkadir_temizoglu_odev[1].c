#include <stdio.h>
#include <stdlib.h>
// atoi = string'i integer'a çevirip, integer döndürür. eðer geçerli olmayan dönüþüm gerçekleþtirilirse fonksiyon 0 döndürür.
void write_polynomial3(double a0, double a1, double a2, double a3)
{
		if(a0 > 0.0 && a0 != 1.0 && a0 != -1.0 )
			{
				if((a0==(int)a0))
				{
					printf("%.0lfx^3",a0);
				}
				else if((a0!=(int)a0))
				{
				
				printf("%.1lfx^3",a0);
				}
			
			}
	
	else if(a0 == 1)
		{
		printf("x^3");
		}
	else if ( a0 == -1)
		{
			printf("-x^3");
		}
	else if(a0 < 0)
	{
			if((a0==(int)a0)){
			printf("%.0lfx^3",a0);
			}
			else if((a0!=(int)a0))
			{
			
			printf("%.1lfx^3",a0);
			}
		
		}
////////////////////////////////////////////////////////////////////////////////
	if(a1 > 0.0 && a1 != 1 && a1 != -1)
		{
			if(a1 == (int)a1)
			{
					printf("+%.0lfx^2",a1);
			}
			else if (a1 != (int)a1 )
			{
				printf("+%.1lfx^2",a1);
			}
		}
		else if(a1 == 1)
		{
		printf("+x^2");
		}
	else if ( a1 == -1)
		{
			printf("-x^2");
		}
	else if(a1 < 0)
	{
			if((a1==(int)a1)){
			printf("%.0lfx^2",a1);
			}
			else if((a1!=(int)a1))
			{
			
			printf("%.1lfx^2",a1);
			}
		
		}
////////////////////////////////////////////////////////////////////////////////
if(a2 > 0.0 && a2 != 1 && a2 != -1)
		{
			if(a2 == (int)a2)
			{
					printf("+%.0lfx",a2);
			}
			else if (a2 != (int)a2 )
			{
				printf("+%.1lfx",a2);
			}
		}
		else if(a2 == 1)
		{
		printf("+x");
		}
	else if ( a2 == -1)
		{
			printf("-x");
		}
	else if(a2 < 0)
	{
			if((a2==(int)a2)){
			printf("%.0lfx",a2);
			}
			else if((a1!=(int)a2))
			{
			
			printf("%.1lfx",a2);
			}
		
		}
////////////////////////////////////////////////////////////////////////////////
					if(a3 >0 ){
						
							printf("+%.0lf",a3);
					}
					else if(a3 < 0 ){
						
							printf("%.0lf",a3);
					}




	
}



void write_polynomial4(double b0, double b1, double b2, double b3, double b4)
{
		if(b0 > 0.0 && b0 != 1.0 && b0 != -1.0 )
			{
				if((b0==(int)b0))
				{
					printf("%.0lfx^4",b0);
				}
				else if((b0!=(int)b0))
				{
				
				printf("%.1lfx^4",b0);
				}
			
			}
	
	else if(b0 == 1)
		{
		printf("x^4");
		}
	else if ( b0 == -1)
		{
			printf("-x^4");
		}
	else if(b0 < 0)
	{
			if((b0==(int)b0)){
			printf("%.0lfx^4",b0);
			}
			else if((b0!=(int)b0))
			{
			
			printf("%.1lfx^4",b0);
			}
		
		}
	/////////////////////////////////////////////////////////////////////
	if(b1 > 0.0 && b1 != 1 && b1 != -1)
		{
			if(b1 == (int)b1)
			{
					printf("+%.0lfx^3",b1);
			}
			else if (b1 != (int)b1 )
			{
				printf("+%.1lfx^3",b1);
			}
		}
		else if(b1 == 1)
		{
		printf("+x^3");
		}
	else if ( b1 == -1)
		{
			printf("-x^3");
		}
	else if(b1 < 0)
	{
			if((b1==(int)b1)){
			printf("%.0lfx^3",b1);
			}
			else if((b1!=(int)b1))
			{
			
			printf("%.1lfx^3",b1);
			}
		
		}
		/////////////////////////////////////////////////////////////////////
if(b2 > 0.0 && b2 != 1 && b2 != -1)
		{
			if(b2 == (int)b2)
			{
					printf("+%.0lfx^2",b2);
			}
			else if (b2 != (int)b2 )
			{
				printf("+%.1lfx^2",b2);
			}
		}
		else if(b2 == 1)
		{
		printf("+x^2");
		}
	else if ( b2 == -1)
		{
			printf("-x^2");
		}
	else if(b2 < 0)
	{
			if((b2==(int)b2)){
			printf("%.0lfx^2",b2);
			}
			else if((b1!=(int)b2))
			{
			
			printf("%.1lfx^2",b2);
			}
		
		}
	
	//////////////////////////////////////////////////////////////////
	if(b3 > 0.0 && b3 != 1 && b3 != -1)
		{
			if(b3 == (int)b3)
			{
					printf("+%.0lfx",b3);
			}
			else if (b3 != (int)b3 )
			{
				printf("+%.1lfx",b3);
			}
		}
		else if(b3 == 1)
		{
		printf("+x");
		}
	else if ( b3 == -1)
		{
			printf("-x");
		}
	else if(b3 < 0)
	{
			if((b3==(int)b3)){
			printf("%.0lfx",b3);
			}
			else if((b3!=(int)b3))
			{
			
			printf("%.1lfx",b3);
			}
		
		}
	//////////////////////////////////////////////////////////////////
					if(b4 >0 ){
						
							if((b4==(int)b4)){
							printf("+%.0lf",b4);
							}
							else if((b4!=(int)b4))
							{
							
							printf("+%.1lf",b4);
			}
					}
					else if(b4 < 0 ){
						
							if((b4==(int)b4)){
							printf("%.0lf",b4);
							}
							else if((b4!=(int)b4))
							{
							
							printf("%.1lf",b4);
							}
					}
	
	
	
	
	
	
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void calculate_fibonacci_sequence()

	{
 			while(1)
 			{
 				int val ;
 				char girdi[100];
 				printf("how many elements of the fibonacci sequence you want to see : ");
 				gets(girdi);
 				
 				if(girdi[0] == '*')
 				{
 					break;
				}
				
 				val = atoi(girdi);
 				//printf("String value = %s, Int value = %d\n", girdi, val);
 				
 				if(val == 0)
				 {
 					printf("Please enter positive term(integer)\n");
				 }
				 else if (val < 0)
				 {
				 	printf("Please enter positive term(integer)\n");
				 }
 				else if (val > 0)
 				{
 					printf("\n\n");
		
		int i , n , e1= 1 , e2 = 1  ;
		
		
		for(i = 1 ; i <= val ; i++){
			
		printf("		%d\n",e1);
		n = e1 + e2 ;
		e1 = e2 ;
		e2 = n ;
	
		
			
		}
				}
 			
 				
			 }
 	
 
 	
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int decide()
{
    while (1)
    {
        char input[100];
        printf("Please enter input number (enter * to exit): ");
        scanf("%s", input);

        if (input[0] == '*')
        {
            return 0;
        }

        int num = atoi(input);
        if (num > 0)
        {
            return num;
        }
        else
        {
            printf("You entered an invalid number. Please try again.\n");
        }
    }
}

void decide_perfect_harmonic_number()
{
    int num, j , div = 0 ,sum2 = 0;
    while ((num = decide()) != 0)
    {
        int i, sum = 0;

        for (i = 1; i < num; i++)
        {
            if (num % i == 0)
            {
                sum += i;
            }
        }

        if (sum == num)
        {
            printf("\nIt is a perfect number (%d)\n", num);
        }
        else
        {
            printf("\nIt is not a perfect number (%d)\n", num);
        }
        for(j = 1 ; j <= num ; j++)
	{
		if(num%i == 0 )
		{
			div++;
			sum2 += 1/j ;
			
		}
	}
	
	if((div/sum2)/1 == 0)
	{
		printf("\nit is a Harmonic Divisor Number (%d).\n",num);
	}
	else if ( (div/sum2)/1 != 0)
	{
		printf("\nit is not a Harmonic Divisor Number (%d).\n",num);
	}
        
    }
}
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
void bmi_calculation() 
{
	
	float W , H , sol ;
	
	printf("Enter Your Weight(kg) : ");
	scanf("%f",&W);
	
	printf("Enter Your Height(m) : ");
	scanf("%f",&H);	
	
	sol = W / (H*H) ;
	
if(sol < 16.0)
	{
		printf("Your Category : Severely Underweight");
		
	}
	else if (sol < 18.4 && sol > 16)
	{
		printf("Your Category : Underweight");
	}
	else if (sol < 24.9 && sol > 18.5)
	{
		printf("Your Category : Normal ");
	}
	else if (sol < 29.9 && sol > 25)
	{
		printf("Your Category : Owerweight ");
	}
	else if (sol > 30)
	{
		printf("Your Category : Obese");
	}
	else 
	{
		printf("probabbly you gave unvalid value! ");	
	}
}



/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////


int main()
{
	int question ;
	printf("Enter the number of the question you want to reach : ");
	scanf("%d",&question);
	
	switch(question)
	{
		case 1 :
			write_polynomial4(1.0,-45.6,-3.1,57,7);
			printf("\n\n");
			write_polynomial3(-4.2,-2.7,32.9,-4);
			break;
		case 2 :
			calculate_fibonacci_sequence();
			
			break;
		case 3 :
			
			decide_perfect_harmonic_number();
			
			break ;
		case 4 :
			bmi_calculation() ;
			break;
	}



    return 0;
}















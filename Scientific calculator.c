#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int matrix();
int math();
void Sin();
void Cos();
void Tan();
void Pow();
void Sqrt();
void Exp();

void main()
{
	int in,b=0,c;
   	do
   	{
	    printf("\n\nMenu:-(Press 0 for exit)\n");
    	printf(" 1-arithematic operation\n 2-matrix calculations\n 3-Sin(x)\n 4-Cos(x)\n 5-Tan(x)\n 6-X^Y(power)\n 7-Square Root\n 8-Exponential(e^x) \n select any one option = ");
    	scanf("%d",&in);
    	switch(in)
    	{
    		case 0: exit(0); break;
			case 1: math();  break;
			case 2: matrix(); break;
			case 3: Sin();  break;
			case 4: Cos();  break;
			case 5: Tan();  break;
			case 6: Pow();  break;
			case 7: Sqrt(); break;
			case 8: Exp();  break;
			default:printf("\n\tInvalid Choice !!!!\n");
		}
   }while(1);
}

int math()
{
    int ar[20],i,num,a,sum=0;
	char ch='a';
	float d;

    printf("\n  Type: 1-for addition\n\t2-for subtraction\n\t3-for multiplication\n\t4-for division \n\n\t");  scanf("%d",&a);

    printf("\nEnter the quantity of numbers : ");   scanf("%d",&num);
    for(i=0 ; i<num ; i++)
    {
        printf("\n Enter the number %c : ",ch);
		scanf("%d",&ar[i]);
		ch++;
    }

    switch(a)
	{
        case 1:
			for(i=0 ; i<num ; i++)
        	{
                sum=sum+ar[i];  
            }
            printf("\n\n==========================> Result=%d\n",sum);
            break;

        case 2:
			sum=ar[0];
            for(i=1 ; i<num ; i++)
            {
                sum=sum-ar[i];  
            }
            printf("\n ==========================>Result=%d\n",sum);
            break;

        case 3:
			sum=ar[0];
            for(i=1 ; i<num ; i++)
            {
                sum=sum*ar[i];  
            }
            printf("\n ==========================>Result=%d\n",sum);
            break;

        case 4:
			d=ar[0];
            for(i=1 ; i<num ; i++)
            {
                d=d/ar[i];  
            }
            printf("\n ==========================>Result=%.3f\n",d);
            break;
    }        
}

int matrix()
{  
	int A[10][10]={0},B[10][10]={0},C[10][10]={0},r1,r2,c1,c2,num,i,j,k;
	int a;
    printf("\n What type to calculation you want to do.\n Type :\n ");
    printf("1-for matrix addition \n 2-for matrix subtraction \n 3-for matrix multiplication \n");
    scanf("%d",&a);
    printf("\nEnter the No of rows in Matrix A : ");    scanf("%d",&r1);
    printf("\nEnter the No of columns in Matrix A : ");    scanf("%d",&c1);
    printf("\nEnter the No of rows in Matrix B : ");    scanf("%d",&r2);
    printf("\nEnter the No of columns in Matrix B : ");    scanf("%d",&c2);

	if((( a==1 || a==2) && ( r1!=r2 || c1!=c2 )) || (a==3 && c1!=r2))
	{
		printf("\n\n============================================>Not possible");
		return 0;
	}

    for(i=0;i<r1;i++)
	{
    	for(j=0;j<c1;j++)
    	{
			printf("Enter A[%d][%d] Element : ",i,j);
			scanf("%d",&A[i][j]);
		}
	}

		for(i=0;i<r1;i++)
		{
			printf("\n");
      		for(j=0;j<c1;j++)
      		{
       			printf("%d   ",A[i][j]);  
 			}
		}
	

	printf("\n");

	for(i=0;i<c2;i++)
    {
		for(j=0;j<c2;j++)
    	{
			printf("Enter B[%d][%d] Element : ",i,j);
			scanf("%d",&B[i][j]);
		}
	}
		for(i=0;i<r2;i++)
		{
			printf("\n");
      		for(j=0;j<c2;j++)
      		{
       			printf("%d   ",B[i][j]);
 			}
		}

    switch(a)
	{
	    case 1:
			for(i=0;i<r1;i++)
  			{
				for(j=0;j<c1;j++)  
          		{	C[i][j]=A[i][j]+B[i][j];	}
   			}
			break;
		case 2:
			for(i=0;i<r1;i++)
			{
                for(j=0;j<c1;j++)
                {    C[i][j]=A[i][j]-B[i][j];	}
  			}
			break;
		case 3:
			for(i=0;i<r1;i++)
          	{
				for(j=0;j<c2;j++)
            	{
					for(k=0;k<c1;k++)
            		{	C[i][j]=C[i][j]+A[i][k]*B[k][j];		}
    			}
			}
			break;
	}
	printf("\n==========================>RESULT:-\n");
    for(i=0;i<r1;i++)
    {
		printf("\n");
        for(j=0;j<c1;j++)
      	{	printf("%d   ",C[i][j]);	}
	}
	return 0;
}

void Sin()
{
	float x;
	printf("\nEnter the degree : ");
	scanf("%f",&x);
	printf("\n==========================>    Result=%f",sin(x*3.14/180));
}

void Cos()
{
	float x;
	printf("\nEnter the degree : ");
	scanf("%f",&x);
	printf("\n==========================>    Result=%f",cos(x*3.14/180));
}

void Tan()
{
	float x;
	printf("\nEnter the degree : ");
	scanf("%f",&x);
	printf("\n==========================>     Result=%f",tan(x*3.14/180));
}

void Pow()
{
	int x,y;
	printf("\n\nX^(Y):-\n\nEnter the value of X:");
	scanf("%d",&x);
	printf("\nENter the value of Y :");
	scanf("%d",&y);
	printf("\n\n==========================>     RESULT = %.3f",pow(x,y));
}

void Sqrt()
{
	float x;
	printf("\n\nEnter the Number : ");
	scanf("%f",&x);
	printf("\n\n==========================>     Square Root of %.3f is %.4f",x,sqrt(x));
}

void Exp()
{
	float x;
	printf("\n\nExpression(e^x)\n\t->Enter Value of x : ");
	scanf("%f",&x);
	printf("\n\n\a==========================>   Exponential of %.3f is %f",x,exp(x));
}
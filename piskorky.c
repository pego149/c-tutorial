/* 
 * File:   main.c
 * Author: pego149
 *
 * Created on January 17, 2015, 8:32 PM
 */

#include <stdio.h>


char dajsymbol(int suradnica)
{
	char symbol;
                
	if(suradnica==1)
	{
		symbol=79;
	}
	else if (suradnica==2)
	{
		symbol=88;
	}
	else
	{
		symbol=32;
	}
        
	return symbol;
}

void tlactabulku(int x1y1, int x1y2, int x1y3, int x2y1, int x2y2, int x2y3, int x3y1, int x3y2, int x3y3)
{	

	int zx1y1, zx1y2, zx1y3, zx2y1, zx2y2, zx2y3, zx3y1, zx3y2, zx3y3;
	char symbol;
	
	zx1y1=dajsymbol(x1y1);
	
	zx1y2=dajsymbol(x1y2);
	
	zx1y3=dajsymbol(x1y3);
	
	zx2y1=dajsymbol(x2y1);
	
	zx2y2=dajsymbol(x2y2);
	
	zx2y3=dajsymbol(x2y3);
	
	zx3y1=dajsymbol(x3y1);

	zx3y2=dajsymbol(x3y2);

	zx3y3=dajsymbol(x3y3);

	
	
	printf("|-----|-----|-----|\n");
	printf("|     |     |     |\n");
	printf("|  %c  |  %c  |  %c  |\n", zx1y1, zx1y2, zx1y3);
	printf("|     |     |     |\n");
	printf("|-----|-----|-----|\n");
	printf("|     |     |     |\n");
	printf("|  %c  |  %c  |  %c  |\n", zx2y1, zx2y2, zx2y3);
	printf("|     |     |     |\n");
	printf("|-----|-----|-----|\n");
	printf("|     |     |     |\n");
	printf("|  %c  |  %c  |  %c  |\n", zx3y1, zx3y2, zx3y3);
	printf("|     |     |     |\n");
	printf("|-----|-----|-----|\n");
}

main()
{
	int x;
	x=0;
	int vstupx;
	int vstupy;
	
	int x1y1, x1y2, x1y3, x2y1, x2y2, x2y3, x3y1, x3y2, x3y3;
	x1y1=0;
	x1y2=0;
	x1y3=0;
	x2y1=0;
	x2y2=0;
	x2y3=0;
	x3y1=0;
	x3y2=0;
	x3y3=0;
	int vyhralhrac1, vyhralhrac2;
        vyhralhrac1=0;
        vyhralhrac2=0;

	do
	{
		
		
		
		if (x==0||x==2||x==4||x==6||x==8)
		{
			printf ("Na tahu je hrac 1. Zadajte suradnicu x:");
			scanf ("%i", &vstupx);
			
			printf ("Na tahu je hrac 1. Zadajte suradnicu y:");
			scanf ("%i", &vstupy);
			
			if (vstupx==1&&vstupy==1&&x1y1==0)
			{
				x1y1=1;
			}
			else if (vstupx==1&&vstupy==2&&x1y2==0)
			{
				x1y2=1;
			}
			else if (vstupx==1&&vstupy==3&&x1y3==0)
			{
				x1y3=1;
			}
			else if (vstupx==2&&vstupy==1&&x2y1==0)
			{
				x2y1=1;
			}
			else if (vstupx==2&&vstupy==2&&x2y2==0)
			{
				x2y2=1;
			}
			else if (vstupx==2&&vstupy==3&&x2y3==0)
			{
				x2y3=1;
			}
			else if (vstupx==3&&vstupy==1&&x3y1==0)
			{
				x3y1=1;
			}
			else if (vstupx==3&&vstupy==2&&x3y2==0)
			{
				x3y2=1;
			}
			else if (vstupx==3&&vstupy==3&&x3y3==0)
			{
				x3y3=1;
			}
			else
			{
				printf ("Zadali ste zle suradnice. Opakujte tah.\n");
				x--;
			}
			x++;
			
		}
		else
		{
			printf ("Na tahu je hrac 2. Zadajte suradnicu x:");
			scanf ("%i", &vstupx);
			
			printf ("Na tahu je hrac 2. Zadajte suradnicu y:");
			scanf ("%i", &vstupy);
			
			if (vstupx==1&&vstupy==1&&x1y1==0)
			{
				x1y1=2;
			}
			else if (vstupx==1&&vstupy==2&&x1y2==0)
			{
				x1y2=2;
			}
			else if (vstupx==1&&vstupy==3&&x1y3==0)
			{
				x1y3=2;
			}
			else if (vstupx==2&&vstupy==1&&x2y1==0)
			{
				x2y1=2;
			}
			else if (vstupx==2&&vstupy==2&&x2y2==0)
			{
				x2y2=2;
			}
			else if (vstupx==2&&vstupy==3&&x2y3==0)
			{
				x2y3=2;
			}
			else if (vstupx==3&&vstupy==1&&x3y1==0)
			{
				x3y1=2;
			}
			else if (vstupx==3&&vstupy==2&&x3y2==0)
			{
				x3y2=2;
			}
			else if (vstupx==3&&vstupy==3&&x3y3==0)
			{
				x3y3=2;
			}
			else
			{
				printf ("Zadali ste zle suradnice. Opakujte tah.\n");
				x--;
			}
			x++;
		}
		tlactabulku(x1y1, x1y2, x1y3, x2y1, x2y2, x2y3, x3y1, x3y2, x3y3);
                
                
                if (x1y1==1&&x1y2==1&&x1y3==1)
                {
                    vyhralhrac1=1; 
                }
                else if (x2y1==1&&x2y2==1&&x2y3==1)
                {    
                    vyhralhrac1=1;
                }
                else if (x3y1==1&&x3y2==1&&x3y3==1)
                {    
                    vyhralhrac1=1;

                }
                else if (x1y1==1&&x2y2==1&&x3y3==1)
                {    
                    vyhralhrac1=1;
                }
                else if (x3y1==1&&x2y2==1&&x1y3==1)
                {    
                    vyhralhrac1=1;
                }
                else if (x1y1==1&&x2y1==1&&x3y1==1)
                {    
                    vyhralhrac1=1;                    
                }
                else if (x1y2==1&&x2y2==1&&x3y2==1)
                {    
                    vyhralhrac1=1; 
                }
                else if (x1y3==1&&x2y3==1&&x3y3==1)
                {    
                    vyhralhrac1=1; 
                }
                
                if (vyhralhrac1==1)
                {
                    x=+9;
                    printf ("Vyhral hrac 1.\n");
                }
                
                if (x1y1==2&&x1y2==2&&x1y3==2)
                {
                    vyhralhrac2=1; 
                }
                else if (x2y1==2&&x2y2==2&&x2y3==2)
                {    
                    vyhralhrac2=1;
                }
                else if (x3y1==2&&x3y2==2&&x3y3==2)
                {    
                    vyhralhrac2=1;

                }
                else if (x1y1==2&&x2y2==2&&x3y3==2)
                {    
                    vyhralhrac2=1;
                }
                else if (x3y1==2&&x2y2==2&&x1y3==2)
                {    
                    vyhralhrac2=1;
                }
                else if (x1y1==2&&x2y1==2&&x3y1==2)
                {    
                    vyhralhrac2=1;                    
                }
                else if (x1y2==2&&x2y2==2&&x3y2==2)
                {    
                    vyhralhrac2=1; 
                }
                else if (x1y3==2&&x2y3==2&&x3y3==2)
                {    
                    vyhralhrac2=1; 
                }
                
                if (vyhralhrac2==1)
                {
                    x=+9;
                    printf ("Vyhral hrac 2.\n");
                }
                    
                
	}
	while (x<9);
}


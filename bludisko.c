#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int rnd (int min, int max)
{
	
	int n;
	n=rand() % (max-min+1)+min;
	return n;
}

void str_repeat(char* znak, int pocet, int koniec, int diera)
{
	int i;
	
	for (i = 1; i <= pocet; i++) 
	{
		if(i==diera)
		{
			
			printf(".");		
		}
		else
		{
			printf("%s", znak);
		}
	}	
	
	if(koniec==1)
	{
		puts("\n");
	}
}
void podlaha(int sirka, int diera)
{
    printf("|");
    str_repeat("-",sirka,0,diera);
    puts("|");
}
void poschodie(int sirka,int pd,int pdp,int koniec)
{
    int bodky=pocetBodiek(pd,pdp)+1;
    int medzera1=pocetMedzier1(pd,pdp)-1;
    int medzera2=pocetMedzier2(sirka,bodky,medzera1);
    
if(koniec==1)
    {
        printf(".");
    }
    else
    {
        printf("|");
    } 
    str_repeat(" ",medzera1,0,0);
    str_repeat(".",bodky,0,0);
    str_repeat(" ",medzera2,0,0);
    if(koniec==2)
    {
        puts(".");
    }
    else
    {
        puts("|");
    }
}
int pocetMedzier1(int pd,int pdp)
{
    if(pd<pdp)
    {
        return pd;
    }
    else
    {
        return pdp;
    }
}

int pocetBodiek(int pd,int pdp)
{
    if(pd<pdp)
    {
        return pdp-pd;
    }
    else
    {
        return pd-pdp;
    }
}
int pocetMedzier2(int sirka,int bd, int md)
{
    return sirka-bd-md;
}
main (int argc, char *argv[])
{

	int celkovaSirka=atoi(argv[1]);
	int pocetPoschodi=atoi(argv[2]);
	int sirkaPodlahy=celkovaSirka-2;
	int i=1;
	int j=0;
	int poziciaDiery;
	time_t t;
        int poziciaDieryPredchadzajuca=celkovaSirka-2;
	
	


	
	srand(time(&t));
	
	do
//	for (i=1;i<=pocetPoschodi;i++) 
	{
         
		int z=i%2;
		
		if(i==1)
		{
			printf("|");
			str_repeat("=",sirkaPodlahy,0,0);
			puts("|");
		}
		if(z==0)
		{
			podlaha(sirkaPodlahy,poziciaDiery);
		}	
		if(z!=0)
		{
                    if(j!=pocetPoschodi-1&&j!=0)
                    {
                        poziciaDiery=rnd(1,sirkaPodlahy);
			poschodie(sirkaPodlahy,poziciaDiery,poziciaDieryPredchadzajuca,0);
			j++;
                        poziciaDieryPredchadzajuca=poziciaDiery;
                    }
                    else if(j==pocetPoschodi-1)
                    {
                        poschodie(sirkaPodlahy,1,poziciaDieryPredchadzajuca,1);
                        j++;
                    }
                    else if(j==0)
                    {
                        poziciaDiery=rnd(1,sirkaPodlahy);
			poschodie(sirkaPodlahy,poziciaDiery,poziciaDieryPredchadzajuca,2);
			j++;
                        poziciaDieryPredchadzajuca=poziciaDiery;
                    }                    
                    else 
                    {
                        j++;
                    }
		}
		if(j==pocetPoschodi)
		{
			printf("|");
			str_repeat("=",sirkaPodlahy,0,0);
			puts("|");
			break;
		}
		i++;
	}	
	while(j<=pocetPoschodi);
	
}

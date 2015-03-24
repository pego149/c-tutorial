#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void tlacVrchnuCast(int x)
{
	int y;
	int r;
	int v=x;
	char *hv="*";
	
	for(y=1; y<=x; y++,v--)
		{
				
				for(r=v; r>=1; r--)
				{	
					printf(" ");
				}
			
				for(r=1; r<=y; r++)
				{	
					printf("%s ", hv);
				}
				printf("\n");
		
		}
}
void tlacStrednuCast(int x,int cont)
{
	int y;
	int r;
	char *hv="*";
	
	for(y=1; y<=x; y++)
		{	
			if (cont==1)
			{
				if (y==1)
				{
				
					continue;
				}
			}
			
				for(r=1; r<=x; r++)
				{	
					printf(" %s", hv);
				}
				printf("\n");
		
		}
}
void tlacSpodnuCast(int x, int cont)
{
	int r;
	int z;
	int p=x;
	char *hv="*";
	
	for(z=1; z<=x; z++,p--)
		{
			
			if (cont==1)
			{
				if (z==1)
				{
				
					continue;
				}
			}
			
			
				for(r=z; r>=1; r--)
				{	
					printf(" ");
				}
			
				for(r=1; r<=p; r++)
				{	
					printf("%s ", hv);
				}
				printf("\n");
		
		}
}

main (int argc, char *argv[])
{
	int x=atoi(argv[1]);
	char *orientacia=argv[2];
        
	

	
	
	if(0==strcmp(orientacia,"up"))
	{
		tlacVrchnuCast(x);
	}
	else if(0==strcmp(orientacia,"down"))
	{	
		tlacSpodnuCast(x, 0);
	}
	else if(0==strcmp(orientacia,"both"))
	{	
		tlacVrchnuCast(x);
		
		
		tlacSpodnuCast(x, 1);
	}
        else if(0==strcmp(orientacia,"six"))
	{	
		tlacVrchnuCast(x);

		tlacStrednuCast(x, 1);
		
		tlacSpodnuCast(x, 1);
	}
	else
	{
		printf("Zadali ste zlu orientaciu.");
	}	
}

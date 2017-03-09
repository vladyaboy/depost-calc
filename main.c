#include <stdlib.h>
#include <stdio.h>
int main ()
{

	float vklad;
	int srok;
	int flag;
	
	printf ("Vvedite summu vklada, summa doljna sostavlyat bolshe ili ravna 100.000 \n");
        
	while(1) 
	{
		scanf ("%f" , &vklad);
        	if (vklad>=10000)break;
        	else printf("Vasha summa ne korektna, vvedite zanogo \n");
	}

	printf ("Vvedite srok vklada, srok doljen sostavlat ne bolee 365 dney \n");
	
	while(1)
	{	
		scanf ("%d" , &srok);
		if(srok<=365)break;
		else printf("Ne korektniy srok vklada, vvedite zanogo \n");
	}
	if ((srok>=0) && (srok<=30)) flag=1;
	if ((srok>=31) && (srok<=120)) flag=2;
	if ((srok>=121) && (srok<=240)) flag=3;
	if  ((srok>=241) && (srok<=365)) flag=4;
	if(vklad<100000)
	{
		switch (flag) 
		{
			case 1:vklad-=(((vklad/100)*10)/365)*srok;break;
			case 2:vklad+=(((vklad/100)*2)/365)*srok;break;
			case 3:vklad+=(((vklad/100)*6)/365)*srok;break;
			case 4:vklad+=(((vklad/100)*12)/365)*srok;break;
		}
	}
	else 
	{
		switch (flag) 
		{
			case 1:vklad-=(((vklad/100)*10)/365)*srok;break;
			case 2:vklad+=(((vklad/100)*3)/365)*srok;break;
			case 3:vklad+=(((vklad/100)*8)/365)*srok;break;
			case 4:vklad+=(((vklad/100)*15)/365)*srok;break;
		}
	}
	printf("Summa vklada na konec sroka ravna: %.2f \n" ,vklad);
		
	return 0;
}

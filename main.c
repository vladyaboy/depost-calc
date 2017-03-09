#include <stdlib.h>

int main ()
{

	float vklad;
	int srok;
	
	printf ("Vvedite summu vklada, summa doljna sostavlyat bolshe ili ravna 10000");
        
	while(1) 
	{
		scanf ("%f" , &vklad);
        	if (vklad>=10000)break;
        	else printf("Vasha summa ne korektna, vvedite zanogo\n);
	}

	printf ("Vvedite srok vklada, srok doljen sostavlat ne bolee 365 dney");
	
	while(1)
	{	
		scanf ("%d" , &srok);
		if(srok<=365)break;
		else printf("Ne korektniy srok vklada, vvedite zanogo");
	}

	return 0;
}

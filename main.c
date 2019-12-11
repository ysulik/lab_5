#include <stdio.h>
#include <stdlib.h>


int main() 
{
	int j, i, a;

	
	int block [3] [3]={{1,4,-9}, {5,0,3}, {4,9,1}};
	
	for(i=0; i<3; i++){
		for(j=0; j<3; j++){
			if(block [i][j]==0)
			{
				a=i;
				break;
			}
		}
	}
	printf ("strok %d soderzhit element 0", a );
	
printf("Izmenenna matrica:\n");
	for(i=0;i<3;i++){
		printf("\n");
		for(j=0;j<3;j++){
	    block[i][j]=block[i][j]-block[a-1][0];
	    printf("%d\t",block[i][j]);
}
}	
	

	return 0;
}

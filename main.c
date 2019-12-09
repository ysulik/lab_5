#include <stdio.h>
int main() 
{
	int i,j,zero,copy1,copy2,copy3;
	zero=0;
	copy3=0;
	copy2=0;
	copy1=0;
	int block[3][4]={{1,1,3,0},{4,0,5,2},{3,3,3,2}};
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			if(block[i][j]==0){
				zero++;
			}
		}
	}
	
	
		for(j=0;j<4;j++){
			if(block[0][j]==block[0][j+1]){
				copy1++;
			}
		}
		for(j=0;j<4;j++){
			if(block[1][j]==block[1][j+1]){
				copy2++;
			}
		}
		for(j=0;j<4;j++){
			if(block[2][j]==block[2][j+1]){
				copy3++;
			}
		}
	printf("Kol-vo strok s 0 elementami- %d\n",zero);
	if(copy1>copy2&copy1>copy3)printf("Naibol'shee chislo povtoreniy v 1 stroke'");
	else if(copy2>copy3) printf("Naibol'shee chislo povtoreniy vo 2 stroke");
	else printf("Naibol'shee chislo povtoreniy v 3 stroke");
	
	return 0;
} 



#include<stdio.h> 
#include<stdlib.h> 
#include<math.h> 
#define size 3
int main() 
{ 
int i,j,c=0; 
int block[size][4]={{1,-2,3, 5}, {4,-5,6, -11}, {7,-8,9,-7}}; 
for(i=0;i<1;i++){ 
for(j=0;j<size;j++){ 
if (block[i][j]<0) c++; 
} 
} 
for(i=1;i<2;i++){ 
for(j=0;j<size;j++){ 
if (block[i][j]<0) c++; 
} 
} 
for(i=2;i<3;i++){ 
for(j=0;j<size;j++){ 
if (block[i][j]<0) c++; 
} 
} 

for(i=3;i<4;i++){ 
for(j=0;j<size;j++){ 
if (block[i][j]<0) c++; 
} 
}
if(c>=size)
{ 
printf("Izmenennaya matrica");
for(i=0;i<size;i++){ 
printf("\n"); 
for(j=0;j<size;j++){ 
block[i][j]=-1*block[i][j]; 
printf("%d\t",block[i][j]);
}
}
}
return 0;
}


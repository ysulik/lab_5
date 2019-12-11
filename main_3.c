#include <stdio.h>
 
int n,m,i,j,save,lulz;
 
int main() {
 
    printf("Kolichestvo strok: ");
    scanf("%d", &n);
    printf("Kolichestvo stolbcov: ");
    scanf("%d", &m);
 
    int a[n+1][m+1];
 
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
        {
            scanf("%d", &a[i][j]);
            if(a[i][j]==0 && save==0) save=i;
        }
    }
 
    printf("Null v stroke %d\n", save);
 
    lulz=a[save][1];
 
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++) a[i][j]-=lulz;
    }
 
    printf("Itogovaya matrica:\n");
 
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++) printf("%d ", a[i][j]);
        printf("\n");
    }
 
    return 0;
}

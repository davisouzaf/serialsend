#include <stdio.h>
#include <limits.h>

/*
falta implementar a alocação dinamica da matriz c

*/

void serialsend(int x,int y, unsigned char c[8][8]){
        int i,j;
        //primeiro converte a parte do primeiro inteiro
        for(i=3;i>=0;i--){
            for (j=7;j>=0;j--) {
                if(x%2==0){
                    c[i][j]='0';
                }
                else {
                    c[i][j]='1';
                }
                x/=2;
            }
        }
        for (i=7;i>=4;i--) {
            for (j=7;j>=0;j--) {
                if(y%2==0){
                    c[i][j]='0';
                }
                else {
                    c[i][j]='1';
                }
                y/=2;
            }
        }
        for(i=0;i<8;i++){
            for(j=0;j<8;j++){
                printf("%c ",c[i][j]);
            }
            printf("\n");
        }
}
int main()
{
    int x,y;
    unsigned char c[8][8];
    printf("Digite dois numeros: \n");
    scanf("%d",&x);
    scanf("%d",&y);
    serialsend(x,y,c);
    int i,j;
    printf("\n\n\n");
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf("%c ",c[i][j]);
        }
        printf("\n");
    }
    return 0;
}

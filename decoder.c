#include <stdio.h>
#define N 300
#define ROW 100

int main(void){
	int key,row = 0,j=0,i=0;
	int itemp,jtemp;
	char message[ROW][N],ch;
	printf("enter the key\n");
	scanf("%d",&key);

	while(row < key || ch != EOF){
		while((ch = getchar()) != '\n'){
			message[i][j]  = ch;
			i++;
		}
		j++;
		ch = getchar();
	}

itemp = i;
jtemp = j;

	for(i = 0;i < itemp;i++){
		for (int j = 0; j < jtemp; j++)
		{
			printf("%c",message[i][j]);
		}
		printf("\n");
	}

return 0;
}

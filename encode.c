/* this program encodes a message wiht an input key from the user.press enter if you want to end the message and start encoding. */

#include <stdio.h>
#define N 300
#define ROW 100

int main(void){
	int key;
	int i=0,j,temp,k=0;
	char message[N],ch;
	printf("Enter the key: ");
	scanf("%d",&key);
	char rec[ROW][key];
	printf("Enetr the message:\n");
	//scanf(" %[^\n]s", message);
	while(scanf("%c",&message[i++]) != EOF);

	printf("this is the message: %s\n",message);


	while(message[k] != '\0'){
		for(i = 0;i < ROW;i++){
			if (message[k] == '\0')
				break;
			for(j = 0;j < key;j++){
				rec[i][j] = message[k];
				k++;
				// printf("%c",rec[i][j]);		
				if (message[k] == '\0')
					break;
			}
		}

	}
	
	//printf("test\n");	
	//i = 0;
	//while(message[i] != '\0'){
	//printf("%c",message[i]);
	//i++;
//}


temp = i;

for (int i = 0; i < key; ++i)
{
	for (int j = 0; j < temp; ++j)
	{
		printf("%c",rec[i][j]);
	}
	printf("\n");
}


printf("\n");
//printf("here is the encoded message\n");
for (int i = 0; i < key; i++)
{
	for(j = 0;j < temp;j++){
		printf("%c",rec[j][i]);
	}
	printf("\n");
}


//i uuaoe kp


	return 0;
}


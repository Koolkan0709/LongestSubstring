#include <stdio.h>
#include <string.h>

int main(){
	int max=0;
	char str[100];
	
	printf("Enter string: ");
	scanf("%s",str);
	int len = strlen(str);
	
	for (int i =0;i<len;i++){
		int visited[256] = {0};
		int cur=0;
		
		for (int j =i;j<len;j++){
			int str1 = (int)str[j];
			
			if (visited[str1]==1){
				break;
			} else {
				cur++;
				visited[str1]=1;
				if (cur>max){
					max=cur;
				}
			}
		}
	} 
	printf("Longest subtring without repeating is: %d",max);
}

// Headers
#include<stdio.h>
#include<math.h>
#include<stdlib.h>

// Program Variables
int compareRegister = 0;
int var1 = 0;
int var2 = 0;
int var3 = 0;
int var4 = 0;
int var5 = 0;
int var6 = 0;
int var7 = 0;
int var8 = 0;
int var9 = 0;
int var10 = 0;
int var11 = 0;
int var12 = 0;
int var13 = 0;
int var14 = 0;
int var15 = 0;

// Program begins

int main(){
	var1 = 0;
	if(var1 == 0){
		scanf("%d",&var1);
	}
	var2 = var1;
	var3 = 0;
	var4 = 0;
	do{
		var1 = 0;
		if(var1 == 0){
			scanf("%d",&var1);
		}
		var3 = var3 + var1;
		var4 = var4 + 1;
		compareRegister = var4 - var2;
		if(compareRegister >= 0){ 
			break; 
		}
	} while(1);
	var1 = 1;
	var2 = var3;
	if(var1==1){ 
	 	printf("%d",var2); 
	} 
	exit(0);
	return 0;
}


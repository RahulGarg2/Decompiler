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
	var8 = 0;
	var1 = 0;
	if(var1 == 0){
		scanf("%d",&var1);
	}
	var7 = var1;
	var2 = 0;
	var3 = 1;
	compareRegister = var7 - 0;
	if(compareRegister == 0){
		var7 = 20;
	}
	do{
		var2 = var3 + var2;
		var3 = var2 - var3;
		var1 = 1;
		if(var1==1){ 
		 	printf("%d",var2); 
		} 
		var1 = ' ';
		printf("%c" ,var1); 
		var8 = var8 + 1;
		compareRegister = var8 - var7;
	} while(compareRegister != 0);
	exit(0);
	return 0;
}


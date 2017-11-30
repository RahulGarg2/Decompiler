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
	var3 = var1;
	var4 = 0;
	var5 = 1;
	var7 = 0;
	var8 = 10;
	var9 = 0;
	do{
		compareRegister = var3 - 1;
		if(compareRegister <= 0){ 
			break; 
		}
		var5 = var5 + var4;
		var4 = var5 - var4;
		var5 = var5 - var4;
		var5 = var5 + var4;
		var3 = var3 - 1;
		compareRegister = var3 - 1;
	} while(1);
	var5 = var4;
	do{
		compareRegister = var5 - 0;
		if(compareRegister <= 0){ 
			break; 
		}
		var3 = 0;
		var6 = 0;
		do{
			var5 = var5 - 10;
			compareRegister = var5 - 0;
			if(compareRegister < 0){ 
				break; 
			}
			var3 = var3 + 1;
		} while(1);
		var6 = var5 + 10;
		var9 = var7 * var8;
		var7 = var9;
		var7 = var7 + var6;
		var5 = var3;
	} while(1);
	var1 = 1;
	var2 = var7;
	if(var1==1){ 
	 	printf("%d",var2); 
	} 
	exit(0);
	return 0;
}


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
void fnstarts();

void fnstarts(){
	do{
		compareRegister = var2 - var1;
		if(compareRegister > 0){ 
			break; 
		}
		var3 = var2 * var3;
		var2 = var2 + 1;
	} while(1);
	return;
}

int main(){
	var1 = 10;
	var3 = 1;
	var2 = 1;
	fnstarts();
	printf("%d",var3);
	var3 = 3;
	return 0;
}


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
void fn();

void fn(){
	var2 = var2 + 1;
	compareRegister = var2 - 10;
	if(compareRegister < 0){
		var1 = 0;
		fn();
	}
	return;
}

int main(){
	var1 = 0;
	if(var1 == 0){
		scanf("%d",&var1);
	}
	var2 = var1;
	fn();
	var1 = 1;
	if(var1==1){ 
	 	printf("%d",var2); 
	} 
	return 0;
}


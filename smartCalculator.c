#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	char inputStr[10];
	int checkInput = 0;
	int totalNum = 0;
	int currNum = 0;
	int outputNum = 0;
	int currNumValue = 0;
	char confirm[10];
	
	getOperation:
		printf("Hello, Welcome to Calculator.What mathematic operations can we help you?\n");
		scanf("%s", inputStr);
		getchar();
	main:
		if(strcmp(inputStr, "Sum") == 0 || strcmp(inputStr, "sum") == 0 || strcmp(inputStr, "Addition") == 0 || strcmp(inputStr, "addition") == 0 || strcmp(inputStr, "Add") == 0 || strcmp(inputStr, "add") == 0){
			printf("All right. How many numbers you wish to sum?\n");
			scanf("%d", &totalNum); getchar();
			for(currNum = 0; currNum < totalNum; currNum++){
				printf("Enter the value of number for input %d:", currNum + 1);
				scanf("%d", &currNumValue); getchar();
				outputNum += currNumValue;
			}
			printf("Total sum of the %d numbers you input is %d.\n", totalNum, outputNum);
			
			goto confirmAfterOperation;
		}else if(strcmp(inputStr, "Substract") == 0 || strcmp(inputStr, "substract") == 0 || strcmp(inputStr, "Substraction") == 0 || strcmp(inputStr, "substraction") == 0){
			printf("All right. How many numbers you wish to substract?\n");
			scanf("%d", &totalNum); getchar();
			for(currNum = 0; currNum < totalNum; currNum++){
				printf("Enter the value of number for input %d:", currNum + 1);
				scanf("%d", &currNumValue); getchar();
				if(currNum == 0){
					outputNum = currNumValue;
				}else{
					outputNum -= currNumValue;
				}
			}
			printf("Total substraction of the %d numbers you input is %d.\n", totalNum, outputNum);
			goto confirmAfterOperation;
		}else if(strcmp(inputStr, "Multiply") == 0 || strcmp(inputStr, "multiply") == 0 || strcmp(inputStr, "Multiplication") == 0 || strcmp(inputStr, "multiplication") == 0){
			printf("All right. How many numbers you wish to multiple?\n");
			scanf("%d", &totalNum); getchar();
			for(currNum = 0; currNum < totalNum; currNum++){
				printf("Enter the value of number for input %d:", currNum + 1);
				scanf("%d", &currNumValue); getchar();
				if(currNum == 0){
					outputNum = currNumValue;
				}else{
					outputNum *= currNumValue;
				}
			}
			printf("Total multiplication of the %d numbers you input is %d.\n", totalNum, outputNum);
			goto confirmAfterOperation;
		}else if(strcmp(inputStr, "Division") == 0 || strcmp(inputStr, "division") == 0 || strcmp(inputStr, "Divide") == 0 || strcmp(inputStr, "divide") == 0){
			printf("All right. How many numbers you wish to Divide?\n");
			scanf("%d", &totalNum); getchar();
			for(currNum = 0; currNum < totalNum; currNum++){
				printf("Enter the value of number for input %d:", currNum + 1);
				scanf("%d", &currNumValue); getchar();
				if(currNum == 0){
					outputNum = currNumValue;
				}else{
					outputNum /= currNumValue;
				}
			}
			printf("Total division of the %d numbers you input is %.2f.\n", totalNum, (float)outputNum);
			goto confirmAfterOperation;
		}else if(strcmp(inputStr, "Remainder") == 0 || strcmp(inputStr, "remainder") == 0 || strcmp(inputStr, "Modulo") == 0 || strcmp(inputStr, "modulo") == 0){
			printf("All right. How many numbers you wish to modulo?\n");
			scanf("%d", &totalNum); getchar();
			for(currNum = 0; currNum < totalNum; currNum++){
				printf("Enter the value of number for input %d:", currNum + 1);
				scanf("%d", &currNumValue); getchar();
				if(currNum == 0){
					outputNum = currNumValue;
				}else{
					outputNum %= currNumValue;
				}
			}
			printf("Total modulo of the %d numbers you input is %.2f.\n", totalNum, (float)outputNum);
			goto confirmAfterOperation;
		}else{
			printf("Sorry, command is not recognized. please input operators command name correctly.\n");
			goto getOperation;
		}
	confirmAfterOperation:
				printf("Do you wish to continue using the app?\n");
				scanf("%s", confirm); getchar();
				if(strcmp(confirm, "Yes") == 0 || strcmp(confirm, "YeS") == 0 || strcmp(confirm, "yes") == 0 || strcmp(confirm, "YEs") == 0 || strcmp(confirm, "yeS") == 0 || strcmp(confirm, "yES") == 0 || strcmp(confirm, "yEs") == 0 || strcmp(confirm, "YES") == 0){
					goto getOperation;
				}else if(strcmp(confirm, "No") == 0 || strcmp(confirm, "no") == 0 || strcmp(confirm, "nO") == 0 || strcmp(confirm, "NO") == 0){
					goto end;
				}else{
					printf("Sorry, command is not recognized. please input command yes or no.\n");
					goto confirmAfterOperation;
				}
	end:
		printf("Thank you for using this calculator. Have a nice day!\n");
	return 0;
}

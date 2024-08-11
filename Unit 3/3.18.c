#include <stdio.h>
int main(){
	
	int account;
	float beginningBalance,totalCharges,totalCredits,creditLimit,newBalance;
	
	printf("Enter account number:");
	scanf("%d",&account);

	while(account!=-1){
	
	printf("Enter beginning balance:");
	scanf("%f",&beginningBalance);
	printf("Enter total charges:");
	scanf("%f",&totalCharges);
	printf("Enter total credits:");
	scanf("%f",&totalCredits);
	printf("Enter credit limit:");
	scanf("%f",&creditLimit);	
	
	newBalance=(beginningBalance+totalCharges-totalCredits);
	printf("Account number:%d\n",account);
	printf("Credit Limit:%f\n",creditLimit);
		if(newBalance>creditLimit){
	printf("Balance:%f\n",newBalance);
	printf("Credit Limit Exceeded.\n");
		}
		
	printf("Enter account number:",account);
	scanf("%d",&account);
	}

	return 0;
}

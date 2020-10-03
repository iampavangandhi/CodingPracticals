#include<iostream>
using namespace std;

int billAmount(int sweater, int compGame, int bracelet, int refundPrice, int refundedItems){
	int sweaterPrice = 68;
	int compGamePrice = 75;
	int braceletPrice = 43;
	int rebate;
	if(refundedItems>=1){
		rebate = 10;
	}
	
	int bill = sweater*sweaterPrice + compGame*compGamePrice + bracelet*braceletPrice
	 - refundPrice*refundedItems - rebate;
	return bill;
}

int main()
{
	int sweater = 3;
	int compGame = 1;
	int bracelet = 2;
	
	int bill = billAmount(sweater, compGame, bracelet, 43 ,1);
	cout<<bill;
	
	
}

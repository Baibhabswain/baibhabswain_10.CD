#include"stdio.h"
#include"math.h"
double payment(double principal,double dn_pay,double rate,int no,double price)
{
	principal=price-dn_pay;
	rate=(rate/12)*100;
	return (rate*principal)/(1-pow((1+rate),-no);
}
main()
{
	double price,rate,dn_pay;
	int no;
	printf("Please enter the price \n");
        scanf("%lf",&price);
	printf("Please enter the down-payment price \n");
	scanf("%lf",&dn_pay);
	printf("Please enter the anual rate interest \n");
	scanf("%lf",&rate);
	printf("Please enter the number of payments \n");
	scanf("%d",&no);
	printf("The payment is \n %f",payment(principal,dn_pay,rate,no,price))	
}

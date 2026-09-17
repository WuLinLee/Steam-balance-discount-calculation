#include <stdio.h>
int main(){double c,s,f=0.13;char l[99];int n;
	while(1){printf("\n成本 售价 费率(默认0.13,0 0 0退出): ");
		fgets(l,sizeof(l),stdin);n=sscanf(l,"%lf%lf%lf",&c,&s,&f);
		if(n==0 || n==1){c=s=f=0; continue;}
		if((n==3&&c==0&&s==0&&f==0)||(n==2&&c==0&&s==0))break;
		if(n==3){if(f<=0)f=0.13;}else if(n==2){f=0.13;}else continue;
		double b=s*(1-f);if(b<=0){printf("无效\n");continue;}
		printf("费率:%.2f%% | 到手:%.2f | 折扣:%.4f\n",f*100,b,c/b);}
	return 0;}

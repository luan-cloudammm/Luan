#include<stdio.h>
#include<math.h>
int ktra(int k)
{
	int dem=0;
	if(k<2) return 0;
	for(int i=2;i<=sqrt(k);i++)
		if(k%i==0) dem++;
	if(dem==0) return 1;
	else return 0;			
}
int dem(int a[],int l,int r)
{
	if(l == r && ktra(a[l])  == 1){
		return 1;
	}
	if(l == r && ktra(a[l])  ==0){
		return 0;
	}
	if( l > r ){
		return 0;
	}
	else
	{
		int m=(l+r)/2;
		if(ktra(a[m])==1)
			return 1+dem(a,l,m-1)+dem(a,m+1,r);
		else 
			return dem(a,l,m-1)+dem(a,m+1,r);
	}
}

int main()
{
	#ifndef ONLINE_JUDGE
	   freopen ("CAU1.INT", "r", stdin);
		freopen ("CAU1.OUT", "w", stdout);
	#endif
	int n,a[n];
	scanf("%d",&n);
	for(int i=0;i<n;i++)
		{
			scanf("%d",&a[i]);
		} 
	printf("\nTong so nguyen to co trong day la: %d",dem(a,0,n-1));
	return 0;
} 

#include<stdio.h>
int main()
{
	int m,n,p,q,c,d,k,sum=0;
	int frist[10][10], second[10][10],multiply[10][10];
	printf("enter the no.of rows and columns od the frist matrix\n");
	scanf("%d%d",&m,&n);
	printf("enter the elements of frist matrix\n");
	for(c=0;c<m;c++)
	    for(d=0;d<n;d++)
	         scanf("%d",&frist[c][d]);
    printf("enter the no.of rows and column of second matrix\n");
    scanf("%d%d",&p,&q);
    if(n!=p)
        printf("the multiplication isnt possible.\n");
    else
    {
    	printf("enter elements of second matrix\n");
    	for(c=0;c<p;c++)
    	     for(d=0;d<q;d++)
   	             scanf("%d",&second[c][d]);
	   for (c=0;c<m;c++)
	  {
	  	for(d=0;d<q;d++)
	  	{
	  		for(k=0;k<p;k++)
	  		{
	  			sum=sum+frist[c][k]*second[k][d];
			  }
			  multiply[c][d]=sum;
			  sum=0;
		  }
		  printf("product of the matrices:\n");
		  for(c=0;c<m;c++)
		  {
		  	for(d=0;d<q;d++)
		  	    printf("%d\t",multiply[c][d]);
		  	printf("\n");
		} }
	}
	return 0;	  
    }

#include<stdio.h>
#include<iostream>
int panduan(int qw,int er,int ty)
{ 
	 
  
  if(qw==0)
  {
    printf("�����պ���������");  
  }
  else if(qw<12&&qw>0)
  {
  printf("�������ڸ߳��ڵ�%d��",qw);
  
  }
  else if(qw==12)
  {
    printf("�����պô����ٽ���");  
  
  }
  else if(qw>12)
  {
   printf("�������ڵͳ��ڵ�%d��",qw);  
  }
  

    
 
  if(er==0)
  {
    printf("�����պ���������");  
  }
  else if(er<14&&er>0)
  {
  printf("�������ڸ߳��ڵ�%d��",er);
  
  }
  else if(er==12)
  {
    printf("�����պô����ٽ���");  
  
  }
  else if(er>12)
  {
   printf("�������ڵͳ��ڵ�%d��",er);  
  }
 
   
  
  if(ty==0)
  {
    printf("�����պ���������");  
  }
  else if(ty<17&&ty>0)
  {
  printf("�������ڸ߳��ڵ�%d��",ty);
  
  }
  else if(ty==17)
  {
    printf("�����պô����ٽ���");  
  
  }
  else if(ty>17)
  {
   printf("�������ڵͳ��ڵ�%d��",ty);  
  }
  return qw,er,ty;
  

}
	
int runnian(int o,int p)
{  
	int z,i;
    z=0;
	for(i=o;i<=p;i++)
	{   
		i= o;
	    o=o+1;
	    if((i%4==0&&i%100!=0)||(i%400==0))
		{
			z+=1;
		}
	}
    return z;


}

int dangqianriqi(int m,int k,int o)
{   
	
	int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 	int i,x=0 ;
	if((o%4==0&&o%100!=0)||(o%400==0))
{		
	if(m=1)
   {     
	   x=k-1;
	   	   
	}
	else if(m>1)
	   for(i=1;i<=m;i++)
	   {
		   x=x+a[i-1];
	   }
	   x+=k-1;
}

	else
{	   if(m=1)
   {     
	  x=k-1;  	   
	}

	else if(m>1 )
	   for(i=1;i<=m;i++)
	   {
		   x=x+b[i-1];
	   }
	   x+=k-1;
}	
		
   
   return x;

}

int chushenriqi(int p,int n,int l)
{   
	
	int a[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int b[12]={31,28,31,30,31,30,31,31,30,31,30,31};
 	int i,c=0 ;
	if((p%4==0&&p%100!=0)||(p%400==0))
{		
	if(n=1)
   {     
	   c=l-1;
	   	   
	}
	else if(n>1)
	   for(i=1;i<=n;i++)
	   {
		   c=c+a[i-1];
	   }
	   c+=l-1;
}

	else
{	   if(n=1)
   {     
	  c=l-1;  	   
	}

	else if(n>1 )
	   for(i=1;i<=n;i++)
	   {
		   c=c+b[i-1];
	   }
	   c+=l-1;
}	
		
  
   return c;

}



int main()
{
	int o,p,m,n,k,l,zuizhong,t,y,u,qw,er,ty;
    printf("������������");
	scanf("%d",&o);
	printf("������������");
	scanf("%d",&p);
	printf("����������·�");
	scanf("%d",&m);
	printf("����������·�");
	scanf("%d",&n);
	printf("�������������");
	scanf("%d",&k);
	printf("�������������");
	scanf("%d",&l);
	system("pause");
	t=runnian(o, p);
	y=dangqianriqi( o, m, k);
	u=chushenriqi( p, n, l);
	zuizhong=(o-p)*365+t-u+y;
	qw=zuizhong%23;
    er=zuizhong%28;
	ty=zuizhong%33;
	panduan( qw,er,ty);
	system("pause");
	return 0;
}
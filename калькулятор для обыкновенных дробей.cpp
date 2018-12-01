#include <Windows.h>
#include <stdlib.h>
#include <locale.h>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;

void vivod1(int chm,int znm){
	int k;
	    setlocale(LC_ALL,"C");
	   
	    printf("\n%c     %4c",201,187);
		printf("\n%c  %4d  %c",186,chm,186);
		printf("\n%c ------ %c",186,186);
		printf("\n%c  %4d  %c",186,znm,186);
		printf("\n%c     %4c",200,188);
}

void vivod4(int chm,int znm){
	int k;
	   setlocale(LC_ALL,"RUS");
	    printf("\n Ответ равен  == ");
	    setlocale(LC_ALL,"C");
	    printf("%c     %4c",201,187);
		printf("\n                 %c  %4d  %c",186,chm,186);
		printf("\n                 %c ------ %c",186,186);
		printf("\n                 %c  %4d  %c",186,znm,186);
		printf("\n                 %c     %4c",200,188);
}

void vivod5(int chm,int znm){
	int k;
	   setlocale(LC_ALL,"RUS");
	    printf("\n Ответ с сокращением равен == ");
	    setlocale(LC_ALL,"C");
	    printf("%c     %4c",201,187);
		printf("\n                 %14c  %4d  %c",186,chm,186);
		printf("\n                 %14c ------ %c",186,186);
		printf("\n                 %14c  %4d  %c",186,znm,186);
		printf("\n                 %14c     %4c",200,188);
}

void vivod2(int chm1,int chm2,int znm){
	int k;
	    setlocale(LC_ALL,"C");
	   
	    printf("\n%c            %4c",201,187);
		printf("\n%c  %4d - %4d  %c",186,chm1,chm2,186 );
		printf("\n%c ------------- %c",186,186);
		printf("\n%c  %4d         %c",186,znm,186);
		printf("\n%c            %4c",200,188);
}

void vivod3(int chm1,int chm2,int znm){
	int k;
	    setlocale(LC_ALL,"C");
	   
	    printf("\n%c            %4c",201,187);
		printf("\n%c  %4d + %4d  %c",186,chm1,chm2,186 );
		printf("\n%c ------------- %c",186,186);
		printf("\n%c  %4d         %c",186,znm,186);
		printf("\n%c            %4c",200,188);
}

int NOD(int n1, int n2)
{
	int div;
	if(n1 == n2) return n1;
	int d = n1-n2;
	if(d < 0){
		d=-d;
		div=NOD(n1,d);
	}else
	  div = NOD(n2, d);
	  return div;
}

int NOK(int n11, int n22)
{
	return  n11*n22/NOD(n11,n22);
}

void plus(int ch1,int ch2,int zn1, int zn2){
	int obzn,nch1,nch2,gotch,odn2,gotch2,obzn2,prov=0;
	    setlocale(LC_ALL,"C");
	   
	    //плюс 
	    
	    if((zn1<0)&&(zn2<0))
		{
			zn1=zn1*-1;
			zn2=zn2*-1;
			ch1=ch1*-1;
			ch2=ch2*-1;
		}
		else 
		{  
		 if(zn1<0) 
		 {
		 	prov=1;
		 zn1=zn1*-1;
		 ch1=ch1*-1;
       	 }
		else 
		{
		 if(zn2<0) 
		 {
		 	
		 zn2=zn2*-1;
		 ch2=ch2*-1;
		}
	}
		}
	    
		obzn=NOK(zn1,zn2);
		nch1=ch1*(obzn/zn1);
		nch2=ch2*(obzn/zn2);
		gotch=nch1+nch2;		
        vivod3(nch1,nch2,obzn);

        vivod1(gotch,obzn);

        odn2=NOD(fabs(gotch),obzn);
        setlocale(LC_ALL,"RUS");
        printf("\n\n Общее кратное = %d",odn2);
        setlocale(LC_ALL,"C");
        printf("\n");
        gotch2=gotch/odn2;
		obzn2=obzn/odn2;
        vivod5(gotch2,obzn2);
}

void minus(int ch1,int ch2,int zn1, int zn2){
	int obzn,nch1,nch2,gotch,odn2,gotch2,obzn2;
	    setlocale(LC_ALL,"C");
	   
	    //минус
	    
	    if((ch1==ch2)&&(zn1==zn2))
		{
			setlocale(LC_ALL,"RUS");
			printf("\n\nОтвет равен = 0");
		}
		else{
			
			if((zn1<0)&&(zn2<0))
		{
			zn1=zn1*-1;
			zn2=zn2*-1;
			ch1=ch1*-1;
			ch2=ch2*-1;
		}
		else 
		{  
		 if(zn1<0) 
		 {
		 zn1=zn1*-1;
		 ch1=ch1*-1;
       	 }
		else 
		{
		 if(zn2<0) 
		 {
		 	
		 zn2=zn2*-1;
		 ch2=ch2*-1;
		}
	}
		}
		
		obzn=NOK(zn1,zn2);
		nch1=ch1*(obzn/zn1);
		nch2=ch2*(obzn/zn2);
		gotch=nch1-nch2;		
        vivod2(nch1,nch2,obzn);

        vivod1(gotch,obzn);

        odn2=NOD(fabs(gotch),obzn);
        setlocale(LC_ALL,"RUS");
        printf("\n\n Общее кратное = %d",odn2);
        setlocale(LC_ALL,"C");
        printf("\n");
        gotch2=gotch/odn2;
		obzn2=obzn/odn2;
        vivod5(gotch2,obzn2);
    }
}

void umnojenie(int ch1,int ch2,int zn1, int zn2){
	int umnch,umnzn,odn2,umnch1,umnzn1;
	
	    setlocale(LC_ALL,"C");
	   
	    //умножение
		umnch=ch1*ch2;
        umnzn=zn1*zn2;
        printf("\n\n--------------------------------------\n\n");
        if((umnch<0)&&(umnzn<0))
        {
        	umnch=umnch*-1;
        	umnzn=umnzn*-1;
		}
        vivod4(umnch,umnzn);
        odn2=NOD(fabs(umnch),fabs(umnzn));
        setlocale(LC_ALL,"RUS");
        printf("\n\n Общее кратное = %d",odn2);
        setlocale(LC_ALL,"C");
        printf("\n");
        umnch1=umnch/odn2;
        umnzn1=umnzn/odn2;
        vivod5(umnch1,umnzn1);
}


void delenie(int ch1,int ch2,int zn1, int zn2){
	int ch21,zn21;
	
	    setlocale(LC_ALL,"C");
	   
	    //деление
	    ch21=zn2;
	    zn21=ch2;
	    printf("------------------------------------------\n\n");
	    vivod1(ch1,zn1);
		vivod1(ch21,zn21);
		umnojenie(ch1,ch21,zn1,zn21);
}

int main()
{
    system("color F0"); setlocale(LC_ALL,"RUS");
    int ch11,ch22,zn11,zn22, vybresh, povt;
do{ 
    printf("Введите числитель для первой дроби ="); 
    scanf("%d",&ch11); 
    if (((ch11>0) || (ch11<0)) && (ch11!=0)) break;
      } 
while (1);

do{ 
    printf("Введите знаменатель для первой дроби =");
    scanf("%d",&zn11); 
    if (((zn11>0) || (zn11<0)) && (zn11!=0)) break;
      } 
while (1);

do{ 
    printf("Введите числитель для второй дроби =");
    scanf("%d",&ch22); 
    if (((ch22>0) || (ch22<0)) && (ch22!=0)) break;
      } 
while (1);

do{ 
    printf("Введите знаменатель для второй дроби =");
    scanf("%d",&zn22); 
    if (((zn22>0) || (zn22<0)) && (zn22!=0)) break;
      } 
while (1);

    if((ch11<0) && (zn11<0)){
    	ch11=ch11*-1;
    	zn11=zn11*-1;
	}
	
	if((ch22<0) && (zn22<0)){
    	ch22=ch22*-1;
    	zn22=zn22*-1;
	}
     do{
		vivod1(ch11,zn11);
		vivod1(ch22,zn22);
		setlocale(LC_ALL,"RUS");
		printf("\n\nЕсли хотите сделать плюс нажмите - 1");
	    printf("\nЕсли хотите сделать минус нажмите - 2");
	    printf("\nЕсли хотите сделать умножение нажмите - 3");
	    printf("\nЕсли хотите сделать деление нажмите на - 4");
		printf("\n   Введите свой выбор -- ");
	
			
		scanf("%d",&vybresh);
		setlocale(LC_ALL,"C");
		switch (vybresh)
		{
			case 1 : plus(ch11,ch22,zn11,zn22); break;
			case 2 : minus(ch11,ch22,zn11,zn22); break;
			case 3 : umnojenie(ch11,ch22,zn11,zn22); break;
			case 4 : delenie(ch11,ch22,zn11,zn22); break;
		}
		setlocale(LC_ALL,"RUS");
		printf("\n\n\nЕсли хотите выбрать что то другое введите 1 - ");
		setlocale(LC_ALL,"C");
		scanf("%d",&povt);
	if (povt !=1) break;
      system("cls");  } 
while (1);
		getch();
		}
		
		
		
		
		
		
		

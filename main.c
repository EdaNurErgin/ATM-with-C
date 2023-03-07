#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int makbuz (int tercih) {

            printf("Makbuz istiyorsaniz 1 yazin , istemiyorsaniz 0  yazin. \n");
			
			scanf("%d",&tercih);
			
			if(tercih==1 )
			{
				printf("Makbuzunuz yazdirilmistir alabilirsiniz. \n");
			}
			else if(tercih==0)
			{
				printf("Makbuzunuz olusturulmamistir.Dogayi korudugunuz icin tesekkür ederiz. \n");
			}
			else
			{
				printf("yanlis tusa bastiniz.Tekrar deneyiniz.");
			}
		return tercih;	
}

int parayatir (int para)
{
	printf("Yatirmak istediginiz miktari giriniz");
	scanf("%d",&para);
	printf("%d TL yatirilmistir \n\n",para);
	return para;
	
}

int sifrefonk(int sifrem) 
{
	
	printf("Sifre olusturma ekrani \n");
	
	printf("Lutfen dort basamakli bir sayi giriniz:");
	scanf("%d",&sifrem);
	printf("Kart sifreniz olusturulmustur : %d ",sifrem);
	return sifrem;
	
}

int main(int argc, char *argv[]) {
	int harcanan = 600;
	int borc ;
	int bakiye = 2000 ;
	
	printf("Eda ATM HOSGELDINIZ \n");
	printf("Lutfen kartinizi takiniz \n ");
	printf("*******************************");
	printf("\n\n\n");	
	
	
	
	printf("Kart Sifre Olusturma: \n");
	int sifre1;
	printf("Lutfen dort basamakli bir sayi giriniz:");
	scanf("%d",&sifre1);
	printf("Kart sifreniz olusturulmustur : %d",sifre1);

	printf("\n");
	
	int girsifre;
	printf("kart sifrenizi giriniz \n");
	scanf("%d",&girsifre);
	
	if(sifre1==girsifre)
	{
		printf ("GIRIS BASARILI ! \n");
	}
	else{
		printf("HATA TEKRAR DENEYINIZ !!");
		return 0;
	}
	
	
	printf ("Gerceklestirebileceginiz islemler: \n\n");
	printf(" 1.Kredi Kartima Para Yükleme \n");
	printf(" 2.Banka Kartima Para Yatirma \n");
	printf(" 3.Sim Blokesi Kaldirma \n");
	printf(" 4.Kredi Karti Borc Goruntuleme \n");
	printf(" 5.Banka Kartimdan Para Cekme \n");
	printf(" 6.Kart Sifresini Degistirme \n");
	
	int secenek ;
	
	printf("Gerceklestirmek istediginiz islemin numarasini giriniz:");
	scanf("%d",&secenek);
	
	switch(secenek)
	{
		
		case 1 :
			printf("Kredi Kartima Para Yukleme Ekrani \n\n");
		    printf("Lutfen yatirmak istediginiz para tutarini giriniz \n");
		    printf("Lutfen sadece kagit para girisi yapiniz !\n");
		    
		    int krediyatir ;
		    
			parayatir(krediyatir);
			
			printf("\n\n");
			int tercih1 ;
			makbuz(tercih1);
		break ;
			
		case 2 :
		    printf("Banka Kartima Para Yatirma Ekrani \n");
			
			printf("Lutfen sadece kagit para girisi yapiniz.");
			int bankayatir ;
			parayatir(bankayatir);
			int tercih2 ; 
			makbuz(tercih2);
			
		break;
		
		case 3 :
		  printf("Sim Blokesi Kaldirma Ekrani");
		  int kayitlisonUchane=845 ; //kullanicinin hesap acarken kayit ettigi telefon numarasi.
		  int sim ;
		  printf("Sim Blokesini kaldirmak icin hesabinizda kayitli telefonun son uc hanesini giriniz:");
		  scanf("%d",&sim);
		  
		  
		  if(sim==kayitlisonUchane)
		  {
		  	printf("Sim karti blokeniz kaldirilmistir");
		  }
		  else
		  {
		  	printf("Girdiginiz bilgi sistemde kayitli olan numarayla uyusmamaktadir lutfen tekrar deneyiniz.");
		  	
		  	
		  }
		  
		  break ;
			
		
       case 4 :
	     	printf ("Kredi Karti Borc Goruntuleme Ekrani ");
	     	borc = bakiye-harcanan ;
	     	printf("borcunuz %d TL dir.",borc);
	     	
	     break;	
	     	
	  
	   case 5 :
	   	
	   	  printf("Banka Kartimdan Para Cekme Ekrani \n");
	   	  
	   	  int cekmekistedigitutar;
	   	  printf("Lutfen banka hesabinizdan cekmek istediginiz tutari giriniz: \n");
	   	  scanf("%d",&cekmekistedigitutar);
	   	  printf("%d tutarinda paranizi kapsulden alabilirsiniz. \n",cekmekistedigitutar);
	   	  
	   	  int kalanpara;
	   	  
	   	  
	   	  kalanpara = bakiye - cekmekistedigitutar ;
	   	  
	   	  printf("Hesabinizda kalan para : %d",kalanpara);
	   	  
	   	break ;
	   	  
	   	  
	   case 6 :
	   
	   printf("Kart Sifresi Degistirme Ekrani");
	   	  
	   int sif5 ;
	   
	   sifrefonk(sif5);
	     	
	   int makbuz5 ;
	   
	   makbuz (makbuz5);  	
	  break ;		 	
	}
	
	
		
	
	
	return 0;
}

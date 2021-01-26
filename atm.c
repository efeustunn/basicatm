#include <stdio.h>
#include <stdlib.h>

/* 1- bakiye görüntüle 
2- para yatýr
3-para çek
4-fatura öde
-internet
-elektrik
-su
4-geri
 */

int main() {
	
	int i,sifre;
	int islem,parayatir,bakiye=1000,miktar,eskipara,paracek,eskiparaiki;
	int elkborc=345,suborc=100,netborc=120,secc;

	
		printf("    ******MADE BY E********\n\n\n");
		printf("Sifrenizi giriniz:");
		scanf("%d",&sifre);
	
	for(i=0;i<3;i++){
		


	if(sifre==4407){
		
	printf("1.Bakiye Goruntule\n");
	printf("2.Para yatir\n");
	printf("3.Para cek\n");
	printf("4.fatura ode\n");
	printf("Yapmak istediginiz islemi seciniz: ");
	scanf("%d",&islem);
	
	switch(islem){
		case 1://bakýye gosterme
			system("CLS");
			printf("----------------------\n\n\n");
			printf("   Bakiyeniz %d TL\n\n\n ",bakiye);
			printf("----------------------\n");

			break;
		case 2://para yatýrma
			system("CLS");

			printf("Yatirmak istediginiz para miktarini giriniz: ");
			scanf("%d",&parayatir);
			eskipara=bakiye;
			bakiye=bakiye+parayatir;
			system("CLS");
			printf("----------------------\n\n\n");

			printf("Onceki Bakiyeniz: %d TL\n",eskipara);
			printf("Yatirilan tutar: %d TL\n",parayatir);
			printf("Guncel Bakiyeniz: %d TL \n\n\n",bakiye);
			printf("----------------------\n");

			
				
			i=0;
			break;
		case 3://para cekme
				system("CLS");

				printf("Cekmek istediginiz tutarý giriniz: ");
				scanf("%d",&paracek);
				system("CLS");
				if(paracek>bakiye){
					printf("Bakiye yetersiz...Tekrar deneyiniz..\n");
				}
				else{
					eskiparaiki=bakiye;
					bakiye=bakiye-paracek;
					system("CLS");
					printf("----------------------\n\n\n");
					printf("Onceki Bakiyeniz: %d TL\n",eskiparaiki);
					printf("Yatirilan tutar: %d TL\n",paracek);
					printf("Guncel Bakiyeniz: %d TL \n\n\n",bakiye);
					printf("----------------------\n");

					i=0;
				}
				break;
		case 4: //fatura kýsmý
				
				system("CLS");
			
			printf("1.Elektrik borcunuz %d TL\n",elkborc);
			printf("2.Su borcunuz %d TL\n",suborc);
			printf("3.Internet borcunuz %d TL\n",netborc);
			printf("4.Cikis\n\n");
			printf("Odemek istediginiz faturayi seciniz:");
			scanf("%d",&secc);
			if(secc==1){
				system("CLS");
				bakiye=bakiye-elkborc;
				printf("Faturanýz odenmistir.. Kalan bakiyeniz %d TL\n\n",bakiye);
				elkborc=0;
				i=0;
			}
			if(secc==2)
				{system("CLS");
				bakiye=bakiye-suborc;
				printf("Faturanýz odenmistir.. Kalan bakiyeniz %d TL\n\n",bakiye);
				suborc=0;
				i=0;				
			}
			if(secc==3){
				system("CLS");
				bakiye=bakiye-netborc;
				netborc=0;
				printf("Faturanýz odenmistir.. Kalan bakiyeniz %d TL\n\n",bakiye);
				i=0;
			}		
			
	}
	
	
		
	}
	else{
		printf("Yanlis sifre.Lütfen tekrar deneyiniz.\n");
		
		
	} 
	
	}
	
	
	
	
	
	
	system("pause");
	return 0;
}

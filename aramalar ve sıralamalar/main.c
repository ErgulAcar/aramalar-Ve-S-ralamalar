#include <stdio.h>
#include <stdlib.h>
#include "Akutuphane.h"

int main(int argc, char *argv[]) 
{
	int secim,elemansayisi;
	int ilkaralik, sonaralik;
	printf("\n\t\t\t\t\t  HOSGELDINIZ\n\n");//giri�
	printf("eleman sayisini giriniz->>");
	scanf("%d",&elemansayisi);
	printf("elemanlara atanacak sayi araligini seciniz->>\n");
	printf("ilk->>");
	scanf("%d",&ilkaralik);
	printf("son->>");
	scanf("%d",&sonaralik);
	int sayiDizisi[elemansayisi];
	sayiAtama(sayiDizisi, elemansayisi, ilkaralik, sonaralik);
	printf("sayi dizisinin elemanlari=>>\n");
	for(int i=0; i<elemansayisi; i++)
	{
		printf("%d. eleman--->>>  %d\n", i+1, sayiDizisi[i]);
	}
	do//kullan�c� tablo ile i�i biteene kadar kullans�n diye bir s�n�rs�z d�ng�
	{
		//tablo
		printf("\n________________________________________________________________________________________\n");
		printf("\n\n\t\t\t\t\t1.ISLEM->> dogrusal arama");
		printf("\n\n\t\t\t\t\t2.ISLEM->> Eklemeli Siralama");
		printf("\n\n\t\t\t\t\t3.ISLEM->> Secmeli Siralama");
		printf("\n\n\t\t\t\t\t4.ISLEM->> Kabarcik Siralama");
		printf("\n\n\t\t\t\t\t5.ISLEM->> Birlestirmeli Siralama");
		printf("\n\n\t\t\t\t\t6.ISLEM->> Kumele Siralamasi");
		printf("\n\n\t\t\t\t\t7.ISLEM->> HizliSirala");
		printf("\n\n\t\t\t\t\t8.ISLEM->> eleman sayisini degistir");
		printf("\n\n\t\t\t\t\t9.ISLEM->> aralik degistir");
		printf("\n\n\t\t\t\t\t10.ISLEM->> Cikis");
		printf("\n_______________________________________________________________________________________\n");
		//tablo sonu
		//do//sonsuz bir dong� nedeni ise kullan�c� istenen degerler d�s�nda bir deger girmesin
		printf("\n\t\t\t\t\tYAPACAGINIZ ISLEMI SECINIZ->>  ");//yapacag� i�lemi istiyoruz
		scanf("%d",&secim);
		switch(secim)
		{
			case 1://1.i�lem
				dogrusal_aramaislemi(sayiDizisi, elemansayisi);
				break;//di�er i�lemlere ugramadan switch caseten c�k
			case 2://2.i�lem
				EklemeliSiralamaislemi(sayiDizisi, elemansayisi);
				break;//di�er i�lemlere ugramadan switch caseten c�k
			case 3://3.i�lem
			SecmeliSiralamaislemi(sayiDizisi, elemansayisi);	
				break;//di�er i�lemlere ugramadan switch caseten c�k
			case 4://4.i�lem
				KabarcikSiralamaislemi(sayiDizisi, elemansayisi);
				break;//di�er i�lemlere ugramadan switch caseten c�k
			case 5://5.i�lem
				BirlestirmeliSiralamaislemi(sayiDizisi, 0, sonaralik-1, elemansayisi);
				break;//di�er i�lemlere ugramadan switch caseten c�k
			case 6://6.i�lem
				KumeleSiralamasiislemi(sayiDizisi, elemansayisi);
				break;//di�er i�lemlere ugramadan switch caseten c�k
			case 7://7.i�lem
			HizliSiralaislemi(sayiDizisi, 0, sonaralik-1, elemansayisi);
				break;//di�er i�lemlere ugramadan switch caseten c�k
			case 8://8.i�lem
				printf("eleman sayisini giriniz->>");
				scanf("%d",&elemansayisi);
				break;//di�er i�lemlere ugramadan switch caseten c�k
			case 9://9.i�lem
				printf("elemanlara atanacak sayi araligini seciniz->>\n");
				printf("ilk->>");
				scanf("%d",&ilkaralik);
				printf("son->>");
				scanf("%d",&sonaralik);
				break;//di�er i�lemlere ugramadan switch caseten c�k
			case 10:
				return 0;//10.islem c�k�s oldugu i�in program� hatas�z bir sekilde durduracak
				break;//di�er i�lemlere ugramadan switch caseten c�k
			default: printf("sistemde tanimli olmayan bir sayi girdiniz...\n");
		}
	}while(secim!=10);//secim=8 olunca c�k�s oldugundan program duracak
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "Akutuphane.h"

int main(int argc, char *argv[]) 
{
	int secim,elemansayisi;
	int ilkaralik, sonaralik;
	printf("\n\t\t\t\t\t  HOSGELDINIZ\n\n");//giriþ
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
	do//kullanýcý tablo ile iþi biteene kadar kullansýn diye bir sýnýrsýz döngü
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
		//do//sonsuz bir dongü nedeni ise kullanýcý istenen degerler dýsýnda bir deger girmesin
		printf("\n\t\t\t\t\tYAPACAGINIZ ISLEMI SECINIZ->>  ");//yapacagý iþlemi istiyoruz
		scanf("%d",&secim);
		switch(secim)
		{
			case 1://1.iþlem
				dogrusal_aramaislemi(sayiDizisi, elemansayisi);
				break;//diðer iþlemlere ugramadan switch caseten cýk
			case 2://2.iþlem
				EklemeliSiralamaislemi(sayiDizisi, elemansayisi);
				break;//diðer iþlemlere ugramadan switch caseten cýk
			case 3://3.iþlem
			SecmeliSiralamaislemi(sayiDizisi, elemansayisi);	
				break;//diðer iþlemlere ugramadan switch caseten cýk
			case 4://4.iþlem
				KabarcikSiralamaislemi(sayiDizisi, elemansayisi);
				break;//diðer iþlemlere ugramadan switch caseten cýk
			case 5://5.iþlem
				BirlestirmeliSiralamaislemi(sayiDizisi, 0, sonaralik-1, elemansayisi);
				break;//diðer iþlemlere ugramadan switch caseten cýk
			case 6://6.iþlem
				KumeleSiralamasiislemi(sayiDizisi, elemansayisi);
				break;//diðer iþlemlere ugramadan switch caseten cýk
			case 7://7.iþlem
			HizliSiralaislemi(sayiDizisi, 0, sonaralik-1, elemansayisi);
				break;//diðer iþlemlere ugramadan switch caseten cýk
			case 8://8.iþlem
				printf("eleman sayisini giriniz->>");
				scanf("%d",&elemansayisi);
				break;//diðer iþlemlere ugramadan switch caseten cýk
			case 9://9.iþlem
				printf("elemanlara atanacak sayi araligini seciniz->>\n");
				printf("ilk->>");
				scanf("%d",&ilkaralik);
				printf("son->>");
				scanf("%d",&sonaralik);
				break;//diðer iþlemlere ugramadan switch caseten cýk
			case 10:
				return 0;//10.islem cýkýs oldugu için programý hatasýz bir sekilde durduracak
				break;//diðer iþlemlere ugramadan switch caseten cýk
			default: printf("sistemde tanimli olmayan bir sayi girdiniz...\n");
		}
	}while(secim!=10);//secim=8 olunca cýkýs oldugundan program duracak
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include "Akutuphane.h"
#include <stdlib.h>
// BirlestirmeliSiralamsý
void dogrusal_aramaislemi(int sayiDizisi[], int elemansayisi)
{
	int aranan, atanan;//dogrusal arama icin
	printf("yapilan islem dogrusal arama ve\n\n");
	printf("aranacak sayiyi giriniz->");
	scanf("%d", &aranan);
	atanan = dogrusal_arama(sayiDizisi, elemansayisi, aranan);
	if(atanan==-1)
	{
		printf("aranan sayi bulunmadi...");
	}
	else
		printf("aranan sayi %d ve sirasi %d", aranan, atanan+1);
}

void EklemeliSiralamaislemi(int sayiDizisi [], int elemansayisi)
{
	printf("\n\nyapilan islem eklemeli siralama ve\n\n");
	EklemeliSiralama(sayiDizisi, elemansayisi);
	for(int i=0; i<elemansayisi; i++)
	{
		printf("%d. eleman->> %d\n", i+1, sayiDizisi[i]);
	}
}

void SecmeliSiralamaislemi(int sayiDizisi [], int elemansayisi)
{
	printf("\n\nyapilan islem Secmeli siralama ve\n\n");
	SecmeliSiralama(sayiDizisi, elemansayisi);
	for(int i=0; i<elemansayisi; i++)
	{
		printf("%d. eleman->> %d\n", i+1, sayiDizisi[i]);
	}
}

void KabarcikSiralamaislemi(int sayiDizisi [], int elemansayisi)
{
	printf("\n\nyapilan islem Kabarcik siralama ve\n\n");
	KabarcikSiralama(sayiDizisi, elemansayisi);
	for(int i=0; i<elemansayisi; i++)
	{
		printf("%d. eleman->> %d\n", i+1, sayiDizisi[i]);
	}	
}

void BirlestirmeliSiralamaislemi(int sayiDizisi[], int ilkeleman, int soneleman, int elemansayisi)
{
	printf("\n\nyapilan islem Birlestirmeli siralama ve\n\n");
	birlesme(sayiDizisi, elemansayisi, 0, soneleman);
	for(int i=0; i<elemansayisi; i++)
	{
		printf("%d. eleman->> %d\n", i+1, sayiDizisi[i]);
	}
}

void KumeleSiralamasiislemi(int sayiDizisi[], int elemansayisi)
{
	printf("\n\nyapilan islem Kumele Siralamasi ve\n\n");
	Baslatma();
	for (int i= 0; i < elemansayisi; i++)
	{
		Ekle(sayiDizisi[i]);
	}
	for (int i = 0; i < elemansayisi; i++)
	{
		printf("%d. eleman->> %d\n ", i+1, MinimumDegeriSil());
	}
}

void HizliSiralaislemi(int sayiDizisi[], int ilkeleman, int someleman, int elemansayisi)
{
	printf("\n\nyapilan islem Hizli siralama ve\n\n");
	HizliSirala(sayiDizisi, ilkeleman, someleman);
	for(int i=0; i<elemansayisi; i++)
	{
		printf("%d. eleman->> %d\n", i+1, sayiDizisi[i]);
	}
}

//sayi atama fonksiyonu
void sayiAtama(int dizi[], int N, int ilkaralik, int sonaralik)
{
    for(int i = 0 ; i < N ; i++)
    {
        dizi[i] = rand() % sonaralik + ilkaralik;
    }
}
//dogrusal arama 
int dogrusal_arama(int dizi[], int N, int aranan)
{
	for(int i=0; i<N; i++)
	{
		if(dizi[i]==aranan)
		{
			return i;
		}
	}
	return -1;
}
// ArayaSokmaSiralamasi
void EklemeliSiralama(int dizi [], int N)
{
	int i, k, ekle;
	for (i = 1; i < N; i++)
	{
		ekle = dizi[i];
		for (k = i - 1; k >= 0 && ekle <= dizi[k]; k--)
		{
			dizi[k + 1] = dizi[k]; /* geriye kaydiriyor*/
		}
		dizi[k + 1] = ekle;
	}
}
// SecmeliSiralama
void SecmeliSiralama(int dizi [], int N)
{
	int i, index, j, enkucuk;
	// dizinin basindan basliyor
	for (i = 0; i < N - 1; i++) 
	{
		// son eleman en kucuk kabul ediliyor
		enkucuk = dizi[N - 1]; 
		index = N - 1;
		// daha kucuk var mi? araniyor
		for (j = i; j < (N - 1); j++) 
		{
			if (dizi[j] < enkucuk)
			{
				enkucuk = dizi[j];
				index = j;
			}
		}
		/* daha kucugu varsa yer degistiriliyor */
		dizi[index] = dizi[i]; 
		dizi[i] = enkucuk;
	}
}
// KabarcikSiralama
void KabarcikSiralama(int dizi [], int n)
{
	int gecici, k, hareket;
	for (hareket = 0; hareket < n - 1; hareket++)
	{
		for (k = 0; k < n - 1-hareket; k++)
		{
			/* komþular karþýlaþtýrýlýyor*/
			if (dizi[k]>dizi[k + 1]) 
			{
				gecici = dizi[k];
				dizi[k] = dizi[k + 1];
				dizi[k + 1] = gecici;
			}
		}
	}
}
// BirlestirmeliSiralama
void BirlestirmeliSiralama(int dizi[], int elemansayisi,int ilkeleman, int q, int soneleman)
{
	int b[elemansayisi];
	int sb, index, yer;
	sb = q - 1;
	yer = ilkeleman;
	index = soneleman - ilkeleman + 1;
	while ((ilkeleman <= sb) && (q <= soneleman))
	{
		if (dizi[ilkeleman] <= dizi[q])
		{
			b[yer] = dizi[ilkeleman];
			yer = yer + 1;
			ilkeleman = ilkeleman + 1;
		}
		else
		{
			b[yer] = dizi[q];
			yer = yer + 1;
			q = q + 1;
		}
	}
	while (ilkeleman <= sb)
	{
		b[yer] = dizi[ilkeleman];
		ilkeleman = ilkeleman + 1;
		yer = yer + 1;
	}
	while (q <= soneleman)
	{
		b[yer] = dizi[q];
		q = q + 1;
		yer = yer + 1;
	}
	for (int i = 0; i < index; i++)
	{
		dizi[soneleman] = b[soneleman];
		soneleman = soneleman - 1;
	}
}
void birlesme(int dizi[], int elemansayisi, int ilkeleman, int soneleman)
{
	if (ilkeleman<soneleman)
	{
		int q = (0 + soneleman) / 2;
		birlesme(dizi, elemansayisi, 0, q);
		birlesme(dizi, elemansayisi, q + 1, soneleman);
		BirlestirmeliSiralama(dizi, elemansayisi , 0, q + 1, soneleman);
	}
}
// KumeleSiralamasi
//
void Baslatma()
{
	kumeBoyutu = 0;
//	kume[0] = -INT_MAX;
}

void Ekle(int dizi)
{
	kumeBoyutu++;
	kume[kumeBoyutu] = dizi; /*Son sýraya ekliyor*/
	/*Konumunu ayarlýyor*/
	int yeni = kumeBoyutu;
	while (kume[yeni / 2] > dizi)
	{
		kume[yeni] = kume[yeni / 2];
		yeni /= 2;
	}
	kume[yeni] = dizi;
}

int MinimumDegeriSil()
{
	int minsayi, sonsayi, urun, yeni;
	minsayi = kume[1];
	sonsayi = kume[kumeBoyutu--];
	for (yeni = 1; yeni * 2 <= kumeBoyutu; yeni = urun)
	{
		urun = yeni * 2;
		if (urun != kumeBoyutu && kume[urun + 1] < kume[urun])
		{
			urun++;
		}
		if (sonsayi > kume[urun])
		{
			kume[yeni] = kume[urun];
		}
		else
		{
			break;
		}
	}
	kume[yeni] = sonsayi;
	return minsayi;
}
	
//HizliSiralama
void HizliSirala(int dizi[], int ilkeleman, int someleman)
 {
	int i = ilkeleman, j = someleman;
	int tmp;
	int pivot = dizi[(ilkeleman + someleman) / 2];

	/* bölme */
	while (i <= j) {
		while (dizi[i] < pivot)
			i++;
		while (dizi[j] > pivot)
			j--;
		if (i <= j) {
			tmp = dizi[i];
			dizi[i] = dizi[j];
			dizi[j] = tmp;
			i++;
			j--;
		}
	};

	/* rekürsif */
	if (ilkeleman < j)
		HizliSirala(dizi, ilkeleman, j);
	if (i < someleman)
		HizliSirala(dizi, i, someleman);
}


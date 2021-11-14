#ifndef Akutuphane
#define Akutuphane

//#include "Akutuphanesi.h"
/*
N= dizinin eleman sayisi
q= birlesme fonksiyonunda tanýmladýðýmýz data
q= ilk eleman + son eleman /2
*/
//main fonksiyonunu kabarýk göstermemek için yapýlan fomksiyon
void dogrusal_aramaislemi(int sayiDizisi[], int elemansayisi);
void EklemeliSiralamaislemi(int sayiDizisi [], int elemansayisi);
void SecmeliSiralamaislemi(int sayiDizisi [], int elemansayisi);
void KabarcikSiralamaislemi(int sayiDizisi [], int elemansayisi);
void BirlestirmeliSiralamaislemi(int sayiDizisi[], int ilkeleman, int soneleman, int elemansayisi);
void KumeleSiralamasiislemi(int sayiDizisi[], int elemansayisi);
void HizliSiralaislemi(int sayiDizisi[], int ilkeleman, int someleman, int elemansayisi);
//
void sayiAtama(int dizi[], int N, int ilkaralik, int sonaralik);
int dogrusal_arama(int dizi[], int N, int aranan);
void EklemeliSiralama(int dizi [], int N);
void SecmeliSiralama(int dizi [], int N);
void KabarcikSiralama(int dizi [], int n);
void BirlestirmeliSiralama(int dizi[], int elemansayisi,int ilkeleman, int q, int soneleman);
void birlesme(int dizi[], int elemansayisi, int ilkeleman, int soneleman);
// KumeleSiralamasi
int kume[1000000], kumeBoyutu;
void Baslatma();
void Ekle(int dizi);
int MinimumDegeriSil();
//
void HizliSirala(int dizi[], int ilkeleman, int someleman);

#endif


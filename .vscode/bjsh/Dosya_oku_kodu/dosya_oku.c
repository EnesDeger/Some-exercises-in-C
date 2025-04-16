#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_BASLIK_UZUNLUGU 100
#define MAX_ICERIK_UZUNLUGU 1000

void dosya_olustur() {
  char baslik[MAX_BASLIK_UZUNLUGU];
  char icerik[MAX_ICERIK_UZUNLUGU];
  char dosya_adi[MAX_BASLIK_UZUNLUGU + 4]; // ".txt" için 4 karakter

  printf("Dosya başlığını girin: ");
  fgets(baslik, MAX_BASLIK_UZUNLUGU, stdin);
  baslik[strcspn(baslik, "\n")] = 0; // Yeni satır karakterini kaldır

  printf("Dosya içeriğini girin (en fazla %d karakter): ", MAX_ICERIK_UZUNLUGU);
  fgets(icerik, MAX_ICERIK_UZUNLUGU, stdin);

  sprintf(dosya_adi, "%s.txt", baslik); // Dosya adını oluştur

  FILE *dosya = fopen(dosya_adi, "w");
  if (dosya == NULL) {
    printf("Dosya oluşturma hatası!\n");
    return;
  }

  fprintf(dosya, "%s", icerik);
  fclose(dosya);

  printf("Dosya başarıyla oluşturuldu: %s\n", dosya_adi);
}

void dosya_ac() {
  char baslik[MAX_BASLIK_UZUNLUGU];
  char dosya_adi[MAX_BASLIK_UZUNLUGU + 4];
  char icerik[MAX_ICERIK_UZUNLUGU];

  printf("Açmak istediğiniz dosyanın başlığını girin: ");
  fgets(baslik, MAX_BASLIK_UZUNLUGU, stdin);
  baslik[strcspn(baslik, "\n")] = 0;

  sprintf(dosya_adi, "%s.txt", baslik);

  FILE *dosya = fopen(dosya_adi, "r");
  if (dosya == NULL) {
    printf("Dosya bulunamadı!\n");
    return;
  }

  printf("Dosya içeriği:\n");
  while (fgets(icerik, MAX_ICERIK_UZUNLUGU, dosya) != NULL) {
    printf("%s", icerik);
  }

  fclose(dosya);
}

int main() {
  int secim;

  while (1) {
    printf("\n1. Dosya Oluştur\n2. Dosya Aç\n3. Çıkış\nSeçiminizi yapın: ");
    scanf("%d", &secim);
    getchar(); // Yeni satır karakterini temizle

    switch (secim) {
      case 1:
        dosya_olustur();
        break;
      case 2:
        dosya_ac();
        break;
      case 3:
        return 0;
      default:
        printf("Geçersiz seçim!\n");
    }
  }

  return 0;
}
#include <stdio.h>

int main() {
    int sayi, sifrelenmis_sayi = 0, cozulen_sayi = 0;
    int basamak, yeni_basamak, eski_basamak;
    int basamaklar[4];
    int i;

    // Kullanicidan dört basamakli bir sayi al
    printf("Dört basamakli bir sayi girin: ");
    scanf("%d", &sayi);

    // Basamaklari ayirma ve sifreleme islemi
    i = 0;
    while (i < 4) {
        basamak = sayi % 10;
        yeni_basamak = (basamak + 7) % 10;
        basamaklar[3 - i] = yeni_basamak;  // Basamaklari ters sirayla kaydediyoruz
        sayi /= 10;
        i++;
    }

    // Basamaklari yer degistirme (Sifreleme)
    int temp = basamaklar[0];
    basamaklar[0] = basamaklar[2];
    basamaklar[2] = temp;

    temp = basamaklar[1];
    basamaklar[1] = basamaklar[3];
    basamaklar[3] = temp;

    // Sifrelenmis sayiyi olusturma
    i = 0;
    while (i < 4) {
        sifrelenmis_sayi = sifrelenmis_sayi * 10 + basamaklar[i];
        i++;
    }

    // Sifrelenmis sayiyi yazdirma
    printf("Sifrelenmis sayi: %d\n", sifrelenmis_sayi);

    // Sifrelenmis sayiyi çözme islemi
    i = 0;
    while (i < 4) {
        basamaklar[3 - i] = sifrelenmis_sayi % 10;
        sifrelenmis_sayi /= 10;
        i++;
    }

    // Basamaklari eski yerine koyma (Sifre Çözme)
    temp = basamaklar[0];
    basamaklar[0] = basamaklar[2];
    basamaklar[2] = temp;

    temp = basamaklar[1];
    basamaklar[1] = basamaklar[3];
    basamaklar[3] = temp;

    // Sifre çözme islemi
    i = 0;
    while (i < 4) {
        eski_basamak = (basamaklar[i] + 10 - 7) % 10;
        cozulen_sayi = cozulen_sayi * 10 + eski_basamak;
        i++;
    }

    // Çözülmüs sayiyi yazdirma
    printf("Cozulmus sayi: %d\n", cozulen_sayi);

    return 0;
}


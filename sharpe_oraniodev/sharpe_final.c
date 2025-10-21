#include <stdio.h>
#include <stdlib.h>

double hesaplaSharpeOrani(double getiri, double risksizOran, double standartSapma)
{
    if (standartSapma == 0)
    {
        printf("Hata: Standart sapma sifir olamaz (risksiz yatirim varsayimi).\n");
        return -999.0;
    }
    return (getiri - risksizOran) / standartSapma;
}

void yorumlaSharpeOrani(double sharpeOrani)
{
    printf("\n--- Sharpe Orani Degerlendirmesi ---\n");
    if (sharpeOrani >= 3.0)
    {
        printf("Sharpe Orani: %.4f -> MUKEMMEL kabul edilir. (Cok yuksek risk ayarli getiri)\n", sharpeOrani);
    }
    else if (sharpeOrani >= 2.0)
    {
        printf("Sharpe Orani: %.4f -> COK IYI kabul edilir. (Yuksek risk ayarli getiri)\n", sharpeOrani);
    }
    else if (sharpeOrani >= 1.0)
    {
        printf("Sharpe Orani: %.4f -> IYI kabul edilir. (Makul risk ayarli getiri)\n", sharpeOrani);
    }
    else if (sharpeOrani >= 0.0)
    {
        printf("Sharpe Orani: %.4f -> Kabul edilebilir sinirda. (Risksiz orandan yuksek getiri)\n", sharpeOrani);
    }
    else if (sharpeOrani > -999.0)
    {
        printf("Sharpe Orani: %.4f -> Negatif. (Risksiz orandan dusuk veya negatif getiri, kotu performans)\n", sharpeOrani);
    }
}

int main()
{
    double getiri, risksizOran, standartSapma, sharpeOrani;

    printf("--- Sharpe Orani Hesaplama Programina Hos Geldiniz ---\n");
    printf("Bu program, alinan her birim risk icin elde edilen fazladan getiriyi hesaplar.\n\n");

    printf("Yatirim Getirisi (Ondalik olarak giriniz, ornek: 0.15): ");
    if (scanf("%lf", &getiri) != 1)
    {
        printf("Gecersiz giris. Program sonlandiriliyor.\n");
        return 1;
    }

    printf("Risksiz Faiz Orani (Ondalik olarak giriniz, ornek: 0.05): ");
    if (scanf("%lf", &risksizOran) != 1)
    {
        printf("Gecersiz giris. Program sonlandiriliyor.\n");
        return 1;
    }

    printf("Portfoyun Standart Sapmasi (Risk) (Ondalik olarak giriniz, ornek: 0.12): ");
    if (scanf("%lf", &standartSapma) != 1)
    {
        printf("Gecersiz giris. Program sonlandiriliyor.\n");
        return 1;
    }

    sharpeOrani = hesaplaSharpeOrani(getiri, risksizOran, standartSapma);

    if (sharpeOrani > -999.0)
    {
        printf("\n--- Hesaplama Sonucu ---\n");
        printf("Sharpe Orani Formulu: (Getiri - Risksiz Oran) / Standart Sapma\n");
        printf("Sharpe Orani = (%.4f - %.4f) / %.4f\n", getiri, risksizOran, standartSapma);

        yorumlaSharpeOrani(sharpeOrani);
    }

    printf("\nProgram sonlandi. Tesekkurler.\n");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Para cekme, Havale, Para yatirma, Bakiye sorgulama */
    int bakiye = 50000, tutar, islem, iban;
    printf("==YAPABILECEGINIZ ISLEMLER==\n\n1-Para cekme\n2-Havale yapma\n3-Para yatirma\n4-Bakiye sorgulama\n===================\n");
    printf("Yapmak istediginiz islem : ");
    scanf("%d",&islem);
    printf("\n");
    if (islem >=1 && islem<=4)
        {
    switch(islem)
    {
    case 1:
        printf("==PARA CEKME==\n\nCekmek istediginiz tutar :");
        scanf("%d",&tutar);
        printf("\n");
        if (tutar > bakiye)
            printf("Yetersiz bakiye\n");
        else
            {
                bakiye -=tutar;
                printf("Kalan bakiye = %d\n",bakiye);
            }
            break;
    case 2:
        printf("==HAVALE==\n\nHavale edeceginiz hesap iban no :");
        scanf("%d",&iban);
        printf("\n");
        printf("Havale etmek istediginiz turar :");
        scanf("%d",&tutar);
        printf("\n");
        if(tutar > bakiye)
            printf("Yetersiz bakiye\n");
        else
            {
                bakiye -=tutar;
                printf("%d no lu hesaba %d tl para havaleniz basariyla gerceklesti\n",iban,tutar);
                printf("Kalan bakiye = %d\n",bakiye);
            }
            break;
    case 3:
        printf("==PARA YATIRMA==\n\nYatirmak istediginiz tutar =");
        scanf("%d",&tutar);
        printf("\n");
        bakiye += tutar;
        printf("Yeni bakiyeniz = %d\n",bakiye);
        break;
    case 4:
        printf("==BAKIYE SORGULAMA==\n\nBakiyeniz = %d\n",bakiye);
        break;
    }
        }
        else
            printf("Lutfen gecerli islem numarasi giriniz!\n");
    return 0;
}

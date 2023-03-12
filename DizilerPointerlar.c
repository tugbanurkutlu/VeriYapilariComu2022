#include <stdio.h>
#include <stdlib.h>

void tekBoyutluDiziOlustur(int *arr,int kapasite, int aralik){

    arr[kapasite];
    srand(time(NULL)); //her seferimde ayni randomm sayilar cikmasin diye

    int i=0;
    for(i; i<kapasite; i++)
    {
        *(arr+i)= rand()%aralik;
        //printf("sayi olusturuldu: %d ",arr[i]);
        //printf("\n");
    }

}

void tekBoyutluDiziYazdir( int *dizi , int elemanSayisi)
{
    int i=0;
    for( i; i<elemanSayisi; i++)
    {
        printf("%d ", *(dizi+i));
    }
    printf("\n");
}

void ikiBoyutludiziYazdir( int satir, int sutun, int (*dizi)[sutun])
{
    int i,j;
    for(i=0; i<satir; i++)
    {
        for(j=0; j<sutun; j++)
        {
            printf("dizi[%d][%d]: %d ",i,j, *(*(dizi+i)+j));
            printf("\n");
        }
        printf("\n");
    }

}
void iki_boyutlu_dizi_yaz2(int (*dizi)[4], int uzunluk){
    for(int i=0; i<uzunluk; i++){
        for(int j=0; j<4; j++)
            printf("%3d ",*(*(dizi+i)+j));

        printf("\n");
    }
    printf("-------------------\n");
}

void ucBoyutluDiziYazdir(int satir, int sutun, int derinlik, int (*arr)[satir][sutun][derinlik]   )
{

    int i=1, j=1, k=1;

    for(i; i<satir+1; i++ )
    {
        for(j; j<derinlik+1; j++)
        {
            for(k; k<sutun+1; k++)
            {
                printf("%d ",*(*(*(*arr+i)+j)+k) );

            }
        }
        printf("\n");
    }


}

int main()
{

    int *dizi;
    dizi=(int*)malloc(sizeof(int)*5); //heapten 5 int kapasiteli bir yer ayirdik.Bu yerin ilk adresi dizi adli elemanda sakli
    //dizi kendi basina bir adres verir. *dizi ise o adresteeki degeri verir. o adresteki deger ise dizi adli dizinin ilk elemanidir


    dizi[0]=500;  //*(dizi+0) =5; de kullanilabilirdi
    dizi[1]=900;  //*(dizi+1)
    dizi[2]=10;
    dizi[3]=7;
    dizi[4]=3;


    tekBoyutluDiziYazdir(dizi,5);



    int A[3][2]={ {1,3},  {5,8},  {10,20}}; //iki boyutlu bir dizi. satir:3, sutun: 2 tane
    ikiBoyutludiziYazdir( 3, 2, &A);

    /*
    printf("\n%d",*(dizi+2));   //dizinin 2. elemaný
    printf("\n%d ",dizi);       //dizinin ilk elemanýnýn adresi
    printf("\n%d",dizi+10);     //diziden 10 int uzaktaki hafizanin afresi 40 byte
    printf("\n%d",*(dizi+5));  //diziden 5 int uzakliktaki hafizanin tuttugu deger. atama olmadigindan bu deger bilinemez
    dizi[5]=65;
    printf("\n%d",*(dizi+5)); */

    //int a[4][2][5] = { { { 1, 2}, { 4, 5, 6} }    ,    { {7, 8, 9}, {10, 11, 12, 13, 14} }      ,     { {15, 16, 17, 18, 19}, {20, 21, 22} }};

    //ucBoyutluDiziYazdir(4,2,5,a[4][2][5]);

    /*
    int arr[5];
    tekBoyutluDiziOlustur(arr, 5,20);
    tekBoyutluDiziYazdir(arr,5);
    */


}

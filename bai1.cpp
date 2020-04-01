#include<stdio.h>
//
void Nhap(int &n);
void XuatKq(long Kq1);
long TinhSn(int n);
long TinhSnn(int n);
void XuatKqq(float b);
float TinhS1n(int n);
float TinhS12n(int n);
float TinhS12nadd1(int n);
float TinhSnxn1(int n);
float TinhSnaddn1(int n);
float Tinh2a1c2a2(int n);
long TinhSpownn(int n);
void XuatKlq(long a);
//
int main()
{
    int n;
    Nhap(n);
    long Kq1=TinhSn(n);
    long Kq2=TinhSnn(n);
    float Kq3=TinhS1n(n);
    float Kq4=TinhS12n(n);
    float Kq5=TinhS12nadd1(n);
    float Kq6=TinhSnxn1(n);
    float Kq7=TinhSnaddn1(n);
    float Kq8=Tinh2a1c2a2(n+1);
    long Kq9=TinhSpownn(n);
    XuatKq(Kq1);
    XuatKq(Kq2);
    XuatKqq(Kq3);
    XuatKqq(Kq4);
    XuatKqq(Kq5);
    XuatKqq(Kq6);
    XuatKqq(Kq7);
    XuatKqq(Kq8);
    XuatKlq(Kq9);
    return 0;
}
void XuatKlq(long a)
{
    printf("S = %ld",a);
}
long TinhSpownn(int n)
{
    if(n==1) return 1;
    return TinhSpownn(n-1)*n;
}
float Tinh2a1c2a2(int n)
{
    if(n==0) return 0;
    return Tinh2a1c2a2(n-1)+float(2*(n-1)+1)/(2*(n-1)+2);
}
float TinhSnaddn1(int n)
{
    if(n==0) return 0;
    return TinhSnaddn1(n-1)+float(n)/(n+1);
}
float TinhSnxn1(int n)
{
    if(n==0) return 0;
    return TinhSnxn1(n-1)+float(1)/(n*(n+1));
}
float TinhS12nadd1(int n)
{
    if(n==0) return 0;
    return TinhS12nadd1(n-1)+float(1)/(2*n+1);
}
float TinhS12n(int n)
{
    if(n==0) return 0;
    return TinhS12n(n-1)+float(1)/(2*n);
}
void XuatKqq(float b)
{
    printf("S = %.2f\n",b);
}
void XuatKq(long a)
{
    printf("S = %ld\n",a);
}
void Nhap(int &n)
{
    do
    {
        printf("Nhap n ");
        scanf("%d",&n);
    }while(n<0);
}
long TinhSn(int n)
{
    if(n==0) return 0;
    return TinhSn(n-1)+n;
}
long TinhSnn(int n)
{
    if(n==0) return 0;
    return TinhSnn(n-1)+n*n;
}
float TinhS1n(int n)
{
    if(n==0) return 0;
    return TinhS1n(n-1)+float(1)/(n);
}

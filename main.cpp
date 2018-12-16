#include <iostream>
#include <conio.h>
#include <stdlib.h>

using namespace std;

int main()
{
awal:
system ("cls");

char yt;
int paket,jumlah,harga,total,pembayaran,kembalian;
string jenis;


cout<<"================================================================="<<endl;
cout<<"Menu restoran NASBAK "<<endl;
cout<<"paket 1= nasi bakar ayam + teh manis Rp.20.000"<<endl;
cout<<"paket 2= nasi bakar ikan + teh manis Rp.15.000"<<endl;
cout<<"paket 3= nasi bakar bebek+ es jeruk  RP.25.000"<<endl;
cout<<"paket 4= nasi bakar lele + es jeruk  RP.20.000"<<endl;
cout<<"================================================================"<<endl;

cout<<"masukan paket yang di inginkan     = ";    cin>>paket;
cout<<endl;

switch(paket)
{
case 1:
jenis="paket 1 nasi bakar ayam + teh manis ";
harga=20000;
break;

case 2:
jenis="paket 2 nasi bakar ikan + teh manis ";
harga=15000;
break;

case 3:
jenis="paket 3 nasi bakar bebek+ es jeruk  ";
harga=25000;
break;

case 4:
jenis="paket 4 nasi bakar lele + es jeruk  ";
harga=20000;
break;

default:
cout<<"Maaf paket hanya 1,2,3 dan 4"<<endl;
}
cout<<"jumlah pemesanan                   = ";   cin>>jumlah;
cout<<endl;
total=jumlah*harga;

cout<<"-----------------------------------------------"<<endl;
cout<<jenis<<" "<<jumlah<<" "<<harga<<" "<<total<<endl;

cout<<endl<<endl;

cout<<"jumlah uang yang dibayarkan        = "; cin>>pembayaran;
kembalian=pembayaran-total;
cout<<"kembalian adalah                   = "<<kembalian<<endl;
cout<<"-----------------------------------------------"<<endl;

cout<<endl<<endl;cout <<" ada yang bisa di bantu lagi (Y/T)"; cin>>yt;
cout<<"------------------------------------------------------"<<endl;
if(yt=='y'|| yt=='Y') {goto awal;}    if(yt=='t'||yt=='T'){goto akhir;}

akhir:
cout<<"terimakasih sudah datang "<<endl;
cout<<"   di restoran nasbak    "<<endl;
cout<<endl<<endl;
getch();
return 0;

}

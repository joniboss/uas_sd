#include <iostream>
#include <conio.h>
#include <stdio.h>

 main ()
{
	int NP,KS,JK,GPJ,G;
	char lagi ;
	
	atas :
	system ("cls");
	printf ("\t\t ** DAFTAR UPAH MINGGUAN ** \n\n");
	printf ("Masukkan Nomor Pegawai= "); scanf("%d"),& NP;
	printf ("Masukkan Kerja Shift [1/2]= "); scanf("%d"),& KS;
	printf ("Masukkan Jam Kerja = "); scanf("%d"),& JK ;
	printf ("Masukkan Gaji Per Jam = "); scanf("%d"),& GPJ;
	
	if (KS ==1)
	G = JK*GPJ;
	else 
	G = JK*GPJ*1,5;
	
	printf ("\n Nomor Pegawai = %d",NP);
	printf ("\n Kerja Shif [1/2] = %d",KS);
	printf ("\n Jam Kerja  = %d",JK);
	printf ("\n Gaji Per Jam  = %d",NP);
	printf ("\n\n ======================================================\n");
	printf ("\n Gaji anda minggu ini sebesar Rp. %d",G);
	printf ("\n\n Hitung Lagi [Y/N]=");(" %d",NP);("%c,lagi");
	
	lagi = getche ();
	if (lagi =='Y' || lagi =='y');
	goto atas ;	
}

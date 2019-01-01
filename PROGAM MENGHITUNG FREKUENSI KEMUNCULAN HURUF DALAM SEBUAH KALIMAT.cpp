#include <stdio.h>
#include <conio.h>
int main (){
	char kalimat [50];
	int i,temu=0;
	char cari ;
	
	printf ("masukan kalimat (50 char) : ");
	scanf("%[^]",kalimat);
	printf("masukan huruf (case sensitif ) : ");
	scanf("%s",&cari);
	for(i=0;kalimat[i]!='\0';i++){
		if(cari==kalimat[i])temu++;
	
}
if(temu!=0)
printf("\n terdapat sebanyak %dhuruf '%c' dari kalimat di atas !");
getch();
}

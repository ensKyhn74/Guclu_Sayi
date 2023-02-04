#include <stdio.h>
// klavyeden girilen sayı güçlü sayı mı değil mi? 
// 145 = 1! + 4! + 5! dolayısıyla 145 güçlü sayıdır.
// 145 ve 40585 güçlü sayıdır.

int main() 

{ 

 int toplam = 0;
 int kalan;
 int sayi;
 int i;
 
 printf("sayi girin: ");
 scanf("%d",&sayi); 
 
 int geciciSayi = sayi;
 
 while(sayi != 0)                                             
 {
  int fact = 1; 
  		     					 
  kalan = sayi % 10;                    
   
   for(i = 1 ; i <= kalan ; i++)                    
   {
     fact *= i; // 5!=120                                       
   }

   toplam += fact;                              
   sayi /= 10;                         
 }
 
 if(toplam == geciciSayi) 
 {
  printf("%d guclu sayi",geciciSayi);
 }
 
 else
 {
   printf("%d guclu sayi degil",geciciSayi);  
 }

 return 0;
  
}
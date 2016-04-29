#include<stdio.h>
#include<stdlib.h>

int main(void){
	
FILE *file = fopen("/home/rabus/Masaüstü/input.txt", "r");

   char birkelime[100];
   int c;
   do {
      c = fscanf(file,"%s",birkelime); /* dosyadan bir kelime oku... */
      if (c != EOF)
         printf("%s\n",birkelime);    /* ekrana yaz...            */
   } while (c != EOF);             /* ta ki EOF olana dek..      */
   fclose(file);                    /* dosyayı kapa       */
   
    return 0;
}

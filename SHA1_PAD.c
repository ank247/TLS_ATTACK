
 #include <stdio.h>
 #include <stdint.h>
 #include <string.h>
// #include <math.h>

 #define H0 67452301
 #define H1 EFCDAB89
 #define H2 98BADCFE
 #define H3 10325476
 #define H4 C3D2E1F0
 #define N 32

 void parse_sha1_pad(char *SHA1_PAD, int *M) ;

 void main()
 {
   char *SHA1_PAD ;
   int *M ;
   printf("Enter SHA1_PAD\n") ;
   scanf("%s", SHA1_PAD) ;
   parse_sha1_pad(SHA1_PAD, M) ;
   xor_by_word(M) ;
 }

 void parse_sha1_pad(char *SHA1_PAD, int *M )
 {
   uint8_t i, count ;
   count = 0 ;
   for(i = 0 ; i < N ; i++)
   {
     M[i] = SHA1_PAD[count] ;
     count++ ;
     while(count < 16)
         {
            M[i] = strcat(M[i],SHA1_PAD[count]) ;    
            count++ ;          
         }
   }
   return &M ; 
 }

 void xor_by_word(int *M)
 {
   uint8_t i ;
    
 } 

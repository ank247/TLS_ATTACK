
 #include <stdio.h>
 #include <stdint.h>
//  #include <math.h>
 #include <stdlib.h>

 int pow(int a , int b)
 {
 
  int i , multiply = 1 ;
  for(i = 0 ; i < b ; i++)
  {
   
   multiply = multiply * a ;
 
  }
  
  return multiply ;
  
 }
 int main()
 {
   
   int public_finite_key , cli_secret_key , serv_secret_key , 
          cli_auth_key , serv_auth_key , cli_public_key , serv_public_key , 
          public_key_prime_number ;

  // Group consists of < 1,...,2^16 > 

   printf("Choose public_finite_key by Client:\n") ;
   public_key_prime_number = 100091 ; //choose_prime_number() ;
   printf("%d\n",pow(1,2)) ;

   scanf("%d", &public_finite_key) ;
  // send public_key to server and client.
   printf("%d %d\n", public_finite_key , public_key_prime_number) ;
   
   printf("Enter secret_key by Client:\n") ;
   scanf("%d",&cli_secret_key ) ; 

   printf("Enter secret_key by Server:\n") ;
   scanf("%d",&serv_secret_key ) ; 

   cli_public_key = (pow( public_finite_key , cli_secret_key )) 
                         / public_key_prime_number ;
   printf(" CliPublicKey: %d\n" , cli_public_key) ;

   serv_public_key = pow( public_finite_key , serv_secret_key ) 
                          % public_key_prime_number ;      
   printf(" ServPublicKey: %d\n" , serv_public_key) ;
  
   serv_auth_key = pow( cli_public_key , serv_secret_key ) 
                        % public_key_prime_number;
   printf(" ServAuthKey : %d\n", serv_auth_key) ;

   cli_auth_key = pow( serv_public_key , cli_secret_key ) 
                       % public_key_prime_number;
   printf(" CliAuthKey : %d\n", cli_auth_key ) ;

   return 0 ;

 }


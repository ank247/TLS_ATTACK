
 #include <stdio.h>
 #include <stdlib.h>
 #include <stdint.h>

 void check_psk_key_exchange_modes(struct psk_key_exchange_modes PskKeyExchangeModes) ;
 enum psk_key_exchange_mode{

                            psk_ke = 0,
                            psk_ecdhe_ke = 1,

                           } ;
 enum psk_key_exchange_mode Psk_Key_Exchange_Mode ;
 enum psk_key_exchange_mode * PskKeyExchangeMode ;
      PskKeyExchangeMode = &Psk_Key_Exchange_Mode ; 

 struct psk_key_exchange_modes{

                                uint8_t Psk_Key_Exchange_Modes ;
 
                              } PskKeyExchangeModes ;

 void check_psk_key_exchange_modes(struct psk_key_exchange_modes PskKeyExchangeModes) 
 {
 
  if( PskKeyExchangeModes.Psk_Key_Exchange_Modes == PskKeyExchangeMode->psk_ecdhe_ke)
   {
  
     printf("ECDHE Mode!!\n") ;

   }
  else

   printf("Failed!!") ;
   // abort() ;

 }

 void main()
 {

  printf("Enter Psk-KeyExchangeModes\n") ;
  scanf( "%d", &PskKeyExchangeModes.Psk_Key_Exchange_Modes ) ;
  check_psk_key_exchange_modes(PskKeyExchangeModes) ;
  
 }

 

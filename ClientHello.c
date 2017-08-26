
 #include <stdio.h>
 #include <stdint.h>
 #include "ServerHello.c"

  void select_handshake_msg_type(struct key_share_entry Handshake) ; 
  void check_key_share_entry(struct key_share_entry Handshake) ;
  void check_key_exchange_entry(struct key_share_entry Handshake) ;
  void select_earlyDataIndication_msg_type(struct early_data_indication 
                                       EarlyDataIndication) ;

  uint16_t ProtocolVersion ;  
 
//  opaque Random[32] ;  

  uint8_t CipherSuite[2] ;    

  select_HandshakeType(HandShakeType)
    {
       if(HandShakeType == HandshakeType.client_hello)
         {
                 printf("CLientHello\n") ;
         }
       else if(HandShakeType == HandshakeType.server_hello)
       {
                 printf("ServerHello\n") ;
       }
       else if(HandShakeType == HandshakeType.end_of_early_data)
       {
                 printf("EndOfEarlyData\n") ;
       }
       else if(HandShakeType == HandshakeType.hello_retry_request)
       {
                 printf("HelloRetryRequest\n") ;
       }
       else if(HandShakeType == HandshakeType.encrypted_extensions)
       {
                 printf("EncryptedExtensions\n") ;
       }
       else if(HandShakeType == HandshakeType.certificate_request)
       {
                 printf("CertificateRequest\n") ;
       }
       else if(HandShakeType == HandshakeType.certificate)
       {
                 printf("Certificate\n") ;
       }
       else if(HandShakeType == HandshakeType.certificate_verify)
       {
                 printf("CertificateVerify\n") ;
       }
       else if(HandShakeType == HandshakeType.finished)
       {
                 printf("Finished\n") ;
       }
       else if(HandShakeType == HandshakeType.new_session_ticket)
       {
                 printf("NewSessionTicket\n") ;
       }
       else if(HandShakeType == HandshakeType.key_update)
       {
                 printf("KeyUpdate\n") ;
       }
   }

   void select_handshake_msg_type(struct key_share_entry Handshake)
    {
       if(Handshake.KeyShareEntry == "client_hello")
       {
                printf("CLientShares\n") ;
       }
       else if(Handshake.KeyShareEntry == "hello_retry_request")
       {
                printf("SelectedGroup\n") ;
       }
       else if(Handshake.KeyShareEntry == "server_share")
       {
                printf("ServerShare\n") ;
       }
    }

   void pick_key_Exchange(struct key_share_entry Handshake) 
   {
                printf("Enter KeyShareExchange\n") ;
                scanf("%u", &Handshake.KeyShareEntry.Key_Exchange) ;
                printf("%u",Handshake.KeyShareEntry.Key_Exchange) ;
                return Handshake ;
   }

   void select_handshake_msg_type(struct key_share_entry Handshake)
    {
       if(Handshake.KeyShareEntry == "client_hello")
       {
               printf("CLientShares\n") ;
       }
       else if(Handshake.KeyShareEntry == "hello_retry_request")
       {
               printf("SelectedGroup\n") ;
       }
       else if(Handshake.KeyShareEntry == "server_share")
       {
               printf("ServerShare\n") ;
       }
    }

    void select_earlyDataIndication_msg_type(struct early_data_indication  
                                       EarlyDataIndication) 
    {
       if(EarlyDataIndication.Early_Data_Indication == "client_hello")
       {
               printf("CLientDataIndication\n") ;
       }
       else if(EarlyDataIndication.Early_Data_Indication ==
             "encrypted_extensions")
       {
               printf("EncryptedExtensionData\n") ;
       }
       else if(EarlyDataIndication.Early_Data_Indication == 
             "new_session_ticket")
       {
              printf("NewSessionTicket\n") ;
              scanf("%d", &EarlyDataIndication.Early_Data_Indication.Early_Data) ;
              printf("%d\n",EarlyDataIndication.Early_Data_Indication.Early_Data) ;
       }
    }

    main()
    {
             printf("Enter KeyShareEntry\n") ;
             scanf("%s",&Handshake.KeyShareEntry) ;

             select_handshake_msg_type(Handshake) ;   
             check_key_share_entry(Handshake) ;

             pick_key_Exchange(Handshake) ;
             check_key_exchange_entry(Handshake) ;
             printf("%u",Handshake.KeyShareEntry.KeyExchange) ; 
             return 0 ; 
    }

   struct cli_hello{
                          uint8_t protocol_version  ;             
                          char  random ;
                          uint8_t legacy_session_id ;
                          uint16_t cipher_suites ;
                          uint8_t legacy_compression_method ;
                          uint16_t extensions ;
                   } ClientHello ;        

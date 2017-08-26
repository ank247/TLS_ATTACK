
 #include <stdint.h>
 #include <stdlib.h>
 #include "cli_size_file.h"
 #include "cli_value_file.h"
 #include "serv_without_value_file.h"
 #include <math.h>

 void serv_value(struct server_hello * Server_Hello) ;     
 void alert_serv_value(struct server_hello * Server_Hello) ;
 void select_HandshakeType(int) ;
 void hello_retry_request(struct server_hello *Server_Hello ,
                          struct server_hello * Hello_Retry_Request) ;

 void check_CertificateAuthoritiesExtension() ;

 uint16_t ProtocolVersion ;

//  opaque Random[32] ;  
 
 uint8_t CipherSuite[2];
  
 struct server_hello{

                     uint8_t protocol_version  ;
                     char random ;
                     uint16_t cipher_suites ;
                     uint16_t extensions ;

                    } ;

  
  struct server_hello _ServerHello, _HelloRetryRequest  ;
  struct server_hello * Server_Hello, * Hello_Retry_Request  ;  
    
  Server_Hello = &_ServerHello ;
  Hello_Retry_Request = &_HelloRetryRequest ;
 
  void hello_retry_request(struct server_hello * Server_Hello ,
                           struct server_hello * Hello_Retry_Request )
  {
   
   Hello_Retry_Request->protocol_version = Server_Hello->protocol_version ;
   Hello_Retry_Request->cipher_suites = Server_Hello->cipher_suites ;
   Hello_Retry_Request->extensions = Server_Hello->extensions ;
   client_verify(Hello_Retry_Request) ;

  }

  void client_verify(struct server_hello * Hello_Retry_Request)
  {

   if(((Hello_Retry_Request->protocol_version) && 
       (Hello_Retry_Request->cipher_suites) &&
       (Hello_Retry_Request->extensions)) == '0')
      {
       printf("Decode Error!!\n") ;
       abort(connection()) ;
      }
   else if(((Client_Hello->protocol_version == Hello_Retry_Request->protocol_version)&&
           (Client_Hello->cipher_suites == Hello_Retry_Request->cipher_suites) &&
           (Client_Hello->extensions == Hello_Retry_Request->extensions)) == 0 )
      {
       printf("illegal_parameter!!\n") ;
       abort(connection()) ;
      }
   else 
      {
        ;
      }
  }

  void check_CertificateAuthoritiesExtension(CertificateAuthoritiesExtension.authoritie                                             s)
  {
  
   if(((CertificateAuthoritiesExtension.authorities >= 3) && 
       (CertificateAuthoritiesExtension.authorities <= (pow(2,16) - 1))) != 0 )
   {
      printf("Cetificate_Authorise\n") ;
   }
   
   else 
      printf("Error Missing_Extension\n") ;
  }
  
  



  main()
  {
    
    uint8_t HandShakeType ;
    serv_value(Server_Hello) ; 
    alert_serv_value(Server_Hello) ;      
   
    printf("For HandshakeType client_hello :%d\n",HandshakeType->client_hello) ;
    printf("For HandshakeType server_hello :%d\n",HandshakeType->server_hello) ;
    printf("For HandshakeType new_session_ticket :%d\n",
           HandshakeType->new_session_ticket) ;   
    printf("For HandshakeType end_of_early_data :%d\n",
           HandshakeType->end_of_early_data) ;
    printf("For HandshakeType hello_retry_request :%d\n",
           HandshakeType->hello_retry_request) ;
    printf("For HandshakeType encrypted_extensions :%d\n",
           HandshakeType->encrypted_extensions) ;
    printf("For HandshakeType certificate :%d\n",HandshakeType->certificate) ;
    printf("For HandshakeType certificate_request :%d\n",
           HandshakeType->certificate_request) ;
    printf("For HandshakeType certificate_verify :%d\n",
           HandshakeType->certificate_verify) ; 
    printf("For HandshakeType finished :%d\n",HandshakeType->finished) ;
    printf("For HandshakeType key_update :%d\n",HandshakeType->key_update) ;
    printf("For HandshakeType message_hash :%d\n",HandshakeType->message_hash) ;

    printf("Enter byte value for HandshakeType:\n") ;
    scanf("%d",&HandShakeType) ; 
    select_HandshakeType(HandShakeType) ;
    
    printf("Enter CertificateAuthoritiesExtension \n") ;
    scanf("%d", &CertificateAuthoritiesExtension.authorities) ;
    check_CertificateAuthoritiesExtension(CertificateAuthoritiesExtension.authorities) ;
    return 0 ;

  } 

  void serv_value(struct server_hello * Server_Hello)
   {
    
    printf("Enter ProtocolVersion legacy_version \n") ;
    scanf("%d",Server_Hello->protocol_version) ;
    printf("Enter Random key_generation \n") ;
    scanf("%d",Server_Hello->random) ;
    printf("Enter CipherSuites \n") ;
    scanf("%d",Server_Hello->cipher_suites) ;
    printf("Enter Extensions \n") ;
    scanf("%d",Server_Hello->extensions) ;
    return &Server_Hello ;  
    
   }

    void alert_serv_value(struct server_hello * Server_Hello)
    {
     
     if(((Server_Hello->protocol_version == 0x0303 ) && 
        (sizeof(Server_Hello->random) <= 32 ) && 
       ((Server_Hello->cipher_suites >= 2) && 
        (Server_Hello->cipher_suites <= ( pow(2,16) - 2 ))) && 
       ((Server_Hello->extensions >= 8) && 
        (Server_Hello->extensions <= (pow(2,16) - 1)))) == 1)
        {
         
         printf("ServerHello \n") ;
         exit(0) ;

        } 
     else
       {

        printf("ERROR in HandShake. \n") ;
        hello_retry_request() ;  
     // system(abort()) ;
        exit(0) ;

       }
     return 0;

    }

    select_handshake_msg_type(struct key_share_entry) 
    {
 
     if(Handshake.KeyShareEntry.key_exchange == "client_hello")
       {
       
        printf("CLientShares\n") ;

       }
       
     else if(Handshake.KeyShareEntry.key_exchange == "hello_retry_request")
       {

        printf("SelectedGroup\n") ;

       }

     else if(Handshake.KeyShareEntry.key_exchange == "server_share")
       {
    
        printf("ServerShare\n) ;

       }
    
   }

   






















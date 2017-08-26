
  struct cli_hello{
           uint8_t protocol_version  ;
           char  random ;
           uint8_t legacy_session_id ;
           uint16_t cipher_suites ;
           uint8_t legacy_compression_method ;
           uint16_t extensions ;
          } ClientHello ;
  
   enum signature_scheme{

                          rsa_pkcs1_sha256 = 0x0401,
                          rsa_pkcs1_sha384 = 0x0501,
                          rsa_pkcs1_sha512 = 0x0601,

                          ecdsa_secp256r1_sha256 = 0x0403,
                          ecdsa_secp384r1_sha384 = 0x0503,
                          ecdsa_secp521r1_sha512 = 0x0603,

                          ed25519 = 0x0807,
                          ed448 = 0x0808,

                          rsa_pkcs1_sha1 = 0x0201,
                          ecdsa_sha1 = 0x0203,

//                        private_use = { },

   

                     } *SignatureScheme ;

   enum signature_scheme Signature_Scheme ;
//   enum signature_scheme *SignatureScheme ; 
   SignatureScheme = &Signature_Scheme ;

    struct signature_scheme_list{
                             
                            uint16_t Signature_Scheme_List ;
                            
                          } SignatureSchemeList ;

    enum name_group{

                          secp256r1 = 0x0017,
                          secp384r1 = 0x0018,
                          secp521r1 = 0x0019,

                          ffdhe2048 = 0x0100,
                          ffdhe3072 = 0x0101,
                          ffdhe4096 = 0x0102,
                          ffdhe6144 = 0x0103,
                          ffdhe8192 = 0x0104,

//                        private_use = { },

                        } ;

   enum name_group Name_Group ;
//   enum name_group *NameGroup ;
   NameGroup = &Name_Group ;
      
    struct name_group_list{

                            uint16_t Name_Group_List ;

                          } NameGroupList ;
   
     struct key_share_entry{

                            struct key_share_exchange_entry KeyShareEntry ;

                           } Handshake ;
 
     struct key_share_exchange_entry{

                                      uint16_t Key_Exchange ;

                                    } KeyShareEntry ;

     struct empty{
                    ;
                 }
     struct empty Empty ;

     struct early_data_indication{

                                  struct early_data Early_Data_Indication ;

                                 } EarlyDataIndication ;
  
     struct early_data{
                       
                       uint32_t Early_Data ;

                      } Early_Data_Indication ;
/*
     enum name_group{

                          secp256r1 = 0x0017,
                          secp384r1 = 0x0018,
                          secp521r1 = 0x0019,

                          ffdhe2048 = 0x0100,
                          ffdhe3072 = 0x0101,
                          ffdhe4096 = 0x0102,
                          ffdhe6144 = 0x0103,
                          ffdhe8192 = 0x0104,

//                        private_use = { },

                      } ;

    enum name_group Name_Group ;
//   enum name_group *NameGroup ;
    NameGroup = &Name_Group ;

*/








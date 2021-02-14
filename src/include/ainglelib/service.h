#pragma once
#ifdef __cplusplus
extern "C" {
#endif
uint64_t aingle_timestamp(void);
uint32_t aingle_block_height(void);
size_t aingle_input_length(void);
size_t aingle_call_output_length(void);
void aingle_self_address(const void *address);
void aingle_caller_address(const void *address);
void aingle_entry_address(const void *address);
void aingle_get_input(const void *inputptr);
void aingle_get_call_output(const void *res);
uint32_t aingle_check_witness(const void *address);
/*return the blockhash length*/
size_t aingle_current_blockhash(const void *blockhash);
/*return the txhash length*/	
size_t aingle_current_txhash(const void *txhash);
void aingle_return(const void *res, const size_t len);
void aingle_notify(const void *msg, const size_t len);
//void debug(void *msg, size_t len);
void aingle_debug( const char* cstr, const uint32_t len);
void aingle_panic( const char* cstr, const uint32_t len);
/*return the output length.*/
size_t aingle_call_contract(const void *contract_address,const void *input, const size_t len);
size_t aingle_storage_read(const void *keyptr, const size_t keylen, const void *valptr, const size_t vlen, const size_t offset);
void aingle_storage_write(const void *keyptr, const size_t keylen, const void *valptr, const size_t vlen);
void aingle_storage_delete(const void *keyptr, const size_t keylen);
size_t aingle_contract_migrate(const void *codeptr,const size_t codelen, const uint32_t needstorage, const void *nameptr, const size_t namelen, const void *versionptr, const size_t versionlen, const void *authorptr, const size_t authorlen, const void *emailptr, const size_t emaillen, const void *descptr, const size_t desclen, const void *newaddrptr);
size_t aingle_contract_create(const void *codeptr,const size_t codelen, const uint32_t needstorage, const void *nameptr, const size_t namelen, const void *versionptr, const size_t versionlen, const void *authorptr, const size_t authorlen, const void *emailptr, const size_t emaillen, const void *descptr, const size_t desclen, const void *newaddrptr);
void aingle_contract_destroy(void);
void aingle_sha256(void *src, uint32_t srclen, void *dst);
//void abort(void *msg, size_t len);
#ifdef __cplusplus
}
#endif

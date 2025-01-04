#ifndef VOLATILE_STORE_HANDLERS_H
#define VOLATILE_STORE_HANDLERS_H

#include<volatile_page_store.h>
#include<page_access_methods.h>
#include<page_modification_methods.h>

void initialize_pam_for_vps(page_access_methods* pam_p, volatile_page_store* vps);

void initialize_pmm_for_vps(page_modification_methods* pmm_p, volatile_page_store* vps);

#endif
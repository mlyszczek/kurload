/* ==========================================================================
    Licensed under BSD 2clause license See LICENSE file for more information
    Author: Michał Łyszczek <michal.lyszczek@bofc.pl>
   ========================================================================== */

#ifndef BNWLIST_H
#define BNWLIST_H 1

#include <arpa/inet.h>

int bnw_init(const char *, int);
void bnw_destroy(void);
int bnw_is_allowed(in_addr_t);

#endif

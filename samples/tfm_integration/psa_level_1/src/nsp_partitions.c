/*
 *
 * Created by Martin Schönstedt 
 * 
 */

#include "nsp_partitions.h"

// the identifier of this cpu 
uint32_t cpu_ident;

void nsp_create_partition(uint32_t partition_size){
    uint16_t new_uid;
    psa_status_t status;

    status = nsp_create(partition_size, &new_uid);
}


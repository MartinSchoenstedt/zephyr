/*
 *
 * Created by Martin Schönstedt 
 * 
 */
#ifndef _NSP_PARTITIONS_H_
#define _NSP_PARTITIONS_H_


// board dependent constants
#define NUM_CPUS 2
#define CPU_ID_REG_ADDR_NS 0x4001F000U 

#include "nsp/partition.h"


/**
 * \brief init the NSP partitioning from the main CPU * 
 */
void nsp_partitions_init();

/**
 * \brief create a new NSP partition
 * 
 * \param[in] partition_size    The Size of the partition which shall be created.
 */
void nsp_create_partition(uint32_t partition_size);

#endif /* _NSP_PARTITIONS_H_ */
#include <stdlib.h>

#include "tas_ll.h"
#include "tas_rdma.h"

#include "internal.h"

int rdma_read(int fd, uint32_t len, uint32_t loffset, uint32_t roffset)
{
    return -1;
}

int rdma_write(int fd, uint32_t len, uint32_t loffset, uint32_t roffset)
{
    return -1;
}

int rdma_cq_poll(int fd, struct rdma_wqe** compl_evs, uint32_t num, uint32_t timeout)
{
    return -1;
}

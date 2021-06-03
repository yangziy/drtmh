#include <infiniband/verbs.h>

int main() {
    struct ibv_device **dev_list = nullptr; 
    struct ibv_context *ib_ctx = nullptr; 
    struct ibv_pd *pd = nullptr; 
    int num_devices;
    dev_list = ibv_get_device_list(&num_devices);
    for (int idx = 0; idx < num_devices; idx++) {
        printf("idx: %d name: %s\n", idx, dev_list[idx]->name);
    }
}
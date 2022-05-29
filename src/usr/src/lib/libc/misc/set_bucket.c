#include <lib.h>
#include <minix/rs.h>
#include <unistd.h>

int set_bucket(int bucket_nr) {
    endpoint_t pm_pt;

    if (minix_rs_lookup("pm", &pm_pt) != 0)
    {
        errno = ENOSYS;
        return -1;
    }
    message m;

    return (_syscall(pm_pt, PM_SETBUCKET, &m));
}
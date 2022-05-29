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
    m.m1_i1 = getpid();
    m.m1_i2 = 0;
    m.m1_i3 = 0;

    return (_syscall(pm_pt, PM_SETBUCKET, &m));
}
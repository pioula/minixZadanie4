#include <lib.h>
#include <minix/rs.h>
#include <unistd.h>

int getlcapid(int bucket_nr) {
    endpoint pm_pt;

    if (minix_rs_lookup("pm", &pm_pt) != 0)
    {
        printf("PRZYPAŁ");
        errno = ENOSYS;
        return -1;
    }
    message m;

    return (_syscall(pm_pt, PM_SETBUCKET, &m));
}
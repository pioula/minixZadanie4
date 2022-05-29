cd /usr/src/minix/kernel; rm do_schedule.o
cd /usr/src/minix/lib/libsys; rm sys_schedule.o && rm sys_schedule.pico
cd /usr/src/minix/servers/sched; rm main.o && rm schedule.o
cd /usr/src/minix/servers/pm; rm schedule.o
cd /usr/src/lib/libc; rm set_bucket.o && rm set_bucket.pico
echo 'Done!'
echo "make && make install"
cd /usr/src/minix/servers/pm && make && make install
echo "make do_hdboot"
cd /usr/src/releasetools && make do-hdboot
echo "reboot"
reboot
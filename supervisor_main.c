#include <pspkernel.h>

#define KERNEL_DELAY 10000

PSP_MODULE_INFO("PatchMod_Supervisor", 0x1000, 1, 0);
PSP_NO_CREATE_MAIN_THREAD();

const char* sv_check_permissions (int client) {
    sceKernelDelayThread(KERNEL_DELAY);
    return (client == 123 ? "yes" : "no");
}

int module_start (SceSize argc, void *argp) {
    return 0;
}

int module_stop (SceSize args, void *argp) {
    return 0;
}

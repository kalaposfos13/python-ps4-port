#include <orbis/Pad.h>
#include <orbis/SystemService.h>
#include <orbis/libkernel.h>
#include <stdio.h>
#include "assert.h"
#include "logging.h"
#include "types.h"

// https://github.com/kalaposfos13/eboot-hooks-prx
int hookable_function(int a) {
    return 0;
}

int main(void) {
    LOG_INFO("Starting homebrew");

    if (hookable_function(42) != 13) {
        LOG_ERROR("Hooking failed");
    } else {
        LOG_INFO("Hooking succeeded");
    }

    sceSystemServiceLoadExec("EXIT", nullptr);
    return 0;
}

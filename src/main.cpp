#include <stdio.h>
#include <orbis/libkernel.h>
#include <orbis/SystemService.h>
#include <orbis/Pad.h>
#include "types.h"
#include "logging.h"
#include "assert.h"

int main(void) {
    LOG_INFO("Starting homebrew");

    sceSystemServiceLoadExec("EXIT", nullptr);
    return 0;
}

#include <orbis/SystemService.h>
#include <orbis/libkernel.h>
#include <stdio.h>
#include "assert.h"
#include "logging.h"
#include "types.h"

#include "Python.h"

int main(void) {

    LOG_INFO("Starting homebrew");

    Py_Initialize();
    PyRun_SimpleString("print('Hello from Python 3.15 on PS4!')");
    Py_Finalize();

    sceSystemServiceLoadExec("EXIT", nullptr);
    return 0;
}

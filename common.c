// #include <inttypes.h>
// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>

// #include <arpa/inet.h>

#include "common.h"

void DieWithUserMessage(const char *msg, const char *detail) {
    fputs(msg, stderr);
    fputs(": ", stderr);
    fputs(detail, stderr);
    fputc('\n', stderr);
    exit(1);
}

void DieWithSystemMessage(const char *msg) {
    perror(msg);
    exit(1);
}


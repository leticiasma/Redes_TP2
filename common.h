// #pragma once

// #include <stdlib.h>
// #include <stdio.h>
// #include <string.h>
// #include <unistd.h>
// #include <stdbool.h>

// #include <sys/types.h>
// #include <sys/socket.h>
// #include <arpa/inet.h>

// #define BUFSZ 500


#include <stdio.h>
#include <stdlib.h>

#define MAXSTRINGLENGTH 1024 //buff size

void DieWithUserMessage(const char *msg, const char *detail);

void DieWithSystemMessage(const char *msg);
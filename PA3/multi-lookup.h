

// libraries
#include <pthread.h>	// threading
#include <stdio.h>

#include "util.h"

#define MAX_INPUT_FILES 10
#define MAX_RESOLVER THREADS 10
#define MAX_REQUESTER_THREADS 5
#define MAX_NAME_LENGTH 5
#define MAX_IP_LENGTH INET6_ADDRSTRLEN 	// (This is an optional upper-limit. Your program may handle longer ip address string
				// but you may not limit the name length to less than INET6 ADDRSTRLEN characters including the null
#define BUFFER_SIZE 1036	// Oversized buffer, should decrease to ensure requestor blocking function is implemented

void parseFile(FILE *fp){
}

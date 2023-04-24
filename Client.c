/*
 * filename server_ipaddress portno
 * argv[0] filename
 * argv[1] server_ipaddress
 * argv[2] portno
 */

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>

void error(const char *msg){
	perror(msg);
	exit(0);
}

int main(int argc, char *argv[]){


}


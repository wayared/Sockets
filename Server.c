#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>

void error(const char *msg){
	perror(msg);
	exit(1);
}

int main(int argc, char *argv[] ){

	if(argc < 2){
		fprintf(stderr, "Port No not provided. Program terminated\n");
		exit(1);

	}

	int sockfd , newsockfd, portno, n;
	char buffer[255];

	struct sockaddr_in serv_addr , cli_addr;
	socklen_t clilen;

	sockfd = socket(AF_INET, SOCK_STREAM, 0);

	if(sockfd < 0){
		error("Error opening Socket.")

	}

	bzero((char *) &serv_addr, sizeof(serv_addr));



}

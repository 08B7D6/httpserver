#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/socket.h>

int create_socket(){
	int sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sockfd == -1){
			perror("Unable to create socket");
			exit(EXIT_FAILURE);
			}
	return sockfd;
}

int main(){
	int sockfd = create_socket();
	

	printf("Socket has been created");
	
	close(sockfd);

	return 0;
}

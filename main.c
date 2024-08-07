#include <stdio.h>
#include <sys/socket.h>

int create_socket(){
	int sockfd = socket(AF_INET, SOCK_STREAM, 0);
	if (sockfd == -1){
			perror("webserver (socket)");
			}
	return sockfd;
}

int main(){
	int sockfd = create_socket();
	if (sockfd == -1){
		return 1;
	}

	printf("Socket Created");
	return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <netdb.h>
#define MAXBUFLEN 200
#define SERVERPORT 4952 // the port users will be connecting to
int main()
{
int sockfd;
struct sockaddr_in their_addr; // connector's address information
socklen_t addr_len;
addr_len = sizeof their_addr;
//struct hostent *he;
int numbytes;
int arg1;
int arg2;
if ((sockfd = socket(AF_INET, SOCK_DGRAM, 0)) == -1) {
perror("socket");
exit(1);
}
their_addr.sin_family = AF_INET; // host byte order
their_addr.sin_port = htons(SERVERPORT); // short, network byte order
their_addr.sin_addr.s_addr = inet_addr("127.0.0.1");
//memset(their_addr.sin_zero, '\0', sizeof their_addr.sin_zero);
printf("Enter first number:\n");
scanf("%d",&arg1);
if ((numbytes = sendto(sockfd, &arg1, 4, 0,
(struct sockaddr *)&their_addr, sizeof their_addr)) == -1) {
perror("sendto");
exit(1);
}
printf("Enter second number:\n");
scanf("%d",&arg2);
if ((numbytes = sendto(sockfd, &arg2, 4, 0,
(struct sockaddr *)&their_addr, sizeof their_addr)) == -1) {
perror("sendto");
exit(1);
}
int buf;
printf("sent %d bytes to %s\n", numbytes, inet_ntoa(their_addr.sin_addr));
if ((numbytes = recvfrom(sockfd, &buf, MAXBUFLEN-1 , 0,
(struct sockaddr *)&their_addr, &addr_len)) == -1) {
perror("recvfrom");
exit(1);
}
printf("After adding: Received: %d\n",buf);
close(sockfd);
return 0;
}
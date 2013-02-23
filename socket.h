#ifndef CLASS_SOCKET_H
#define CLASS_SOCKET_H

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sstream>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <netdb.h> 
#include <string>

#define BUFF_SIZE 1024

using namespace std;

class class_socket
{
      private:
	
      public:
	class_socket();
	
	int sock;
	struct sockaddr_in server_addr;
	struct hostent *server;
	void set_server_address(string host,int port);
	int s_connect();
	int s_disconnect();
	string s_read();
	int s_write(char*);
};
 
#endif // CLASS_SOCKET_H
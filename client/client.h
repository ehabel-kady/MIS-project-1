// Client side C/C++ program to demonstrate Socket programming
#include <stdio.h>
#include <iostream>
#include <sys/socket.h>
#include <stdlib.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <syscall.h>
#include <string.h>
#include <string>
#define PORTNUM 9999

class Client{
    public:
        Client();
        int proceed();
        ~Client();
};
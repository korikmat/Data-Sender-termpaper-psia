#ifndef SENDER_H
#define SENDER_H

void send_data(char* local_ip_addr, int local_port, char* dest_ip_addr, int dest_port, unsigned int CRC, char* filename);
void set_ports_and_ip(struct sockaddr_in* client_addr, struct sockaddr_in* server_addr, 
                char* local_ip_addr, int local_port, char* dest_ip_addr, int dest_port);
void send_SYNC_packet(int socket_desc, int local_port, char* filename, unsigned char *file_hash);
void send_DATA_packet(int socket_desc, char* filename, unsigned char *file_hash, unsigned int CRC);

#endif

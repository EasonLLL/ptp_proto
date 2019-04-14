//
// Created by ganesh on 13/4/19.
//

#include <stdio.h>
#include "udpService/udpService.h"

#define PTP_MASTER_IP_1     "127.0.0.1"
#define PTP_MASTER_PORT_1   100030

void msg_handler_cb(void *msg){

    //TODO handle
}



int main() {

    udpService_t    *uServer = NULL;

    udp_service_init();

    udp_service_create(&uServer, UDP_SERVICE_SERVER_UNICAST, PTP_MASTER_IP_1, PTP_MASTER_PORT_1, msg_handler_cb);

    udp_service_send_msg();

    udp_service_deInit();

    return 0;
}
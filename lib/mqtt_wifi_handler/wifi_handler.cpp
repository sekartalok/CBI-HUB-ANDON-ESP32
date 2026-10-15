#include"wifi_handler.h"

int wifi_mqtt_handler::ip_config(void){
    if (!WiFi.config(ip_local, ip_gateway, ip_masking)) {
        return 1;
    }

    return 0;

}

int wifi_mqtt_handler::wifi_connect(void){

   // if(ip_config()){return 1;}

    //WiFi.mode(WIFI_STA);
    WiFi.begin(ssid_wifi,password_wifi);

    int i = 0;
    while(WiFi.status() != WL_CONNECTED){
        if(i > loop_head_max){
            return 1;
        }
        delay(100);
        i++;
    }
    return 0;
}

int wifi_mqtt_handler::mtqq_handler_init(void){
    if(wifi_connect()){return 1; }
    return 0;

}
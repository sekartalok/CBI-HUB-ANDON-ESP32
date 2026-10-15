#pragma once
#include "wifi_config.h"
#include <PubSubClient.h>
#include <Arduino.h>
#include <WiFi.h>
#include "wifi_config.h"

#define loop_head_max 100

class wifi_mqtt_handler{
private:

int ip_config(void);
int wifi_connect(void);

public:

int mtqq_handler_init(void);
};
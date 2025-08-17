#ifndef _USER_CONFIG_OVERRIDE_H_
#define _USER_CONFIG_OVERRIDE_H_

// ========================
//  Ethernet (WT32-ETH01 v1.4)
// ========================
#define USE_ETHERNET
#define ETH_TYPE 1   // LAN8720
#define ETH_CLKMODE ETH_CLOCK_GPIO0_IN
#define ETH_ADDRESS 1
#define ETH_MDC 23
#define ETH_MDIO 18

// ========================
//  MCP23017 (I²C GPIO expander)
// ========================
#define USE_MCP230xx

// ========================
//  DS18B20 (1-Wire temperature sensor)
// ========================
#define USE_DS18x20

// ========================
//  Ultrasonic SR04 / SR04T
// ========================
#define USE_HCSR04

#endif  // _USER_CONFIG_OVERRIDE_H_

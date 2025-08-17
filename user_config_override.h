#pragma once

// =============================
// ETH for WT32-ETH01
// =============================
#define USE_ETHERNET
#define USE_WT32_ETH01

// =============================
// I2C + MCP23017
// =============================
#define USE_I2C
#define USE_MCP230xx

// =============================
// 1-Wire DS18B20
// =============================
#define USE_DS18x20            // obsługa DS18x20
#define DS18X20_USE_ID         // adresowanie po ID czujnika

// =============================
// SR04T (ultradźwiękowy)
// =============================
#define USE_SR04

// =============================
// SDM630 (Modbus/RS485 liczniki)
// =============================
#define USE_SDM630
#define USE_SDM72        // włączone również SDM72 (ma część wspólną)
#define USE_SDM120
#define USE_SDM220
#define USE_SDM230
#define USE_SDM72
#define USE_SDM630

// =============================
// Dodatkowe ustawienia
// =============================
#define USE_RULES              // żeby można było pisać reguły w Tasmocie
#define USE_SCRIPT             // jeśli chcesz skrypty w konsoli

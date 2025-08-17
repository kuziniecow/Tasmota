#pragma once
/*****************************************************
 * user_config_override.h
 * Tasmota32 build for WT32-ETH01 + MCP23017 + DS18B20 + SR04T
 *
 * Jak użyć:
 * 1) Skopiuj ten plik do: tasmota/user_config_override.h w Twoim fork'u.
 * 2) Zbuduj środowisko "tasmota32" (GitHub Actions lub lokalnie).
 * 3) Po flashu ustaw Ethernet w Konsoli:
 * Backlog EthType 1; EthAddress 0; EthClockMode 3; Restart 1
 * (Jeśli ETH nie wstanie, spróbuj EthAddress 1)
 *
 * Piny I2C/DS/SR04 przypisz w "Configure Module" według Twojego okablowania.
 *****************************************************/

// ===================== Ethernet (WT32-ETH01 / LAN8720) =====================
#define USE_ETHERNET
#define USE_ETHERNET_LAN8720 // PHY LAN8720 dla WT32-ETH01

// ===================== I2C + MCP23017 ======================================
#define USE_I2C
#define USE_MCP230XX // Obsługa MCP23008/MCP23017 (GPIO ekspandery)

// ===================== 1-Wire + DS18B20 ====================================
#define USE_ONEWIRE
#define USE_DS18X20 // DS18B20 i pokrewne

// ===================== HC-SR04 / SR04T =====================================
#define USE_SR04

/*************** Opcjonalne wskazówki (nie są wymagane) **********************
 * - Po uruchomieniu: w Konsoli wpisz I2CScan, aby sprawdzić, czy MCP23017
 * jest widoczny (zwykle adres 0x20). Jeśli nie – dodaj rezystory 4.7k do 3V3.
 * - DS18B20 podpinaj z rezystorem podciągającym 4.7k do 3V3.
 * - SR04T: ECHO przez dzielnik poziomów do 3V3. W module przypisz SR04 Trig/Echo.
 *
 * - Ten plik nie narzuca mapy pinów – przypisujesz je w GUI (Configure Module).
 * - Buduj środowisko: "tasmota32". Artefakty: tasmota32.bin / tasmota32.factory.bin
 *****************************************************************************/

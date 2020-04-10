#include "lbs.h"

// AT+SAPBR - Bearer Settings for Applications Based on IP
char at_cmd_clbs_1[] = "AT+CLBS=1,?\r\n";
char at_cmd_clbs_4[] = "AT+CLBS=4,?\r\n";

void LBS_Init(LBS *lbs, char cid) {
  at_cmd_clbs_1[11] = cid;
  at_cmd_clbs_4[11] = cid;
}

int LBS_GetGPS(char *response) {
  UART_SendString(at_cmd_clbs_1, 13);
  UART_R
}

int LBS_GetDetailGPS(char *response) {
  UART_SendString(at_cmd_clbs_4, 13);
}

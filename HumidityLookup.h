/*
 * Table of the Impedance values/%RH of the HCZ-D5 with the temperature in ohms
 */
#define HUMIDITY_ROWS 15
#define HUMIDITY_COLS 12
PROGMEM const float humidity_lookup[HUMIDITY_ROWS][HUMIDITY_COLS] = {
  {30000,15000,11000,8200,6300,4900,4000,3300,2800,2500,2200,2100},
  {10000,7400,5300,3900,3000,2300,1800,1500,1300,1100,1000,920},
  {4800,3400,2400,1800,1400,1100,870,710,600,510,450,410},
  {2100,1500,1100,820,630,490,390,320,270,230,200,180},
  {980,700,520,400,310,240,190,160,130,110,100,91},
  {480,350,260,200,160,120,100,86,73,63,55,50},
  {250,190,140,110,87,74,61,510,44,38,34,30},
  {130,100,80,64,49,43,36,30,26,23,21,19},
  {73,57,46,37,31,26,22,19,17,15,14,13},
  {41,32,27,22,19,16,14,12,11,10,9.2,8.6},
  {23,19,16,14,11.8,10.2,9.1,8.2,7.5,6.9,6.5,6.1},
  {13,11,9.5,8.4,7.5,6.7,6.1,5.6,5.2,4.9,4.6,4.4},
  {7.2,6.4,5.8,5.2,4.8,4.4,4.1,3.8,3.6,3.4,3.3,3.2},
  {4,3.7,3.5,3.3,3,2.9,2.8,2.6,2.5,2.4,2.4,2.3},
  {2.2,2.2,2.1,2,2,1.9,1.8,1.8,1.7,1.7,1.7,1.6}
};

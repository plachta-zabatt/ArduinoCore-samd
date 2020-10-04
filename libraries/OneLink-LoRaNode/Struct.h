#ifndef ONE_LINK_STRUCT_H
#define ONE_LINK_STRUCT_H


typedef struct SensorReadings{
    unsigned int loadAC;
    unsigned int loadGen;
    bool emergencyPower;
    unsigned int CT1;
    unsigned int CT2;
} SensorReadings;

typedef enum { Sensor_loadAC, Sensor_loadGen, Sensor_emergencyPower, Sensor_CT1, Sensor_CT2 } SensorTypes;
typedef enum { command_restart=0, command_transferGen=1, command_transferUtil=2, command_displayLEDs=3 } CommandID;

#endif
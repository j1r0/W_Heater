#include "simulationUI.h"
#include "tank.h"
#include "physicalController.h"
#include "sensorController.h"
#include "mainController.h"


/**
 * This array contains the heights of the 4 water level sensors
 */
float waterSensorsHeights[4];

/**
 * Instantiate the tank
*/
Tank tank;
/**
 * This array contains the Min and Max of the temperature sensor
 */
float tankHeight;
float criticalPressure;
float maxTemperature;
float minTemperature;

/**
 * This is for the amount of cycles the simulation will be run for
 */
int numOfCycles;
int currentCycle;


void getNumOfCycles()
{
    printf("Select the number of cycles to run the simulation for: \n");
    scanf("%d", &numOfCycles );
    printf("Number of cycles: %d\n", numOfCycles);
    
}

void setMinMaxTemperature()
{
    float userMaxTemp, userMinTemp;
    printf("Input Maximum temperature in Celsius: \n");
    scanf("%f", &userMaxTemp );

    maxTemperature = userMaxTemp;

    printf("Max temp: %f\n",maxTemperature);

    printf("Input Minimum temperature in Celsius: \n");
    scanf("%f", &userMinTemp );

    minTemperature = userMinTemp;

    printf("Max temp: %f\n",minTemperature);

}

void getWaterLevelSensors()
{   
    printf("The maximum height of the tank is 20m\n");
    for(int i = 0; i < 4; i++)
    {
        float height;
        printf("Please input height of Water Level Sensor #%d\n", i+1);
        scanf("%f",&height);
        waterSensorsHeights[i] = height;
        printf("Height of WLS #%d is %f\n", i+1, waterSensorsHeights[i]);
    }
}

/**
 * Hardcoding Values for the tank LOL
*/
 
 void initializeValuesTank()
 {
    tankHeight = 50;
    criticalPressure = 50;
 }

void initializeEverything()
{
    // hardcoded values of the tank
    initializeValuesTank();
    initializeTank(&tank);
    initializePublic(waterSensorsHeights[0], waterSensorsHeights[1], waterSensorsHeights[2], 
    waterSensorsHeights[3], maxTemperature, minTemperature, tankHeight);
}

void startSimulation()
{
    // for(int i = 0; i < numOfCycles; i++){
    //     
    // }

    getSensorValues();
    
}



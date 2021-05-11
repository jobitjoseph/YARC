#include "profile.h"

float leaded[6] = {60, 80, 60, 30, 150, 230};
float leadFree[6] = {60, 80, 60, 30, 150, 250};
float temper[6] = {120, 1000, 1000, 60, 60, 60};
float custom[6] = {60, 80, 60, 30, 150, 230};

profile currentProfile =
    {
        .preheatTime = 60,
        .soakTime = 80,
        .reflowTime = 60,
        .cooldownTime = 10,

        .preheatCounter = 0,
        .soakCounter = 0,
        .reflowCounter = 0,
        .cooldownCounter = 0,

        .IDLETemp = 0,
        .preheatTemp = 30,
        .soakTemp = 150,
        .reflowTemp = 230};

void setProfile(float *profileArray)
{
    currentProfile.preheatTime = profileArray[0];
    currentProfile.soakTime = profileArray[1];
    currentProfile.reflowTime = profileArray[2];
    currentProfile.preheatTemp = profileArray[3];
    currentProfile.soakTemp = profileArray[4];
    currentProfile.reflowTemp = profileArray[5];
}
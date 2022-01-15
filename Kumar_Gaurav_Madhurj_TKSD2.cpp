#include <bits/stdc++.h>
using namespace std;
int main(){
    bool start;
    int calibrate;
    bool calibrated;
    string state = 0;
    int altitude;
    int payloadAltitude;
    int data[];
    bool cansatReleased;
    float timeOfGliding;
    bool activateBuzzer;
    bool cx;
    int ST;
    int time;
    bool rocketRising;
    char state0Data;
    char state1Data;
    char state3Data;
    bool activateCamera = false;
    bool telemetry;

    start = true;
    rocketRising = true;
    calibrated = true;
    cx = false;
    altitude = 0;
//state 0 , For the data collection part I've taken the data from a file and copied to it a new file.
     if(state == 0){

        cin >> calibrate;
            if (calibrated == true){
                cx = true;
                    if (cx == true){
                        cin >> ST;
                            
                    }
            }
        timeOfGliding = ST; 
        
            if (altitude < 5){
                ifstream file ("data.txt");
                ofstream sdCard ("newdata.txt", ios::app);
                while (file.get(state0Data)){
                    sdCard.put(state0Data)
                }
                file.close();
                sdCard.close();
                
            }
            else {state = 1;}
            
    }
    altitude = 500;
//State 1
    if (state == 1){
        if (rocketRising){
                ifstream file ("data.txt");
                ofstream sdCard ("newdata.txt", ios::app);
                while (file.get(state1Data)){
                    sdCard.put(state1Data)
                }
                file.close();
                sdCard.close();
                    if (altitude < 725){
                        if (rocketRising){

                        ifstream file ("data.txt");
                        ofstream sdCard ("newdata.txt", ios::app);
                        while (file.get(state1Data))
                                {
                                sdCard.put(state1Data)
                                }
                                file.close();
                                sdCard.close();

                        }
                        else {state = 2;}
                    }
        }
    
    }
        else {state = 2;}

    altitude = 400; 
//State 2
    if (state == 2){
        cansatReleased = true;
        state = 3;
    }
    else {state = 3;}
//State 3
    if (state = 3){
        if (altitude < 725){
            camera = true;
               ifstream file ("data.txt");
                ofstream sdCard ("newdata.txt", ios::app);
                while (file.get(state3Data)){
                    sdCard.put(state3Data)
                }
                file.close();
                sdCard.close();
        }
        else if (altitude < 500){
            state = "4A";
        }
    }
    else {state = "4A";}
//State 4A
    altitude = 400;
    bool payload1Released = false;
    int px1;
    int payload1;

    if (state == "4A"){
        if (altitude <500){
            payload1Released = true;
            cin >> px1;
            payload1 = px1;
            cout <<" Payload 1 released ";
            cout <<" Descent of payload 1 started";
        }
        else if (altitude <400){
        state = "4B";
        }
        }
//State 4B
    else {state = "4B";}
    bool payload2Released = false;
    int px2;
    int payload2;
    altitude = 300;
    if (state == "4B"){
        if (altitude < 400){
            payload2Released = true;
            cin >> px2;
            cout <<" Payload 2 released ";
            cout <<" Descent of payload 2 started";
        }
        else if (altitude < 5){
            state = 5;
        }
    }
    else {state = 5;}
//State 5
    altitude = 1;
    if (state == 5){
        if (altitude < 5){
            activateCamera = false;
            activateBuzzer = true;
            cx = false;
            telemetry = false;
        }
    }
    else {cout << "ERROR IN THE SYSTEM";}
}
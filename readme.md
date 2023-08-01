# Getting Started with an ESP32 board:

## Hello World using ESP32

Just like all traditional programming language you must start your ESP32 journey by performing the Hello World ritual. 

I am assuming that you have already configured Arduino IDE for ESP32. 

### Code

Paste the code from this  file into the new file : [HelloWorld](https://github.com/ShandilyaSolutions/ESP32-for-dummies/blob/main/hello_world.ino)
 Save it!
 
 Compile it!

 And upload it to your ESP32 board. Once the code is uploaded open the Serial Monitor window by pressing *CTRL+Shift+M*. 

You will see the following screen: ![Serial Monitor](https://makeabilitylab.github.io/physcomp/arduino/assets/images/SerialPrintHelloWorld_SerialMonitor.png)

Change the Serial.print() line's message and play with the different messages displayed in the plotter.

*Note : You will have to compile the code and reupload it to esp32. After reuploading is done start Serial Monitor and the change will be visible. **If it is not visible then disconnect and reconnect the USB again and again until you see the output.*** 

## Working with Wifi functionalities of ESP32
ESP32 is a versatile microcontroller with inbuilt Wifi which is a really great functionality making this microcontroller ideal for IoT applications.

All the functionalities of Wifi are accessed using :  `WiFi.h` class whose documentation can be found [here](https://randomnerdtutorials.com/esp32-useful-wi-fi-functions-arduino/).

We will be working out with the functionalities in a systematic method as this one is pretty much advance.

### Scanning all the nearby Wifi networks using ESP32:
Here we will be using our ESP to scan all the available networks and display them in Serial Monitor.  

Copy the code from [this](https://github.com/ShandilyaSolutions/ESP32-for-dummies/blob/main/wifi.ino) file and paste it into the Arduino IDE. Compile it and upload it. Open a Serial Monitor and you shall see the available networks displayed in it.

![alt Wifi code output](https://i0.wp.com/randomnerdtutorials.com/wp-content/uploads/2021/02/Scan-WiFi-Networks-ESP32-Arduino-IDE-Serial-Monitor.png?resize=733%2C541&quality=100&strip=all&ssl=1)

### Connecting to a Wifi network
We can connect our ESP to a Wifi network in order to do some IoT thingies. This is one of the methods to do so. Here we use the *WiFi.h* library only. It is the pretty straightforward way of connecting the ESP to a network. 

So, copy and paste the code from [here](https://github.com/ShandilyaSolutions/ESP32-for-dummies/blob/main/Connecting2Wifi.ino). Compile it and upload it to the board. And open the Serial monitor.

*This may take a few trials, so in case yo see nothing on the monitor try disconnecting and reconnecting the USB cable connecting ESP32 to your computer few times until you see the output like this:*
![output](https://electropeak.com/learn/wp-content/uploads/2019/07/ESP32-WebServer-STAmode.png) The statements in the output will be different because I used different statements.

**Note: Esp can not connect to 5g networks. Trying to do so will give Failed message.**

**This method is not recommended because here we have to hardcode our Wifi credentials.**

## Bluetooth Classic 
It is one of the two Bluetooth modes available in ESP to work with Bluetooth Serial Communication. To check that this feature of the ESP you bought works there are excellent tutorials available on the net. 

Links to the articles and YT video that I found useful are given below, follow them to get the desired output.

*Bluetooth Classic is easy to code and implement, but **it draws a lot of power***, so it may be a bottleneck for battery powered project.*

- [YT video link](https://youtu.be/RStncO3zb8g) 
- [Text article link](https://randomnerdtutorials.com/esp32-bluetooth-classic-arduino-ide/)

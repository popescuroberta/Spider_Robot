To install the VarSpeedServo library in Arduino IDE, you need to follow these steps:
1. Download the .zip archive
2. After downloading, reopen Arduino IDE. In the menu Sketch -> Include library -> Add .zip library...
3. From the dialog box, select the archive you downloaded
4. To verify the functionality, restart Arduino IDE. Compile and upload a test code to an Arduino board. If there are no errors, everything is fine

Advantages of using the VarSpeedServo library:
1. Allows simultaneous use of up to 8 asynchronous servomotors
2. The speed of the servomotors can be set (an advantage, because we can avoid overloading the Arduino board)
3. Multiple commands can be sent simultaneously to the servomotor, without overloading it

Recommendation: move the library archive to the folder intended for the IDE application, so that, in case of deletion from the save folder, possible errors can be avoided.

https://github.com/netlabtoolkit/VarSpeedServo

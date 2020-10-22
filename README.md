#OpenClose2Go Add-On

[![](https://www.infineon.com/export/sites/default/media/products/Sensors/P1040587.JPG_920075344.jpg)

This simple Add-On will easily illustrate you the functionality of an open-close functionality. Adressable appliations are: 
- Open window detection for safety or security reasons
- Door state of a dishwashers or fridge
- Simple pressed button function detection
- ...

###Needed Hardware
The needed sensor shield [TLE4964-3M](https://www.infineon.com/cms/en/product/evaluation-boards/s2go_hall_tle4964-3m/ "TLE49064-3M") (pic below) shall be combined with any compatible controller e.g. [XMC1100](https://www.infineon.com/cms/en/product/evaluation-boards/kit_xmc_2go_xmc1100_v1/ "XMC1100").
![](https://www.infineon.com/export/sites/default/media/products/Sensors/TLE4964-3M_Hall-Shiled2Go_top-view.jpg_1681154438.jpg)


###Function
By approaching the sensor with the magnet the magnetic field increaes and exceeds a sensor specific threshold -> the sensor changes the state. The LED on the XMC1100 indicates the state of the sensor in addition after flashing the example code to the uC. This example shall show how easy this detection can be.

###Hardware
The [Add-on](https://www.infineon.com/cms/en/product/evaluation-boards/openclose2gohs/ "add-on") includes the hardware and a magnet (sensor board to be ordered extra).  A little force feedback function is implemented with further magnets, but not mandatory for the function. On the Infineon page the 3D printfiles can be [downloaded](https://www.infineon.com/dgdl/Infineon-3D_printing_files_openclose2GO_Hall_switches-Software-v01_00-EN.zip?fileId=5546d4627506bb3201752cb457a71049 "downloaded") after registration to your convenience. 


###Code
A code example can be found [here](https://github.com/sigizaruba/Switch/blob/master/TLE4964_3M/Blink_64_3M/AddOn_OpenCloseHallSwitch2Go.ino "here"). 


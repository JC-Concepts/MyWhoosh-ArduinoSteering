# MyWhoosh - Arduino USB Steering (PC solution)
With the sad closure of RGT Cycling, some of the user base has moved over to MyWhoosh. People who have used RGT knows there was a steering feature and some even knew I had a steering solution for it which you can find here https://github.com/JC-Concepts/RGT-Arduino_USB_Steer. Hopever it was not a pure plug and play to transfer the RGT steering unit over to MyWhoosh even though it used the same keyboard commands. This project is to create steering buttons for MyWhoosh using an Arduino Pro Micro (or Leonardo). The concept is to make the Arduino act as an plug & play HID USB keyboard and send the characters 'A' (left) and 'D' (right) commands.

**v0.1.0** Initial Release 



# Like this Project? 
You can buy me a gel, coffee, or inner tube. Your support helps me further develop on these types of projects. 


[![](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=RE2GQDK8CD2WW)


## Change Log:
View the latest on the [Change Log](https://github.com/JC-Concepts/MyWhoosh-ArduinoSteering/blob/main/CHANGELOG.md) 

## Software Installation Notes:
* This was flashed using Arduino IDE 1.8.19 if you are using Arduino 2.0.x there might be some additional settings you will need to modify in the IDE perferences.


## Bill of Materials:
* Arduino Pro Micro (a clone version will work and save you the money)
* Switch qty: 2 (any contact normally open will work, I've used a 5mm x 5mm tactile switch (not waterproof))
* Some wires
* USB A to micro USB cable (if your Arduino did not come with it)



## Schematic:

 **v0.1.0 - Base Circuit**
<img src="https://user-images.githubusercontent.com/126370788/284778269-77ad810c-1040-4ff1-814f-9918f80b4844.png" alt="v0.1.0 Schematic" title="v0.1.0 Schematic">



## Hardware Installation Example:
- Sample picture: tactile switch hot glued to a scrap plastic from food packaging
- Switch assembly is held onto the hood using an elastic 
- Waterproofing the switch, you can use a small plastic bag or food wrap to seal it
- Cheap alternative to waterproof the Arduino is to put it into a kids food container (easily found at the dollar store)

**Example pictures**

<img src="https://user-images.githubusercontent.com/126370788/221392142-773b0838-bffe-4697-9338-dc0e4f6b5d25.png" alt="Mounted on Hood" title="Mounted on Hood" height="500" width="500" >
<img src="https://user-images.githubusercontent.com/126370788/221392171-1d6f0b53-b0fe-4620-9c53-d61f71be0e96.png" alt="Splash proof Package" title="Splash Proof Container"height="473" width="800" >




## Bring Up Led

### Description

the project involves bringing up a led on a raspberry pi model 3b+ 

### Setting up the LED 
1-Add the following code to the bcm2710-rpi-3-b-plus.dts `(the device tree source)` at leds section:

```
test_led: led-test {
		label = "test";
		default-state = "off";
		linux,default-trigger = "default-on";
		gpios = <&gpio 21 GPIO_ACTIVE_HIGH>;
	};
```

2- compile the `the device tree source(dts)` to get the `the device tree binary(dtb)`

<!-- ### video 
this video shows that the bring up of the led is done successfully
 -->


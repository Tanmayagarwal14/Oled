======================= **Interfacing Oled with ESP32 Using Arduino IDE** ==========================


1. Move espressif folder to arduino/hardware.

This will add your ESP32 board to the Arduino IDE. Now you can access ESP32 board with Arduino IDE.

2. *Pin Connection*

OLED--------ESP32

GND---------GND
VCC---------3.3V
SDA---------SDA(21)
SCL---------SCL(22)

3. **Button_menu** :- Code for implementing button Menu considering Debouncing effect.
4. **Gpio_test**   :- Testing the Gpio Pins and Printing According to the button.

5. **I2C_oled_dis/Spi_oled_display** :- Interfacing OLED using I2C and SPI.


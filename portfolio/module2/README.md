Items needed:
- ESP32 
- Breadboard
- Potentiometer
- Button
- Jumper wires

Software needed:
- Arduino IDE
- Terminal (or somewhere to run python code)
- MaxMSP

In order to complete my vision, I first had to get my hardware to output the data that I wanted, meaning a number 0-4095 from the potentiometer, and a 0-1 value from the button. I used the Arduino code linked in my blog post, and the serial monitor, making sure that all baud rates were equal, in order to check that I had the correct wiring for my program. Please follow my little diagram below in order to replicate this wiring. 

Once I was confident that I was receiving the correct data, I wrote a python script (also linked on my blog post) in order to receive desired information from Arduino and send OSC messages with this information directly to MaxMSP. Once my Arduino IDE code was uploaded onto my ESP32, I was able to close out the Arduino IDE tab and run the python script with the correct port. (which is found on the Arduino tab, so make sure you are using the correct port when you recreate this).

I then created a Max patch where I received these OSC messages, and used the value from the potentiometer to affect the frequency in the way I wished. This was the creative part; I had a lot of fun with it! I added two frequencies together with a delay, and with the added delay from the Arduino code, I found the sound to be very interesting. I also made the button into an on/off switch. 

Once I had all the mechanics working, I then created an enclosure for my instrument. I named it “Sun Synth”. I hope you enjoy!

Links to code, more pictures and demo video located on https://sunaroch.github.io/portfolio/module2/

<img width="417" alt="image1" src="https://github.com/sunaroch/sunaroch.github.io/assets/100099250/2151d908-3ef0-4df0-ba2f-5c7674737fe3">
<img width="898" alt="image2" src="https://github.com/sunaroch/sunaroch.github.io/assets/100099250/83686db6-ead4-4bf3-ba3f-529fce16f089">

![image5](https://github.com/sunaroch/sunaroch.github.io/assets/100099250/bc712683-ef4b-4d0f-a0de-725c4b77a9cd)


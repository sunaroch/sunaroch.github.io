import argparse
import random
import time
import serial

from pythonosc import udp_client

SERIAL_PORT = '/dev/tty.usbserial-56230318871' 
BAUD_RATE = 115200

if __name__ == "__main__":
  parser = argparse.ArgumentParser()
  parser.add_argument("--ip", default="127.0.0.1",
      help="The ip of the OSC server")
  parser.add_argument("--port", type=int, default=5005,
      help="The port the OSC server is listening on")
  args = parser.parse_args()

  client = udp_client.SimpleUDPClient(args.ip, args.port)

ser = serial.Serial(SERIAL_PORT, BAUD_RATE)

try:
  while True:
      # Read a line of serial input
      serial_input = ser.readline().decode().strip()
      
      #Parse the received data
      values = serial_input.split(",")
      potVal = int(values[0].strip())
      buttonVal = int(values[1].strip())
      # Print the parsed values with corresponding variable names
      client.send_message("/pot", potVal)
      client.send_message("/button", buttonVal)

except KeyboardInterrupt:
  # Close the serial connection when Ctrl+C is pressed
  ser.close()


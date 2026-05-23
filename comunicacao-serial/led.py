from serial import Serial #biblioteca para comunicação serial com o arduino
from time import sleep # biblioteca para pausar o código

arduino = Serial("/dev/ttyUSB0", 9600, timeout=1) # inicia a comunicação serial
sleep(2) # aguarda dois instantes para ter tempo suficiente para estabelecer a comunicação serial
print("Conectado ao Arduino!")

while True: # Loop infinito
    
    arduino.write(b"1") 
    print("Led Ligado!")
    sleep(2)
    # envia 1 para o arduino para ligar o led por dois segundos

    arduino.write(b"0")
    print("Led desligado!")
    sleep(2)
    # envia 0 para o arduino para desligar o led por dois segundos
    
arduino.close()

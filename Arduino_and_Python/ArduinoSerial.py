import serial
import time

ser = serial.Serial("COM3", 9600)
print("Iniciando comunicacao serial.")
time.sleep(2)#tempo para inicializacao da comunicacao serial

ser.write("1")

while True:
    response = ser.readline()
    if response.strip() == "2":
        print("Processado pelo Arduino com sucesso.")
        ser.close()
        break
    else:
        print("Houve algum erro no processamento do Arduino.")
        ser.close()
        break

print("Tchau!!")

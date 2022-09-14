import math
r = float(input("Masukan Jari-jari : "))

sisi = 2*r*(math.sin(math.pi/5))
luas = (3*math.sqrt(3)/2)*(sisi*sisi)

print ("Luas Pentagon = ",luas)
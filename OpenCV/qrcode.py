import pyqrcode 
from pyqrcode import QRCode
img=pyqrcode.create('https://www.facebook.com/people/Barsha-Bala-Priom/pfbid02bKaAVJ6kn69Bi2QeP6LR8gMJjKdr3PQhcsUNqX28gvXjyUdb9sjny69G2dMms6Rql/')
img.svg('b.png')

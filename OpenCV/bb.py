import qrcode as qr

# URL to encode
url = "https://www.facebook.com/people/Barsha-Bala-Priom/pfbid02bKaAVJ6kn69Bi2QeP6LR8gMJjKdr3PQhcsUNqX28gvXjyUdb9sjny69G2dMms6Rql/"

# Generate the QR code
img = qr.make(url)

# Save the QR code image
img.save("QR.png")

print("QR code saved as 'QR.png'.")

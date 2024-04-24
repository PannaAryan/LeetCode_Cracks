def decrypt_caesar(ciphertext):
    for shift in range(26):
        plaintext = ""
        for char in ciphertext:
            plaintext += chr((ord(char) - 97 - shift) % 26 + 97)
        print(f"Shift: {shift}, Decrypted text: {plaintext}")

# Ciphertext provided in the problem statement
ciphertext = "odroboewscdrolocdcwkbdmyxdbkmdzvkdpybwyeddrobo"
decrypt_caesar(ciphertext)
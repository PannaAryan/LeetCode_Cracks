h1 = "0002cc5dd3ee66f8fbd2f1ef63c27d76"  
h2 = "e95425ca6caaf2a78c3f5afebac9c45d"


bin1 = bin(int(h1, 16))[2:].zfill(len(h1) * 4)
bin2 = bin(int(h2, 16))[2:].zfill(len(h2) * 4)

matching_bits = sum(a == b for a, b in zip(bin1, bin2))

print(f"Number of matching bits between {h1} and {h2}: {matching_bits}")
cipher = "KQFL{HFJXFW_RXFYJW}"
for shift in range(26):
    plain = "".join(
        chr((ord(c.upper()) - 65 - shift) % 26 + 65).lower() if c.isalpha() else c
        for c in cipher
    )
    print(f"Shift {shift}: {plain}")
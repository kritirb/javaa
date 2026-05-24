V_in = 7.27  # input voltage
V_ref = 11.0  # reference voltage
n_bits = 8  # 8-bit ADC
levels = 2**n_bits  # Total levels = 256

# Calculate digital output
digital_output = int((V_in / V_ref) * (levels - 1))
print("Digital Output:", digital_output)


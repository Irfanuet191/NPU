#!/usr/bin/env python3
# Convert a flat little-endian binary into a $readmemh image: one 32-bit word
# per line, in ascending word order. mem[0] = bytes 0..3, mem[1] = bytes 4..7,
# which matches soc_mem's word addressing (word index = byte_addr >> 2).
import sys

with open(sys.argv[1], "rb") as f:
    data = f.read()
while len(data) % 4:
    data += b"\x00"
with open(sys.argv[2], "w") as f:
    for i in range(0, len(data), 4):
        w = data[i] | (data[i + 1] << 8) | (data[i + 2] << 16) | (data[i + 3] << 24)
        f.write("%08x\n" % w)

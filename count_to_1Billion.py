import time

# Start timing
start_time = time.time()

# Loop to count to 1 billion
for i in range(1, 1000000001):
    pass

# End timing
end_time = time.time()

# Calculate elapsed time
elapsed_time = end_time - start_time
print(elapsed_time)

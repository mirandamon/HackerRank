# Enter your code here. Read input from STDIN. Print output to STDOUT
timeString = raw_input()
hour = int(timeString[0:2])
time = timeString[8:10]

if hour == 12 and time == "AM":
    hour = 0
elif time == "PM" and hour < 12:
    hour += 12
    
timeString = "{0:0>2}".format(str(hour)) + timeString[2:8]
print timeString

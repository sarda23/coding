class C (Exception):
	pass

b=1000
try:
	b/=b
	raise C()

except C:
	print('Exception c o')
else:
	print('division')

try:
	b=b/5
except Exception as e:
	print('inside')
else:
	print('g')
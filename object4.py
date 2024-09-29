class book:
    fav = []

    def __init__(self,title,pages):
        self.title = title
        self.pages = pages
    def is_long(self):  
        if self.pages > 100:
            return True
        return False
    #f string 
    def __str__(self):
        return f"{self.title} is {self.pages} pages long."
    
    def __eq__(self,other):
        #print("self:" , self)
        #print("other:" , other)
        if self.title == other.title and self.pages == other.pages:
            return True
        return False
    
    def __hash__(self):
        return hash(self.title) ^ hash(self.pages)
   
b1 = book("are you my mother?",72)

file = open("input.txt" ,'w')

file.write("are you my mother\t72\n")
file.write("winona ryder\t72\n")

file.close()

file = open('input.txt','r')
data = file.read().split('\n')
file.close()


b1_data = data[0].split('\t')


b1 = book(b1_data[0],b1_data[1])

b2 = book(data[1].split('\t')[0],data[1].split('\t')[1])


try:
    file = open("inputut.taet",'r')
    int(file.read())
except FileNotFoundError as e:
    print('cannot find file')
except Exception as e:
    print("something went wrong")
finally:
    file.close()
    print('always')







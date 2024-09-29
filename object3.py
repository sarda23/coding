class book:
    fav = []

    def __init__(self,title,pages):
        self.title = title
        self.pages = pages
    def is_long(self):  
        if self.pages > 100:
            return True
        return False
    
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
    #this class is not supposed to be hashing
    #mutable


b1 = book("are you my mother?",72)
b2 = book("are you my mother?",72)

print(b1 == b2)
print(hash(b1) == hash(b2))
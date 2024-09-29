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
    


b1 = book("are you my mother?",72)
b2 = book("are you  hmy mother?",72)

print(b1 == b2)

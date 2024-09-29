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
        return f"{self.title} is {self.pages} pages long"


b1 = book("are you my mother?",72)
b2 = book("the digging-est dog",72)

book.fav.append(b1)
book.fav.append(b2)

for b in book.fav:
    print(b)

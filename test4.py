def findTotalWeight(products):
    total_weight = 0

    while len(products) >0:
        min_weight_index = products.index(min(products))

        total_weight += products[min_weight_index]

        del products[max(0,min_weight_index -1):min_weight_index+2]

    return total_weight
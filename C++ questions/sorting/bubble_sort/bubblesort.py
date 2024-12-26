def bubble(list_a):
    indexing_length = len(list_a)- 1 
    sorted = True
    while sorted:
        sorted = False
        for i in range(0, indexing_length):
            if(list_a[i]>list_a[i+1]):
                sorted = True
                list_a[i], list_a[i+1] = list_a[i+1], list_a[i]
    return list_a

list = [4,1,8,5,3,6]

print(bubble(list))

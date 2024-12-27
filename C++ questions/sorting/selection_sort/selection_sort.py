def selection_sort(list_a):
    indexing_lenght = len(list_a)

    for i in range(0, indexing_lenght-1):
        min_pos = i
        for j in range(i+1, indexing_lenght):
            if (list_a[j] < list_a[min_pos]):
                min_pos = j
        #swapping
        list_a[i] , list_a[min_pos] = list_a[min_pos], list_a[i]
    return list_a


lista = [4,1,8,5,3,6]

print(selection_sort(lista))

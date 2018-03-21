def letter(word, find):
    count = 0
    for char in word:
        if char == find:
            count += 1
    return count

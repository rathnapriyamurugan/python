def reverseWordSentence(Sentence): 
    # All in One line
    return ' '.join(word[::-1] for word in Sentence.split(" ")) 
# Driver's Code 
Sentence = "rathnapriya"
print(reverseWordSentence(Sentence)) 

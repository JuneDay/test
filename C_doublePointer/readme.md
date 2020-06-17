# Double Pointer
## Pointer mit Arrays

(*nodes)[i] greift auf die Indizes des ersten Feldes in nodes zu, *nodes[i] hingegen auf den ersten Index jeden i-ten Feldes in t.
 Bei einem 2-D Array {{1,2,3}, {3,4,5}, {6,7,8}} würde über eine for-Schleife ausgegeben werden:
- bei (*nodes)[i]: 1,2,3
- bei *nodes[i]: 1,4,7
 
Du könntest auch i und j nutzen, dann wäre nodes[i][j] = *(*(nodes+i)+j) = (*nodes+i)[j].

## Pointer mit Structs

Insgesamt gibt es folgende Äquivalenzen - dabei sind die Klammerungen zu beachten:
* nodes[i]->children[j]->shortFilename
* (*(nodes[i])).children[j]->shortFilename
* (*nodes[i]).children[j]->shortFilename
* (*(*nodes[i]).children[j]).shortFilename
* (*(nodes+1))->children[j]->shortFilename
* (*(*((*(*(nodes+i))).children+j))).shortFilename

## Links
* http://www.c4learn.com/c-programming/equivalent-pointer-expression/
* http://www.c4learn.com/c-programming/c-pointer-within-structure/

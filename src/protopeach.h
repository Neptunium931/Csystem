#ifndef protopeach_H
#define protopeach_H

#define FRUITMAX 20
#define LEN_FRUIT_NAME 20
struct fruit;

struct fruit *createFirstFruit (char *name, int count);
void createFruit (char *name, int count, struct fruit *headFruit);
void delFruit (struct fruit *);

char *getNameFruit (struct fruit *fruit);
int getCountFruit (struct fruit *fruit);
struct fruit *getNextFruit (struct fruit *fruit);
struct fruit *getPrevFruit (struct fruit *fruit);
struct fruit *getFirstFruit (struct fruit *fruit);

int addCount (struct fruit *fruit, int addNumber);
int subCount (struct fruit *fruit, int subNumber);

void setNameFruit (struct fruit *fruit, char *name);
#endif /* end of include guard: protopeach_H */

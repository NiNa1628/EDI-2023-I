//Claudia Karina González Medina

#ifndef EDI_2023_I_SET_H
#define EDI_2023_I_SET_H

#define SET_CAPACITY 10

typedef struct{
    int data[SET_CAPACITY];
    int size;
}Set;

void setupSet(Set *s);
int existElement(Set s, int value);
int addElement(Set *s, int value);

void intersect(Set a, Set b, Set *result){ //Intersección
    //Van aquedar en result los datos que estén en A y que también estén en B
    int i;
    for(i=0; i<a.size; i++)
    {
        if(existElement(b, a.data[i])==1)
        {
            addElement(result, a.data[i]);
        }
    }
}

int deleteElements(Set *s, int value){ //Eliminar el dato específico
    //Encontrar la posición en donde está el valor
    int found= -1;
    int i;
    for(i=0; i<s->size && found== -1; i++){
        if(s->data[i]==value)
            found=i; //Necesito el índice en donde está el valor
    }
    if(found != -1) //Si encontré el valor
    {
        //for(; found<s->size; found++)
        int actual;
        for(actual=found; actual<s->size; actual++){
            s->data[actual]=s->data[actual+1];
        }
        s->size--;
        return 1;
    }
    return 0;
}


int deleteStartElement(Set *s, int value) //Eliminación al inicio
{
    int i;
    for(i=0; i==0; i++)
    value=s->data[i];
    return value;
}

int deleteEndElement(Set *s, int value) //Eliminación al final
{
    int i;
    for(i=0; i==SET_CAPACITY; i++)
    value=s->data[i];
    return value;
}



int addElement(Set *s, int value) //
{
    if(existElement(*s, value)== 0 && s->size < SET_CAPACITY)
    {
        s->data[s->size]=value;
        s->size++;
    }
    return 0;
}

int existElement(Set s, int value)
{
    int found=0;
    int i;
    for(i=0; i<s.size && !found; i++)
    {
        if(s.data[i]==value)
            found=1;
    }
    return found;
}

void setupSet(Set *s)
{
    s->size=0;
}

#endif//EDI_2023_I_SET_H

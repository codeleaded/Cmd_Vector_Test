#include "/home/codeleaded/System/Static/Container/Vector.h"

int main(int argc,char **argv){
    
    Vector v = Vector_New(sizeof(char));

    Vector_PushCount(&v,"Hello World",11);
    Vector_AddCount(&v,"Hallo Welt ",11,6);
    Vector_Push(&v,"");

    printf("OUT: %s\n",(char*)Vector_Get(&v,0));

    Vector_RemoveCount(&v,6,8);
    
    printf("OUT: %s\n",(char*)Vector_Get(&v,0));

    Vector_Free(&v);

    return 0;
}
#if defined(__linux__)
    #include "/home/codeleaded/System/Static/Container/Vector.h"
#elif defined(_WINE)
    #include "/home/codeleaded/System/Static/Container/Vector.h"
#elif defined(_WIN32)
    #include "F:/home/codeleaded/System/Static/Container/Vector.h"
#elif defined(__APPLE__)
    #error "Apple not supported!"
#else
    #error "Platform not supported!"
#endif

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
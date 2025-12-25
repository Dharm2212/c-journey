int v; // this will print 3 because this is a global var // this will retain its value between multiple function calls 
         // this will allow other file to change its value also

//static int v;

int function()
{
   // int v=0;  // this will print 1 because every time when call fuction increment 1 and than destroy variable after block
    v=v+1;
    return v;
}

/*
 * __fassign at 10008575
 * void __cdecl __fassign(int flag, char * argument, char * number)
 * Address ranges: 10008575-100085b2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __fassign  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  void *in_ECX;
  void *local_c;
  void *local_8;
  
  if (flag != 0) {
    local_c = in_ECX;
    local_8 = in_ECX;
    FUN_1000bb44(in_ECX,(uint *)&local_c,(byte *)number);
    *(void **)argument = local_c;
    *(void **)(argument + 4) = local_8;
    return;
  }
  FUN_1000bb71(in_ECX,(uint *)&number,(byte *)number);
  *(char **)argument = number;
  return;
}


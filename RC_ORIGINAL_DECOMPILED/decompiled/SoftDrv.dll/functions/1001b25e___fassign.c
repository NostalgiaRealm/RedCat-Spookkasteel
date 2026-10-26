/*
 * __fassign at 1001b25e
 * void __cdecl __fassign(int flag, char * argument, char * number)
 * Address ranges: 1001b25e-1001b29b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __fassign  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __fassign
   
   Library: Visual Studio 2003 Release */

void __cdecl __fassign(int flag,char *argument,char *number)

{
  undefined4 local_c;
  undefined4 local_8;
  
  if (flag != 0) {
    FUN_1001d4ec(&local_c);
    *(undefined4 *)argument = local_c;
    *(undefined4 *)(argument + 4) = local_8;
    return;
  }
  FUN_1001d519(&number,number);
  *(char **)argument = number;
  return;
}


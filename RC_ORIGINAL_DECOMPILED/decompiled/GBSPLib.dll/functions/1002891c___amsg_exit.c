/*
 * __amsg_exit at 1002891c
 * void __cdecl __amsg_exit(int param_1)
 * Address ranges: 1002891c-1002894b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_1052a3e4 == 1) || ((DAT_1052a3e4 == 0 && (DAT_1052a3e8 == 1)))) {
    FUN_1002ef77();
  }
  FUN_1002efb0(param_1);
  (*(code *)PTR___exit_1003cac0)(0xff);
  return;
}


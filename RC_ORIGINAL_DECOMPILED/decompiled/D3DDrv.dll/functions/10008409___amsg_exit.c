/*
 * __amsg_exit at 10008409
 * void __cdecl __amsg_exit(int param_1)
 * Address ranges: 10008409-10008438
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_101c370c == 1) || ((DAT_101c370c == 0 && (DAT_101c3710 == 1)))) {
    FUN_1000b311();
  }
  FUN_1000b34a(param_1);
  (*(code *)PTR___exit_1001582c)(0xff);
  return;
}


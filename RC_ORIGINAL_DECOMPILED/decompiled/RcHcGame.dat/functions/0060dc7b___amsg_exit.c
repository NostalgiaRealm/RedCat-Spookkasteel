/*
 * __amsg_exit at 0060dc7b
 * void __cdecl __amsg_exit(int param_1)
 * Address ranges: 0060dc7b-0060dc9c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_0070ff84 == 1) {
    FUN_0061c3d9();
  }
  FUN_0061c412(param_1);
  (*(code *)PTR___exit_006b2690)(0xff);
  return;
}


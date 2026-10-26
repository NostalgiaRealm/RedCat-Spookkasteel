/*
 * __amsg_exit at 00401854
 * void __cdecl __amsg_exit(int param_1)
 * Address ranges: 00401854-00401875
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if (DAT_00407fb8 == 1) {
    FUN_00402b88();
  }
  FUN_00402bc1(param_1);
  (*(code *)PTR___exit_00407230)(0xff);
  return;
}


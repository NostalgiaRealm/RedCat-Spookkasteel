/*
 * __amsg_exit at 1001927d
 * void __cdecl __amsg_exit(int param_1)
 * Address ranges: 1001927d-100192ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10025ca0 == 1) || ((DAT_10025ca0 == 0 && (DAT_10025ca4 == 1)))) {
    FUN_1001bebc();
  }
  FUN_1001bef5(param_1);
  (*(code *)PTR___exit_10021994)(0xff);
  return;
}


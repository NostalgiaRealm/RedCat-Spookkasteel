/*
 * __amsg_exit at 10004399
 * void __cdecl __amsg_exit(int param_1)
 * Address ranges: 10004399-100043c8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100e3a74 == 1) || ((DAT_100e3a74 == 0 && (DAT_100e3a78 == 1)))) {
    FUN_10007a2b();
  }
  FUN_10007a64(param_1);
  (*(code *)PTR___exit_1000e900)(0xff);
  return;
}


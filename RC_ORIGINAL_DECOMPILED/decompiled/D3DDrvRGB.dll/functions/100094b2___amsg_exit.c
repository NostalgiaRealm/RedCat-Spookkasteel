/*
 * __amsg_exit at 100094b2
 * void __cdecl __amsg_exit(int param_1)
 * Address ranges: 100094b2-100094e1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Release
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Release */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_100ec148 == 1) || ((DAT_100ec148 == 0 && (DAT_100ec14c == 1)))) {
    FUN_1000d2fd();
  }
  FUN_1000d336(param_1);
  (*(code *)PTR___exit_10018cec)(0xff);
  return;
}


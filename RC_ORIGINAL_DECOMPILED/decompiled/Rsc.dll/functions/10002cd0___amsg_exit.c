/*
 * __amsg_exit at 10002cd0
 * void __cdecl __amsg_exit(int param_1)
 * Address ranges: 10002cd0-10002d09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Library Function - Single Match  __amsg_exit  Library: Visual Studio 2003 Debug
 */

/* Library Function - Single Match
    __amsg_exit
   
   Library: Visual Studio 2003 Debug */

void __cdecl __amsg_exit(int param_1)

{
  if ((DAT_10031424 == 1) || ((DAT_10031424 == 0 && (DAT_10031428 == 1)))) {
    __FF_MSGBANNER();
  }
  FUN_10008350(param_1);
  (*(code *)PTR___exit_1002fa30)(0xff);
  return;
}


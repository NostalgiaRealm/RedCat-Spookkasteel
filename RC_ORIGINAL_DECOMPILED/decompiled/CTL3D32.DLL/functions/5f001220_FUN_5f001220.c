/*
 * FUN_5f001220 at 5f001220
 * undefined __cdecl FUN_5f001220(undefined4 param_1, undefined4 param_2)
 * Address ranges: 5f001220-5f001253
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __cdecl FUN_5f001220(undefined4 param_1,undefined4 param_2)

{
  DWORD dwThreadId;
  
  DAT_5f005210 = param_2;
  DAT_5f005208 = param_1;
  dwThreadId = GetCurrentThreadId();
  DAT_5f00520c = SetWindowsHookExW(4,(HOOKPROC)&LAB_5f001170,DAT_5f00525c,dwThreadId);
  return;
}


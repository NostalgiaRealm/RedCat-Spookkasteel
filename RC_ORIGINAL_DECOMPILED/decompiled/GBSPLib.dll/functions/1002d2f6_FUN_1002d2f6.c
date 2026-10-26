/*
 * FUN_1002d2f6 at 1002d2f6
 * undefined FUN_1002d2f6(void)
 * Address ranges: 1002d2f6-1002d322
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002d2f6(undefined4 *param_1)

{
  int iVar1;
  HMODULE pHVar2;
  
  *param_1 = 0;
  pHVar2 = GetModuleHandleA((LPCSTR)0x0);
  if (((short)pHVar2->unused == 0x5a4d) && (iVar1 = pHVar2[0xf].unused, iVar1 != 0)) {
    *(undefined1 *)param_1 = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 2);
    *(undefined1 *)((int)param_1 + 1) = *(undefined1 *)((int)&pHVar2[6].unused + iVar1 + 3);
  }
  return;
}


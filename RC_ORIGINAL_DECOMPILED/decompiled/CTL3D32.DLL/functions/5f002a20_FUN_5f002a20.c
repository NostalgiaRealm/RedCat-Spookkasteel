/*
 * FUN_5f002a20 at 5f002a20
 * undefined4 __cdecl FUN_5f002a20(HWND param_1)
 * Address ranges: 5f002a20-5f002a58
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __cdecl FUN_5f002a20(HWND param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  
  pvVar1 = FUN_5f001000(param_1);
  if (pvVar1 == (HANDLE)0x0) {
    return 0;
  }
  if (0x35e < DAT_5f005260) {
    uVar2 = GetWindowLongW(param_1,-0x10);
    if ((uVar2 & 4) != 0) {
      return 0;
    }
  }
  return 1;
}


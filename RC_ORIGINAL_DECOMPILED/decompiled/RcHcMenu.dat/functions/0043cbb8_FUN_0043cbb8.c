/*
 * FUN_0043cbb8 at 0043cbb8
 * undefined __register FUN_0043cbb8(int param_1, int param_2)
 * Address ranges: 0043cbb8-0043cc18
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043cbb8(int param_1,int param_2)

{
  LRESULT LVar1;
  LRESULT extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_2 == 0) {
    FUN_0043cb04(param_1);
    if (*(char *)(param_1 + 0xd) != '\0') {
      FUN_0043cb20(param_1);
      return;
    }
    FUN_0043cb50(param_1,extraout_EDX,extraout_ECX);
  }
  else if ((param_2 == 0x68) && (*(char *)(param_1 + 0x20) != '\0')) {
    if (*(char *)(param_1 + 0xd) == '\0') {
      LVar1 = SendMessageA(*(HWND *)(param_1 + 0x18),*(UINT *)(param_1 + 0x14),0,0);
      *(LRESULT *)(param_1 + 0x10) = LVar1;
    }
    else {
      SystemParametersInfoA(0x68,0,(PVOID)(param_1 + 0x10),0);
    }
  }
  return;
}


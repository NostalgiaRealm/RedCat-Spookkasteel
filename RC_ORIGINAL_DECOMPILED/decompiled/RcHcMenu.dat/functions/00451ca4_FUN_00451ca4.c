/*
 * FUN_00451ca4 at 00451ca4
 * undefined __register FUN_00451ca4(int param_1, UINT param_2, undefined1 param_3)
 * Address ranges: 00451ca4-00451cdb
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00451ca4(int param_1,UINT param_2,undefined1 param_3)

{
  UINT_PTR UVar1;
  
  FUN_00451cdc(param_1);
  UVar1 = SetTimer((HWND)0x0,0,param_2,FUN_0044fcbc);
  *(short *)(param_1 + 0x7a) = (short)UVar1;
  *(undefined1 *)(param_1 + 0x79) = param_3;
  if (*(short *)(param_1 + 0x7a) == 0) {
    FUN_00451e78(param_1);
  }
  return;
}


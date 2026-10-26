/*
 * FUN_00435dfc at 00435dfc
 * undefined __register FUN_00435dfc(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00435dfc-00435e36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00435dfc(int *param_1,undefined4 param_2,undefined4 param_3)

{
  char cVar1;
  
  cVar1 = FUN_00403270(param_1,param_2,param_3);
  FUN_00435d9c(param_1);
  FUN_00435f34(param_1);
  if ((cVar1 != '\0') && (param_1[0x53] != 0)) {
    SetFocus((HWND)param_1[0x53]);
  }
  return;
}


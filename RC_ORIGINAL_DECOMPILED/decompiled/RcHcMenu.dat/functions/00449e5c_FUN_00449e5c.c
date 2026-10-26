/*
 * FUN_00449e5c at 00449e5c
 * undefined __register FUN_00449e5c(int * param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00449e5c-00449e90
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00449e5c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if ((char)param_1[0x87] == '\0') {
    (**(code **)(*param_1 + 0xc0))();
    param_3 = extraout_ECX;
    param_2 = extraout_EDX;
  }
  if ((*(byte *)(param_1 + 0xb3) & 0x20) != 0) {
    FUN_00403270(param_1,param_2,param_3);
    *(byte *)(param_1 + 0xb3) = *(byte *)(param_1 + 0xb3) & 0xdf;
  }
  return;
}


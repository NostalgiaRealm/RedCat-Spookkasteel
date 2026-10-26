/*
 * FUN_00436dd8 at 00436dd8
 * undefined __register FUN_00436dd8(int * param_1, undefined4 param_2)
 * Address ranges: 00436dd8-00436e08
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00436dd8(int *param_1,undefined4 param_2)

{
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_00438c90((int)param_1);
  (**(code **)(*param_1 + -0x10))(param_1,param_2);
  FUN_0043532c(param_1);
  if ((*(byte *)(param_1 + 8) & 1) == 0) {
    FUN_00403270(param_1,extraout_EDX,extraout_ECX);
  }
  return;
}


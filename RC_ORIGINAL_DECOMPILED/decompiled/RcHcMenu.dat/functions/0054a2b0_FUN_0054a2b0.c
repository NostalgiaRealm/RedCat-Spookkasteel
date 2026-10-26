/*
 * FUN_0054a2b0 at 0054a2b0
 * undefined __register FUN_0054a2b0(int * param_1)
 * Address ranges: 0054a2b0-0054a2f5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054a2b0(int *param_1)

{
  undefined4 uVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  if (param_1[0x11] == 0) {
    FUN_00549aec((int)param_1);
    uVar1 = FUN_00549b80((int)param_1);
    (**(code **)(*param_1 + 0x68))(param_1,uVar1);
    FUN_00549b08((int)param_1);
    FUN_00403270((int *)param_1[0x14],extraout_EDX,extraout_ECX);
  }
  return;
}


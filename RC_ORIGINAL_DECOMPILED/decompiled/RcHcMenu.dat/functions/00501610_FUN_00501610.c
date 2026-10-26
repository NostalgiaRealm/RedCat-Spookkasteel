/*
 * FUN_00501610 at 00501610
 * undefined __register FUN_00501610(int * param_1)
 * Address ranges: 00501610-0050164c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00501610(int *param_1)

{
  bool bVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar2;
  
  (**(code **)(*param_1 + 300))();
  bVar1 = FUN_00438c84((int)param_1);
  uVar2 = extraout_ECX;
  if (bVar1) {
    FUN_004297c4(param_1);
    uVar2 = extraout_ECX_00;
  }
  FUN_0041bb48((int *)param_1[0x16],param_1[0x92],uVar2);
  return;
}


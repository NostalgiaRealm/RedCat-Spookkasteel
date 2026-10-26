/*
 * FUN_00483ecc at 00483ecc
 * undefined __register FUN_00483ecc(int * param_1)
 * Address ranges: 00483ecc-00483f09
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00483ecc(int *param_1)

{
  int iVar1;
  
  FUN_00471664(param_1);
  iVar1 = FUN_0047f0a8();
  FUN_004844d4((int)param_1,*(undefined4 *)(iVar1 + 0x30));
  if (param_1[0x5a] != 0) {
    (**(code **)(*param_1 + 0x254))();
    param_1[0x5a] = 0;
  }
  param_1[0x83] = 0;
  return;
}


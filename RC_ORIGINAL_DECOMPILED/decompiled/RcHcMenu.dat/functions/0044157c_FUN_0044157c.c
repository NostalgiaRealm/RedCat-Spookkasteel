/*
 * FUN_0044157c at 0044157c
 * undefined __register FUN_0044157c(int * param_1)
 * Address ranges: 0044157c-004415b7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0044157c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  FUN_00419360((int)param_1);
  iVar1 = FUN_00442fd4((int)param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00442fd4((int)param_1);
    FUN_00403270(param_1,uVar2,CONCAT31((int3)((uint)extraout_ECX >> 8),1));
  }
  if ((char)param_1[0x1a] != '\0') {
    FUN_004415b8(param_1);
  }
  return;
}


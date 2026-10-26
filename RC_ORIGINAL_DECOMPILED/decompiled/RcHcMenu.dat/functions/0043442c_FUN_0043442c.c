/*
 * FUN_0043442c at 0043442c
 * undefined __register FUN_0043442c(int * param_1)
 * Address ranges: 0043442c-00434461
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0043442c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  
  FUN_00419360((int)param_1);
  iVar1 = FUN_00431b5c((int)param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_00431b5c((int)param_1);
    FUN_00403270(param_1,uVar2,CONCAT31((int3)((uint)extraout_ECX >> 8),1));
  }
  FUN_00431e58((int)param_1);
  return;
}


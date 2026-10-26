/*
 * FUN_00412314 at 00412314
 * undefined __register FUN_00412314(undefined4 * param_1, int param_2, int param_3)
 * Address ranges: 00412314-00412362
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00412314(undefined4 *param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((param_2 < 0) || ((int)param_1[2] <= param_2)) {
    FUN_004122c0(*param_1,(undefined4 *)PTR_PTR_005724ac,param_2);
  }
  if ((param_3 < 0) || ((int)param_1[2] <= param_3)) {
    FUN_004122c0(*param_1,(undefined4 *)PTR_PTR_005724ac,param_3);
  }
  iVar1 = param_1[1];
  uVar2 = *(undefined4 *)(iVar1 + param_2 * 4);
  *(undefined4 *)(iVar1 + param_2 * 4) = *(undefined4 *)(param_1[1] + param_3 * 4);
  *(undefined4 *)(iVar1 + param_3 * 4) = uVar2;
  return;
}


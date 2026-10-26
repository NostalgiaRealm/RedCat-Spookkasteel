/*
 * FUN_00402818 at 00402818
 * undefined __register FUN_00402818(int * param_1, int param_2)
 * Address ranges: 00402818-00402864
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00402818(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    if (param_2 == 0) {
      *param_1 = 0;
      iVar1 = (*(code *)PTR_FUN_0056f028)(iVar1);
      if (iVar1 == 0) {
        return;
      }
      FUN_00402874(CONCAT31((int3)((uint)iVar1 >> 8),2));
      return;
    }
    iVar1 = (*(code *)PTR_FUN_0056f02c)(iVar1);
    if (iVar1 != 0) {
      *param_1 = iVar1;
      return;
    }
LAB_00402849:
    FUN_00402874(1);
    return;
  }
  if (param_2 != 0) {
    iVar1 = (*(code *)PTR_FUN_0056f024)(param_2);
    if (iVar1 == 0) goto LAB_00402849;
    *param_1 = iVar1;
  }
  return;
}


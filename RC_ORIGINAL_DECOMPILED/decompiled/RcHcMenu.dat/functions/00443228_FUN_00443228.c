/*
 * FUN_00443228 at 00443228
 * undefined __register FUN_00443228(int * param_1, int param_2)
 * Address ranges: 00443228-00443294
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00443228(int *param_1,int param_2)

{
  int iVar1;
  
  if ((-1 < param_2) && (param_1[0x14] != 0)) {
    iVar1 = FUN_00442fec((int)param_1);
    if (param_2 < iVar1) goto LAB_0044324e;
  }
  FUN_00440834((undefined4 *)PTR_PTR_00572284);
LAB_0044324e:
  iVar1 = FUN_00412384((undefined4 *)param_1[0x14],param_2);
  FUN_00412224((int *)param_1[0x14],param_2);
  *(undefined4 *)(iVar1 + 0x58) = 0;
  *(undefined4 *)(iVar1 + 0x78) = 0;
  *(undefined4 *)(iVar1 + 0x7c) = 0;
  if (param_1[10] != 0) {
    FUN_004415b8(param_1);
  }
  iVar1 = FUN_00442fec((int)param_1);
  (**(code **)(*param_1 + 0x38))(param_1,iVar1 == 0);
  return;
}


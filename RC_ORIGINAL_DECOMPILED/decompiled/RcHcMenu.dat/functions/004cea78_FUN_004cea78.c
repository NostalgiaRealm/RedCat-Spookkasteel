/*
 * FUN_004cea78 at 004cea78
 * undefined __register FUN_004cea78(int * param_1, int param_2)
 * Address ranges: 004cea78-004ceb28
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004cea78(int *param_1,int param_2)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_120;
  undefined1 *puStack_11c;
  undefined1 *puStack_118;
  byte local_114 [256];
  int local_14;
  undefined4 local_10;
  int local_c;
  int *local_8;
  
  puStack_118 = &stack0xfffffffc;
  local_14 = 0;
  puStack_11c = &LAB_004ceb29;
  uStack_120 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_120;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (-1 < param_2) {
    iVar2 = (**(code **)(*(int *)param_1[1] + 0x14))();
    uVar3 = iVar2 - 1;
    if (SBORROW4(iVar2,1)) {
      uVar3 = thunk_FUN_00402874(uVar3);
    }
    puVar1 = puStack_118;
    if (local_c <= (int)uVar3) goto LAB_004ceaf7;
  }
  puStack_118 = puVar1;
  FUN_00402fe0(*local_8,local_114);
  FUN_00403fd4(&local_14,local_114);
  FUN_00404038(&local_14,(undefined4 *)".GetDbTableInfoByNum: out of range");
  FUN_00403d94(local_14);
LAB_004ceaf7:
  piVar4 = (int *)(**(code **)(*(int *)local_8[1] + 0x18))((int *)local_8[1],local_c);
  local_10 = FUN_00403224(piVar4,(int)&PTR_FUN_004cc5c4);
  *in_FS_OFFSET = uStack_120;
  puStack_118 = &LAB_004ceb30;
  puStack_11c = (undefined1 *)0x4ceb28;
  FUN_00403db0(&local_14);
  return;
}


/*
 * FUN_004b4f0c at 004b4f0c
 * undefined __register FUN_004b4f0c(int * param_1, undefined1 param_2)
 * Address ranges: 004b4f0c-004b50ee
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004b4f0c(int *param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 *in_FS_OFFSET;
  int *piVar2;
  byte local_110 [256];
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_10 = 0;
  piVar2 = (int *)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xfffffee4;
  local_9 = param_2;
  local_8 = param_1;
  if (param_1[7] == 0) {
    FUN_00402fe0(*param_1,local_110);
    FUN_00403fd4(&local_10,local_110);
    FUN_00404038(&local_10,(undefined4 *)".AddFieldByNum: AppObjDesc must be assigned");
    FUN_00403d94(local_10);
  }
  *(undefined1 *)(local_8 + 0xe) = local_9;
  FUN_004b3bc0(local_8);
  FUN_004b3ec4((int)local_8);
  FUN_004b42c8(local_8);
  (**(code **)(*(int *)local_8[0x10] + 0x40))();
  if ((char)local_8[9] == '\0') {
    (**(code **)(*(int *)local_8[0x10] + 0x34))((int *)local_8[0x10],"SELECT ");
  }
  else {
    (**(code **)(*(int *)local_8[0x10] + 0x34))((int *)local_8[0x10],"SELECT DISTINCT ");
  }
  iVar1 = (**(code **)(*(int *)local_8[0x15] + 0x14))();
  if (0 < iVar1) {
    FUN_004b38b0(local_8,(int *)local_8[0x15],(undefined4 *)&DAT_004b518c,(int *)local_8[0x10]);
  }
  iVar1 = (**(code **)(*(int *)local_8[0x12] + 0x14))();
  if (0 < iVar1) {
    (**(code **)(*(int *)local_8[0x10] + 0x34))((int *)local_8[0x10]," FROM ");
    piVar2 = (int *)local_8[0x10];
    FUN_004b3990(local_8,(int *)local_8[0x13],local_8[3],piVar2);
  }
  iVar1 = (**(code **)(*(int *)local_8[0x17] + 0x14))();
  if (0 < iVar1) {
    (**(code **)(*(int *)local_8[0x10] + 0x34))((int *)local_8[0x10]," WHERE ");
    piVar2 = (int *)local_8[0x10];
    FUN_004b38b0(local_8,(int *)local_8[0x17],(undefined4 *)" AND ",piVar2);
  }
  iVar1 = (**(code **)(*(int *)local_8[0x16] + 0x14))();
  if (0 < iVar1) {
    (**(code **)(*(int *)local_8[0x10] + 0x34))((int *)local_8[0x10]," GROUP BY ");
    piVar2 = (int *)local_8[0x10];
    FUN_004b38b0(local_8,(int *)local_8[0x16],(undefined4 *)&DAT_004b518c,piVar2);
  }
  iVar1 = (**(code **)(*(int *)local_8[0x14] + 0x14))();
  if (0 < iVar1) {
    (**(code **)(*(int *)local_8[0x10] + 0x34))((int *)local_8[0x10]," ORDER BY ");
    piVar2 = (int *)local_8[0x10];
    FUN_004b38b0(local_8,(int *)local_8[0x14],(undefined4 *)&DAT_004b518c,piVar2);
  }
  *in_FS_OFFSET = piVar2;
  FUN_00403db0(&local_10);
  return;
}


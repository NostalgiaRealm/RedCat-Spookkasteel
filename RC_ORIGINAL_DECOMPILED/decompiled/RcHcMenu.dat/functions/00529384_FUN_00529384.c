/*
 * FUN_00529384 at 00529384
 * undefined __register FUN_00529384(int * param_1, int * param_2, int * param_3, undefined4 param_4, LONG * param_5, int param_6)
 * Address ranges: 00529384-0052946e;0052949a-005294af
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00529384(int *param_1,int *param_2,int *param_3,undefined4 param_4,LONG *param_5,
                 int param_6)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  undefined4 *in_FS_OFFSET;
  char *pcVar5;
  undefined4 uStack_50;
  undefined1 *puStack_4c;
  undefined1 *puStack_48;
  byte local_38 [28];
  int *local_1c;
  char *local_18;
  char local_11;
  int *local_10;
  int *local_c;
  int *local_8;
  
  puStack_48 = &stack0xfffffffc;
  local_18 = (char *)0x0;
  puStack_4c = &LAB_005294b0;
  uStack_50 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_50;
  pcVar5 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &stack0xffffffa4;
  puVar3 = (undefined4 *)(param_6 + 0x44);
  pbVar4 = local_38;
  local_10 = param_3;
  local_c = param_2;
  local_8 = param_1;
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(undefined4 *)pbVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    pbVar4 = pbVar4 + 4;
  }
  local_1c = (int *)FUN_00494c5c(local_10,local_38);
  local_11 = '\x01';
  if ((*(char *)(param_6 + 0x40) != '\0') && (*(short *)((int)local_8 + 0x2b2) != 0)) {
    local_11 = '\0';
    (*(code *)local_8[0xac])(local_8[0xad],local_8,local_c,&local_11,param_6,local_1c,param_5);
  }
  if (local_11 == '\0') goto LAB_00529465;
  if (local_1c == (int *)0x0) {
LAB_0052943d:
    FUN_00403db0((int *)&local_18);
  }
  else {
    cVar1 = (**(code **)(*local_1c + 0x4c))();
    if (cVar1 == '\0') goto LAB_0052943d;
    FUN_00496b88(local_1c,(int *)&local_18);
  }
  pcVar5 = local_18;
  FUN_00522b0c(local_8,local_c,param_5,local_18,*(int *)(param_6 + 0x10),*(char *)(param_6 + 4));
LAB_00529465:
  *in_FS_OFFSET = pcVar5;
  *in_FS_OFFSET = uStack_50;
  puStack_48 = &LAB_005294b7;
  puStack_4c = (undefined1 *)0x5294af;
  FUN_00403db0((int *)&local_18);
  return;
}


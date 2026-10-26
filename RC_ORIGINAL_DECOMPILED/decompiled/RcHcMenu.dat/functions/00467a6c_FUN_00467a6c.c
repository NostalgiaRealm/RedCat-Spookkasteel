/*
 * FUN_00467a6c at 00467a6c
 * undefined __register FUN_00467a6c(int param_1, undefined4 param_2, int param_3, uint * param_4)
 * Address ranges: 00467a6c-00467beb;00467c03-00467c20
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00467a6c(int param_1,undefined4 param_2,int param_3,uint *param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *in_FS_OFFSET;
  int iStackY_40;
  undefined1 *puStackY_3c;
  undefined1 *puStackY_38;
  int iVar3;
  int iStack_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  undefined4 local_18;
  undefined1 local_14;
  byte *local_10;
  int *local_c;
  undefined4 local_8;
  
  local_10 = (byte *)0x0;
  puStack_28 = (undefined1 *)0x467a89;
  local_8 = param_2;
  FUN_004041e4((int)param_4);
  puStack_2c = &LAB_00467c21;
  iStack_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStack_30;
  iVar3 = 0x467a9e;
  puStack_28 = &stack0xfffffffc;
  iVar1 = FUN_004677b8(param_1);
  if (iVar1 == 0) {
    iVar3 = 0;
    puStackY_38 = (undefined1 *)0x467ab3;
    FUN_00406a48((undefined4 *)PTR_PTR_00572510,(int *)&local_10);
    local_18 = *(undefined4 *)(param_1 + 0xc);
    local_14 = 0xb;
    puStackY_38 = (undefined1 *)0x467acc;
    FUN_00466e30(local_10,&local_18,0,iVar3);
  }
  puStackY_38 = (undefined1 *)0x467ad6;
  local_c = (int *)(**(code **)(iVar1 + 0x2c))(iVar1,1,local_8);
  puStackY_3c = &LAB_00467bec;
  iStackY_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = (int)&iStackY_40;
  puStackY_38 = &stack0xfffffffc;
  uVar2 = FUN_00467870(param_1);
  (**(code **)(*local_c + 0xb4))(local_c,uVar2);
  if (param_4 == (uint *)0x0) {
    FUN_00469e30((int)local_c,*(uint **)(param_1 + 0xc));
  }
  else {
    FUN_00469e30((int)local_c,param_4);
  }
  *(bool *)((int)local_c + 0x39) = (*(byte *)(param_1 + 0x22) & 4) != 0;
  FUN_0046a004((int)local_c,(*(byte *)(param_1 + 0x22) & 2) != 0);
  (**(code **)(*local_c + 0xcc))(local_c,*(undefined1 *)(param_1 + 0x21));
  uVar2 = FUN_0040320c(local_c,(int)&LAB_00464978);
  if ((char)uVar2 != '\0') {
    local_c[0x3c] = *(int *)(param_1 + 0x14);
  }
  if (param_3 == 0) {
    (**(code **)(*local_c + 0xa8))(local_c,*(undefined4 *)(*(int *)(param_1 + 4) + 0x1c));
  }
  else {
    (**(code **)(*local_c + 0xb0))(local_c,param_3);
  }
  if (((*(byte *)(param_1 + 0x22) & 0x20) != 0) || (*(char *)(param_1 + 0x21) == '\x17')) {
    uVar2 = FUN_0040320c(local_c,(int)&PTR_FUN_00463020);
    if ((char)uVar2 != '\0') {
      *(undefined1 *)(local_c + 0x34) = 1;
    }
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    (**(code **)(*local_c + 0xac))(local_c,3);
  }
  if ((*(byte *)(param_1 + 0x22) & 0x10) != 0) {
    uVar2 = FUN_0040320c(local_c,(int)&PTR_FUN_00464fe0);
    if ((char)uVar2 != '\0') {
      FUN_0046da88((int)local_c,1);
    }
  }
  *in_FS_OFFSET = iStackY_40;
  *in_FS_OFFSET = iVar3;
  puStack_2c = &LAB_00467c28;
  iStack_30 = 0x467c18;
  FUN_00403db0((int *)&local_10);
  iStack_30 = 0x467c20;
  FUN_00403db0((int *)&param_4);
  return;
}


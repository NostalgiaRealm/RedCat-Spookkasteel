/*
 * FUN_004f0d84 at 004f0d84
 * undefined __register FUN_004f0d84(int * param_1, int param_2)
 * Address ranges: 004f0d84-004f0e93
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f0d84(int *param_1,int param_2)

{
  undefined1 *puVar1;
  char cVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_38;
  undefined1 *puStack_34;
  undefined1 *puStack_30;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  int local_20;
  int *local_1c;
  int *local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_18 = (int *)0x0;
  puStack_28 = &LAB_004f0eb1;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  puVar1 = &stack0xfffffffc;
  local_c = param_2;
  local_8 = param_1;
  if (param_2 == 0) {
    puStack_30 = (undefined1 *)0x4f0dbd;
    FUN_00403d94("Assertion failure");
    puVar1 = puStack_24;
  }
  puStack_24 = puVar1;
  if (local_8 == (int *)0x0) {
    puStack_30 = (undefined1 *)0x4f0dd7;
    FUN_00403d94("Assertion failure");
  }
  puStack_30 = (undefined1 *)0x4f0ddf;
  local_14 = FUN_00493cac(local_c);
  puStack_30 = (undefined1 *)0x4f0dee;
  local_1c = (int *)FUN_00403064((int *)&PTR_FUN_004f0718,'\x01',extraout_ECX);
  puStack_34 = &LAB_004f0e94;
  uStack_38 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_38;
  puStack_30 = &stack0xfffffffc;
  FUN_004f075c(local_1c,local_8,'\0');
  uVar3 = local_1c[2] - 1;
  if (SBORROW4(local_1c[2],1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_20 = uVar3 + 1;
    local_10 = 0;
    do {
      piVar4 = (int *)FUN_004f0738(local_1c,local_10);
      piVar5 = FUN_00406aa0((int *)&local_18);
      cVar2 = FUN_00403128(piVar4,(int *)&DAT_004f0f00,piVar5);
      if (cVar2 != '\0') {
        iVar6 = (**(code **)(*local_18 + 0x3c))();
        if (iVar6 != 0) {
          iVar6 = (**(code **)(*local_18 + 0x3c))();
          iVar6 = FUN_00495ec0(iVar6);
          if (iVar6 == local_14) {
            (**(code **)(*local_18 + 0x74))();
          }
        }
      }
      local_10 = local_10 + 1;
      local_20 = local_20 + -1;
    } while (local_20 != 0);
  }
  *in_FS_OFFSET = uStack_38;
  puStack_30 = &LAB_004f0e9b;
  puStack_34 = (undefined1 *)0x4f0e93;
  FUN_00403094(local_1c);
  return;
}


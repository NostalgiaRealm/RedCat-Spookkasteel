/*
 * FUN_00470e1c at 00470e1c
 * undefined __register FUN_00470e1c(int param_1, undefined4 param_2, undefined4 param_3, undefined1 * param_4)
 * Address ranges: 00470e1c-00470f29;00470f40-00470f87
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00470e1c(int param_1,undefined4 param_2,undefined4 param_3,undefined1 *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStackY_40;
  undefined1 *puStackY_3c;
  undefined1 *puVar4;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  int local_1c;
  char *local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  puStack_2c = &stack0xfffffffc;
  local_14 = 0;
  local_18 = (char *)0x0;
  puStack_30 = &LAB_00470f88;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  local_8 = param_1;
  local_1c = FUN_004687b0(param_1);
  if (-1 < local_1c + -1) {
    local_c = 0;
    do {
      local_10 = (int *)FUN_00468730(local_8,local_c);
      if (local_10[1] == *(int *)(*(int *)(param_4 + -4) + 4)) {
        FUN_00403e48(&local_14,local_10[2]);
        FUN_00403e48((int *)&local_18,local_14);
        iVar1 = FUN_00404030((int)local_18);
        iVar2 = FUN_00404030(*(int *)(param_4 + -8));
        if (iVar2 < iVar1) {
          uVar3 = FUN_00404030(*(int *)(param_4 + -8));
          FUN_00404364((int *)&local_18,uVar3);
          iVar1 = FUN_00409758(*(char **)(param_4 + -8),local_18);
          if (iVar1 == 0) {
            iVar1 = FUN_00404030(*(int *)(param_4 + -8));
            FUN_00404278(&local_14,1,iVar1);
            FUN_004042c0(*(undefined4 **)(param_4 + -0xc),&local_14,1);
            puStackY_3c = &LAB_00470f2a;
            uStackY_40 = *in_FS_OFFSET;
            *in_FS_OFFSET = &uStackY_40;
            (**(code **)(*local_10 + 0x18))(local_10,local_14);
            *in_FS_OFFSET = uStackY_40;
          }
        }
        if ((byte)((char)local_10[0xd] - 0x1aU) < 2) {
          puStackY_3c = (undefined1 *)0x470f5b;
          puVar4 = param_4;
          iVar1 = (**(code **)(*local_10 + 0xd0))();
          puStackY_3c = (undefined1 *)0x470f60;
          FUN_00470e1c(iVar1,extraout_EDX,extraout_ECX,puVar4);
        }
      }
      local_c = local_c + 1;
      local_1c = local_1c + -1;
    } while (local_1c != 0);
  }
  *in_FS_OFFSET = uStack_34;
  puStack_2c = &LAB_00470f8f;
  puStack_30 = (undefined1 *)0x470f87;
  FUN_00403dd4((int *)&local_18,2);
  return;
}


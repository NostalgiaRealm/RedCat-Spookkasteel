/*
 * FUN_0051b27c at 0051b27c
 * undefined __register FUN_0051b27c(int param_1)
 * Address ranges: 0051b27c-0051b354
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0051b27c(int param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 uVar4;
  undefined4 extraout_ECX_02;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar5;
  undefined4 extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  undefined *local_18;
  int local_14;
  WPARAM local_10;
  char local_9;
  int local_8;
  
  puStack_20 = &stack0xfffffffc;
  local_18 = (undefined *)0x0;
  puStack_24 = &LAB_0051b355;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  local_9 = '\0';
  local_8 = param_1;
  iVar2 = (**(code **)(**(int **)(*(int *)(param_1 + 0x2e0) + 0x1f0) + 0x14))();
  uVar3 = iVar2 - 1;
  uVar4 = extraout_ECX;
  uVar5 = extraout_EDX;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
    uVar4 = extraout_ECX_00;
    uVar5 = extraout_EDX_00;
  }
  if (-1 < (int)uVar3) {
    local_14 = uVar3 + 1;
    local_10 = 0;
    do {
      uVar3 = FUN_005197fc(*(int **)(local_8 + 0x2e0),local_10);
      uVar4 = extraout_ECX_01;
      uVar5 = extraout_EDX_01;
      if ((char)uVar3 != '\0') {
        local_9 = '\x01';
        break;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  if (local_9 == '\0') {
    FUN_00432bf4(*(int **)(local_8 + 0x2e0),uVar5,uVar4);
    cVar1 = FUN_00403270(*(int **)(local_8 + 0x2e0),extraout_EDX_02,extraout_ECX_02);
    if (cVar1 != '\0') {
      (**(code **)(**(int **)(local_8 + 0x2e0) + 0xb0))();
    }
    FUN_00406a48(&PTR_DAT_0051a0d8,(int *)&local_18);
    FUN_004579bc(local_18,'\0');
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_0051b35c;
  puStack_24 = (undefined1 *)0x51b354;
  FUN_00403db0((int *)&local_18);
  return;
}


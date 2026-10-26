/*
 * FUN_0041644c at 0041644c
 * undefined __register FUN_0041644c(int * param_1, int * param_2)
 * Address ranges: 0041644c-0041659d;004165bb-004165c4;004165fa-0041660f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041644c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  int iVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  undefined4 local_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  undefined4 local_30;
  undefined1 *puStack_2c;
  undefined1 *puStack_28;
  int *local_18;
  int *local_14;
  int local_c;
  int *local_8;
  
  puStack_28 = &stack0xfffffffc;
  puStack_34 = &stack0xfffffffc;
  local_c = 0;
  puStack_2c = &LAB_00416610;
  local_30 = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_30;
  puStack_38 = &LAB_004165c5;
  local_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &local_3c;
  puStack_40 = (undefined1 *)0x416487;
  local_8 = param_2;
  FUN_00416f2c((int)param_1,&local_c,0);
  puStack_44 = &LAB_0041659e;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  iVar5 = 1;
  puStack_40 = &stack0xfffffffc;
  iVar1 = FUN_00404030(local_c);
  local_14 = local_8;
  *(undefined1 *)(param_1 + 0x1d) = 1;
  iVar2 = iVar5;
  while( true ) {
    for (; (iVar5 <= iVar1 && (*(char *)(local_c + -1 + iVar5) != '.')); iVar5 = iVar5 + 1) {
    }
    FUN_00404238(local_c,iVar2,iVar5 - iVar2,param_1 + 0x1c);
    if (iVar1 < iVar5) break;
    iVar2 = FUN_004032b4(*local_14);
    puVar3 = (undefined4 *)FUN_0040f908(iVar2,(undefined1 *)param_1[0x1c]);
    if (puVar3 == (undefined4 *)0x0) {
      FUN_00415860((int)param_1,extraout_EDX,extraout_ECX);
    }
    local_18 = (int *)0x0;
    if (**(char **)*puVar3 == '\a') {
      local_18 = (int *)FUN_0040f9f8(local_14,puVar3);
    }
    uVar4 = FUN_0040320c(local_18,(int)&PTR_FUN_0041088c);
    if ((char)uVar4 == '\0') {
      FUN_00416430(uVar4,extraout_EDX_00,extraout_ECX_00,(int)&stack0xfffffffc);
    }
    local_14 = local_18;
    iVar5 = iVar5 + 1;
    iVar2 = iVar5;
  }
  iVar2 = FUN_004032b4(*local_14);
  puVar3 = (undefined4 *)FUN_0040f908(iVar2,(undefined1 *)param_1[0x1c]);
  if (puVar3 == (undefined4 *)0x0) {
    *(undefined1 *)(param_1 + 0x1d) = 0;
    (**(code **)(*local_14 + 4))(local_14,param_1);
    *(undefined1 *)(param_1 + 0x1d) = 1;
    if (param_1[0x1c] != 0) {
      FUN_00415860((int)param_1,extraout_EDX_01,extraout_ECX_01);
    }
  }
  else {
    FUN_004168a0(param_1,local_14,puVar3);
  }
  *in_FS_OFFSET = uStack_48;
  *in_FS_OFFSET = local_3c;
  *in_FS_OFFSET = local_30;
  puStack_28 = &LAB_00416617;
  puStack_2c = (undefined1 *)0x41660f;
  FUN_00403db0(&local_c);
  return;
}


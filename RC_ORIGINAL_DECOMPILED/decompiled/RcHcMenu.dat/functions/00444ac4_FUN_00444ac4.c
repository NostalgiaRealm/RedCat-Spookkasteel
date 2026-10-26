/*
 * FUN_00444ac4 at 00444ac4
 * undefined __register FUN_00444ac4(HMENU param_1, ushort param_2, int param_3, undefined1 param_4, int param_5)
 * Address ranges: 00444ac4-00444b98
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00444ac4(HMENU param_1,ushort param_2,int param_3,undefined1 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar3;
  undefined4 *in_FS_OFFSET;
  undefined *puVar4;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  int local_14;
  undefined *local_10;
  undefined *local_c;
  int iStack_8;
  
  puStack_20 = &stack0xfffffffc;
  local_c = (undefined *)0x0;
  local_10 = (undefined *)0x0;
  local_14 = 0;
  iStack_8 = (uint)param_2 << 0x10;
  puStack_24 = &LAB_00444b99;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  if ((param_2 & 0x10) == 0) {
    iVar1 = FUN_00444360(*(int *)(param_5 + -4));
    uVar3 = extraout_EDX_00;
    if ((iVar1 != 0) && (iVar2 = FUN_00442fec(iVar1), uVar3 = extraout_EDX_01, param_3 < iVar2)) {
      iVar1 = FUN_00442ffc(iVar1,param_3);
      uVar3 = extraout_EDX_02;
    }
  }
  else {
    puStack_20 = &stack0xfffffffc;
    GetSubMenu(param_1,param_3);
    iVar1 = FUN_00444360(*(int *)(param_5 + -4));
    uVar3 = extraout_EDX;
  }
  if ((iVar1 != 0) && (*(int *)(iVar1 + 0x24) != 0)) {
    FUN_00403f58((int *)&local_c,CONCAT31((int3)((uint)uVar3 >> 8),param_4));
    puVar4 = local_c;
    FUN_00403f58((int *)&local_10,
                 CONCAT31((int3)((uint)*(undefined1 **)(iVar1 + 0x24) >> 8),
                          **(undefined1 **)(iVar1 + 0x24)));
    iVar2 = FUN_00409870(local_10,puVar4);
    if (iVar2 == 0) {
      FUN_00445938(*(int *)(iVar1 + 0x24),&local_14);
    }
  }
  *in_FS_OFFSET = uStack_28;
  puStack_20 = &LAB_00444ba0;
  puStack_24 = (undefined1 *)0x444b98;
  FUN_00403dd4(&local_14,3);
  return;
}


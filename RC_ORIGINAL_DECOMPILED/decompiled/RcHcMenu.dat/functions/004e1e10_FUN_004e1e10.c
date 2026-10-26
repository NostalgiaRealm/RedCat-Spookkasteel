/*
 * FUN_004e1e10 at 004e1e10
 * undefined __register FUN_004e1e10(int * param_1, uint * param_2)
 * Address ranges: 004e1e10-004e1f2c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e1e10(int *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  int iVar4;
  int extraout_EDX_00;
  int extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int *local_8;
  
  puStack_10 = (undefined1 *)0x4e1e24;
  local_c = param_2;
  local_8 = param_1;
  FUN_004041e4((int)param_2);
  puStack_14 = &LAB_004e1f2d;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puStack_10 = &stack0xfffffffc;
  FUN_0044dc60(local_8,extraout_EDX,extraout_ECX);
  FUN_004d90a0(local_8,'\0');
  FUN_004e1918(local_8);
  iVar1 = FUN_00432178(local_8);
  uVar2 = local_8[0xb4];
  iVar4 = iVar1 - *(int *)(uVar2 + 0x38);
  if (SBORROW4(iVar1,*(int *)(uVar2 + 0x38))) {
    uVar2 = thunk_FUN_00402874(uVar2);
    iVar4 = extraout_EDX_00;
  }
  iVar1 = iVar4 + -6;
  if (SBORROW4(iVar4,6)) {
    thunk_FUN_00402874(uVar2);
    iVar1 = extraout_EDX_01;
  }
  FUN_00431f34((int *)local_8[0xb4],iVar1);
  if ((byte)((char)local_8[0xba] - 4U) < 2) {
    FUN_00431f54((int *)local_8[0xb4],0x1b);
  }
  else {
    FUN_00431f54((int *)local_8[0xb4],6);
  }
  FUN_004e1b0c(local_8,local_c);
  FUN_0043262c((int *)local_8[0xb5],CONCAT31((int3)((uint)extraout_EDX_02 >> 8),1),extraout_ECX_00);
  uVar2 = *(int *)(local_8[0xb5] + 0x34) + *(int *)(local_8[0xb5] + 0x3c);
  if (SCARRY4(*(int *)(local_8[0xb5] + 0x34),*(int *)(local_8[0xb5] + 0x3c))) {
    uVar2 = thunk_FUN_00402874(uVar2);
  }
  uVar3 = uVar2 + 6;
  if (SCARRY4(uVar2,6)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  local_8[0xc0] = uVar3;
  local_8[0xc1] = local_8[0xc0];
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004e1f34;
  puStack_14 = (undefined1 *)0x4e1f2c;
  FUN_00403db0((int *)&local_c);
  return;
}


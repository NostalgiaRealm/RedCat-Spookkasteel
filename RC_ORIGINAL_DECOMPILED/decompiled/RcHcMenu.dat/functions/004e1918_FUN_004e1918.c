/*
 * FUN_004e1918 at 004e1918
 * undefined __register FUN_004e1918(int * param_1)
 * Address ranges: 004e1918-004e1a76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004e1918(int *param_1)

{
  int iVar1;
  uint uVar2;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 uVar3;
  int iVar4;
  int extraout_EDX;
  int extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 uVar5;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  uint *local_c;
  int *local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = (uint *)0x0;
  puStack_14 = &LAB_004e1a77;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  local_8 = param_1;
  FUN_0044b258((int)param_1,'\0');
  FUN_00438aa8((int)local_8,0);
  FUN_0044b22c((int)local_8,'\0');
  FUN_0044aa38(local_8,local_8[0xbd]);
  FUN_0044aa68(local_8,local_8[0xbb]);
  iVar1 = FUN_00432178(local_8);
  uVar2 = local_8[0xb4];
  iVar4 = iVar1 - *(int *)(uVar2 + 0x38);
  if (SBORROW4(iVar1,*(int *)(uVar2 + 0x38))) {
    uVar2 = thunk_FUN_00402874(uVar2);
    iVar4 = extraout_EDX;
  }
  iVar1 = iVar4 + -6;
  if (SBORROW4(iVar4,6)) {
    thunk_FUN_00402874(uVar2);
    iVar1 = extraout_EDX_00;
  }
  FUN_00431f34((int *)local_8[0xb4],iVar1);
  FUN_00431f34((int *)local_8[0xb5],6);
  if ((byte)((char)local_8[0xba] - 4U) < 2) {
    FUN_00431f54((int *)local_8[0xb5],0x1b);
    FUN_00431f54((int *)local_8[0xb4],0x1b);
    uVar3 = extraout_ECX;
    uVar5 = extraout_EDX_01;
  }
  else {
    FUN_00431f54((int *)local_8[0xb5],6);
    FUN_00431f54((int *)local_8[0xb4],6);
    uVar3 = extraout_ECX_00;
    uVar5 = extraout_EDX_02;
  }
  if (*(char *)((int)local_8 + 0x2e9) == '\0') {
    FUN_0043262c((int *)local_8[0xb5],0,uVar3);
  }
  else {
    FUN_0043262c((int *)local_8[0xb5],CONCAT31((int3)((uint)uVar5 >> 8),1),uVar3);
  }
  FUN_004e1ae8((int)local_8,(int *)&local_c);
  FUN_004e1b0c(local_8,local_c);
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_004e1a7e;
  puStack_14 = (undefined1 *)0x4e1a76;
  FUN_00403db0((int *)&local_c);
  return;
}


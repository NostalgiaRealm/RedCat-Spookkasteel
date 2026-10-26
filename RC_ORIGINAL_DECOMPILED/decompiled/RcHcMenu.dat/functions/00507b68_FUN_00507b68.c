/*
 * FUN_00507b68 at 00507b68
 * undefined __register FUN_00507b68(int param_1, int * param_2, undefined * param_3)
 * Address ranges: 00507b68-00507c31
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00507b68(int param_1,int *param_2,undefined *param_3)

{
  HDC hdc;
  undefined *puVar1;
  int iVar2;
  int extraout_ECX;
  uint uVar3;
  uint extraout_ECX_00;
  int extraout_ECX_01;
  int extraout_ECX_02;
  int iVar4;
  int extraout_EDX;
  uint extraout_EDX_00;
  int *piVar5;
  undefined4 *in_FS_OFFSET;
  undefined *puVar6;
  undefined4 uStack_3c;
  undefined1 *puStack_38;
  undefined1 *puStack_34;
  int local_28 [4];
  int *local_18;
  LONG local_14;
  LONG local_10;
  undefined *local_c;
  int local_8;
  
  piVar5 = local_28;
  for (iVar2 = 4; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar5 = *param_2;
    param_2 = param_2 + 1;
    piVar5 = piVar5 + 1;
  }
  puStack_34 = (undefined1 *)0x507b8c;
  local_c = param_3;
  local_8 = param_1;
  FUN_004041e4((int)param_3);
  puStack_38 = &LAB_00507c32;
  uStack_3c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_3c;
  local_18 = *(int **)(local_8 + 0x1f0);
  puStack_34 = &stack0xfffffffc;
  local_10 = FUN_0041cda8(local_18,local_c);
  local_14 = FUN_0041cdc4(local_18,&DAT_00507c48);
  iVar2 = 1;
  hdc = (HDC)FUN_0041cf6c(local_18);
  SetBkMode(hdc,iVar2);
  iVar2 = local_28[1] + local_28[3];
  puVar1 = local_c;
  puVar6 = local_c;
  if (SCARRY4(local_28[1],local_28[3])) {
    puVar1 = (undefined *)thunk_FUN_00402874((uint)local_c);
    iVar2 = extraout_ECX;
  }
  uVar3 = iVar2 - local_14;
  if (SBORROW4(iVar2,local_14)) {
    puVar1 = (undefined *)thunk_FUN_00402874((uint)puVar1);
    uVar3 = extraout_ECX_00;
  }
  iVar2 = (int)uVar3 >> 1;
  if (iVar2 < 0) {
    iVar2 = iVar2 + (uint)((uVar3 & 1) != 0);
  }
  iVar4 = local_28[0] + local_28[2];
  if (SCARRY4(local_28[0],local_28[2])) {
    puVar1 = (undefined *)thunk_FUN_00402874((uint)puVar1);
    iVar2 = extraout_ECX_01;
    iVar4 = extraout_EDX;
  }
  uVar3 = iVar4 - local_10;
  if (SBORROW4(iVar4,local_10)) {
    thunk_FUN_00402874((uint)puVar1);
    iVar2 = extraout_ECX_02;
    uVar3 = extraout_EDX_00;
  }
  iVar4 = (int)uVar3 >> 1;
  if (iVar4 < 0) {
    iVar4 = iVar4 + (uint)((uVar3 & 1) != 0);
  }
  FUN_0041cc34(local_18,iVar4,iVar2,puVar6);
  *in_FS_OFFSET = uStack_3c;
  puStack_34 = &LAB_00507c39;
  puStack_38 = (undefined1 *)0x507c31;
  FUN_00403db0((int *)&local_c);
  return;
}


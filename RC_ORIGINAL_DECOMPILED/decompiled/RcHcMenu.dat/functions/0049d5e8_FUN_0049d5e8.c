/*
 * FUN_0049d5e8 at 0049d5e8
 * undefined __register FUN_0049d5e8(int param_1, int param_2)
 * Address ranges: 0049d5e8-0049d700;0049d708-0049d71d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0049d5e8(int param_1,int param_2)

{
  ulonglong uVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  int *piVar6;
  int *piVar7;
  int iVar8;
  undefined4 uStack_54;
  undefined1 *puStack_50;
  undefined1 *puStack_4c;
  undefined4 uStack_48;
  undefined1 *puStack_44;
  undefined1 *puStack_40;
  int local_38 [4];
  int local_28 [4];
  undefined *local_18;
  int local_14;
  int *local_10;
  int local_c;
  int local_8;
  
  puStack_40 = &stack0xfffffffc;
  local_18 = (undefined *)0x0;
  puStack_44 = &LAB_0049d71e;
  uStack_48 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_48;
  puStack_4c = (undefined1 *)0x49d618;
  local_c = param_2;
  local_8 = param_1;
  (**(code **)(**(int **)(param_1 + 0x14) + 0xc))(*(int **)(param_1 + 0x14),0,&local_18);
  puStack_4c = (undefined1 *)0x49d620;
  uVar2 = FUN_00409dd0(local_18);
  if ((char)uVar2 != '\0') {
    puStack_4c = (undefined1 *)0x49d633;
    local_10 = (int *)FUN_0049d4a8(local_8,local_18);
    puStack_4c = (undefined1 *)0x49d641;
    (**(code **)(*local_10 + 0x48))(local_10,local_18);
    puStack_50 = &LAB_0049d701;
    uStack_54 = *in_FS_OFFSET;
    *in_FS_OFFSET = &uStack_54;
    puStack_4c = &stack0xfffffffc;
    FUN_0049b884(*(int **)(local_8 + 0x10),*(int **)(*(int *)(local_8 + 8) + 0xc),
                 *(int *)(*(int *)(local_8 + 8) + 0x10),(undefined *)0x18);
    local_14 = local_10[0x23] / *(int *)(*(int *)(local_8 + 8) + 4);
    iVar8 = local_10[0x10];
    piVar6 = local_28;
    uVar1 = (longlong)local_c * (longlong)local_14;
    if ((longlong)(int)(uint)uVar1 != uVar1) {
      uVar3 = thunk_FUN_00402874((uint)uVar1);
      uVar1 = (ulonglong)uVar3;
    }
    FUN_00411640((int)uVar1,0,local_14,piVar6,iVar8);
    piVar6 = local_28;
    FUN_00411640(0,0,*(int *)(*(int *)(local_8 + 8) + 0xc),local_38,
                 *(int *)(*(int *)(local_8 + 8) + 0x10));
    piVar7 = local_38;
    piVar4 = (int *)FUN_0049ac74((int)local_10,extraout_EDX,extraout_ECX);
    piVar5 = (int *)FUN_0049ac74(*(int *)(local_8 + 0x10),extraout_EDX_00,extraout_ECX_00);
    FUN_0041c848(piVar5,piVar7,piVar4,piVar6);
    *in_FS_OFFSET = uStack_54;
    puStack_4c = (undefined1 *)0x49d708;
    puStack_50 = (undefined1 *)0x49d700;
    FUN_00403094(local_10);
    return;
  }
  *in_FS_OFFSET = uStack_48;
  puStack_40 = &LAB_0049d725;
  puStack_44 = (undefined1 *)0x49d71d;
  FUN_00403db0((int *)&local_18);
  return;
}


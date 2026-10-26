/*
 * FUN_005465d0 at 005465d0
 * undefined __register FUN_005465d0(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 005465d0-005466df
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005465d0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined4 extraout_ECX;
  int iVar3;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_14;
  uint local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_18 = (undefined1 *)0x5465e7;
  local_8 = param_1;
  local_14 = (int *)FUN_0049206c(*(int **)(*(int *)(param_4 + -4) + 0x1c));
  puStack_18 = (undefined1 *)0x5465f5;
  FUN_0054b510(*(uint *)(param_4 + -4));
  puStack_1c = &LAB_005466e0;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  uVar2 = (**(code **)(**(int **)(param_4 + -4) + 4))();
  local_10 = FUN_004e3058(*(int *)(*(int *)(param_4 + -4) + 0x80),uVar2);
  iVar3 = -local_10;
  if (SBORROW4(0,local_10)) {
    thunk_FUN_00402874(local_10);
    iVar3 = extraout_EDX;
  }
  cVar1 = FUN_0054823c(*(int **)(param_4 + -4),iVar3);
  if (cVar1 == '\0') {
    local_9 = 0;
    FUN_00403d94(" Internal inconsistency");
  }
  else {
    FUN_0054a2f8(*(int **)(param_4 + -4),(int)local_14);
    iVar3 = FUN_00494814(local_8,local_14,*(uint *)(*(int *)(param_4 + -4) + 0x3c),8);
    if (iVar3 < 0) {
      if (*(uint *)(*(int *)(param_4 + -4) + 0x80) == local_10) {
        local_9 = FUN_00546164(*(int *)(param_4 + -4),local_8);
      }
      else {
        local_9 = 1;
      }
    }
    else {
      local_9 = FUN_005461f0(local_8,extraout_EDX_00,extraout_ECX,param_4);
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_005466e7;
  puStack_1c = (undefined1 *)0x5466d7;
  FUN_0054b528(*(int **)(param_4 + -4));
  puStack_1c = (undefined1 *)0x5466df;
  FUN_00403094(local_14);
  return;
}


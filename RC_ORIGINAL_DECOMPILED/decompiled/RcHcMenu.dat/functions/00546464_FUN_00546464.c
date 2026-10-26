/*
 * FUN_00546464 at 00546464
 * undefined __register FUN_00546464(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00546464-00546571
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00546464(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 extraout_ECX;
  int extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  int *local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_18 = (undefined1 *)0x54647b;
  local_8 = param_1;
  local_14 = (int *)FUN_0049206c(*(int **)(*(int *)(param_4 + -4) + 0x1c));
  puStack_18 = (undefined1 *)0x546489;
  FUN_0054b510(*(uint *)(param_4 + -4));
  puStack_1c = &LAB_00546572;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  puStack_18 = &stack0xfffffffc;
  iVar2 = (**(code **)(**(int **)(param_4 + -4) + 8))();
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  uVar4 = (**(code **)(**(int **)(param_4 + -4) + 4))();
  iVar2 = uVar3 - uVar4;
  if (SBORROW4(uVar3,uVar4)) {
    thunk_FUN_00402874(uVar4);
    iVar2 = extraout_EDX;
  }
  local_10 = FUN_004e3058(*(int *)(*(int *)(param_4 + -4) + 0x80),iVar2);
  cVar1 = FUN_0054823c(*(int **)(param_4 + -4),local_10);
  if (cVar1 == '\0') {
    local_9 = 0;
    FUN_00403d94(" Internal inconsistency");
  }
  else {
    FUN_0054a2f8(*(int **)(param_4 + -4),(int)local_14);
    iVar2 = FUN_00494814(local_8,local_14,*(uint *)(*(int *)(param_4 + -4) + 0x3c),8);
    if (iVar2 < 1) {
      local_9 = FUN_00546314(local_8,extraout_EDX_00,extraout_ECX,param_4);
    }
    else {
      local_9 = FUN_00546164(*(int *)(param_4 + -4),local_8);
    }
  }
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_00546579;
  puStack_1c = (undefined1 *)0x546569;
  FUN_0054b528(*(int **)(param_4 + -4));
  puStack_1c = (undefined1 *)0x546571;
  FUN_00403094(local_14);
  return;
}


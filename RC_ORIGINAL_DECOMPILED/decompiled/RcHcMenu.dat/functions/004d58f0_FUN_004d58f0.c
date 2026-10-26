/*
 * FUN_004d58f0 at 004d58f0
 * undefined __register FUN_004d58f0(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 004d58f0-004d5a55
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004d58f0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined1 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  byte *pbVar5;
  char *pcStack_134;
  undefined1 *puStack_130;
  undefined1 *puStack_12c;
  undefined1 *local_124;
  byte local_120 [256];
  int local_20;
  int local_1c;
  byte *local_18;
  int local_14;
  int local_10;
  int local_c;
  int *local_8;
  
  puStack_12c = &stack0xfffffffc;
  local_1c = 0;
  local_20 = 0;
  local_124 = (undefined1 *)0x0;
  local_18 = (byte *)0x0;
  puStack_130 = &LAB_004d5a56;
  pcStack_134 = (char *)*in_FS_OFFSET;
  *in_FS_OFFSET = &pcStack_134;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (param_1 == (int *)0x0) {
    FUN_00403d94("Assertion failure");
    puVar1 = puStack_12c;
  }
  puStack_12c = puVar1;
  iVar2 = (**(code **)(*local_8 + 0x14))();
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_14 = uVar3 + 1;
    local_c = 0;
    do {
      (**(code **)(*local_8 + 0xc))(local_8,local_c,&local_18);
      pbVar5 = local_18;
      piVar4 = (int *)FUN_00497394(local_18,extraout_EDX,extraout_ECX);
      local_10 = FUN_004975d8(piVar4,pbVar5);
      if (local_10 == 0) {
        FUN_00402fe0(**(int **)(param_4 + -4),local_120);
        FUN_00403fd4(&local_20,local_120);
        (**(code **)(*local_8 + 0xc))(local_8,local_c,&local_124," Table ",local_20);
        puStack_130 = local_124;
        pcStack_134 = " not found";
        FUN_004040f0(&local_1c,4);
        FUN_00403d94(local_1c);
      }
      FUN_004ced38(*(int **)(*(int *)(*(int *)(param_4 + -4) + 4) + 4),*(int *)(local_10 + 0x34));
      if (*(char *)(*(int *)(*(int *)(param_4 + -4) + 4) + 0xc) != '\0') {
        iVar2 = FUN_004d0424(*(int *)(*(int *)(param_4 + -4) + 4));
        FUN_004b10d0(iVar2,*(int *)(local_10 + 0x34));
      }
      local_c = local_c + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  *in_FS_OFFSET = pcStack_134;
  puStack_12c = &LAB_004d5a5d;
  puStack_130 = (undefined1 *)0x4d5a48;
  FUN_00403db0((int *)&local_124);
  puStack_130 = (undefined1 *)0x4d5a55;
  FUN_00403dd4(&local_20,3);
  return;
}


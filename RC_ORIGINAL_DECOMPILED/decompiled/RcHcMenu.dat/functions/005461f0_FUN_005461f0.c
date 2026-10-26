/*
 * FUN_005461f0 at 005461f0
 * undefined __register FUN_005461f0(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 005461f0-005462fe
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_005461f0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 *in_FS_OFFSET;
  bool bVar3;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte local_15;
  int *local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_10 = 0;
  puStack_1c = (undefined1 *)0x54620c;
  local_8 = param_1;
  local_14 = (int *)FUN_0049206c(*(int **)(*(int *)(param_4 + -4) + 0x1c));
  puStack_1c = (undefined1 *)0x54621a;
  FUN_0054b510(*(uint *)(param_4 + -4));
  puStack_20 = &LAB_005462ff;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  local_15 = FUN_00547c54(*(int **)(param_4 + -4));
  local_15 = local_15 ^ 1;
  FUN_0054a2f8(*(int **)(param_4 + -4),(int)local_14);
  while( true ) {
    iVar2 = FUN_00494814(local_14,local_8,*(uint *)(*(int *)(param_4 + -4) + 0x3c),8);
    if (((-1 < iVar2) || (*(int *)(*(int *)(param_4 + -4) + 0x80) <= local_10)) || (local_15 != 0))
    break;
    local_15 = FUN_00547c54(*(int **)(param_4 + -4));
    local_15 = local_15 ^ 1;
    uVar1 = FUN_0054a2f8(*(int **)(param_4 + -4),(int)local_14);
    bVar3 = SCARRY4(local_10,1);
    local_10 = local_10 + 1;
    if (bVar3) {
      thunk_FUN_00402874(uVar1);
    }
  }
  if (*(int *)(*(int *)(param_4 + -4) + 0x80) <= local_10) {
    iVar2 = FUN_00494814(local_14,local_8,*(uint *)(*(int *)(param_4 + -4) + 0x3c),8);
    if (iVar2 != 0) {
      local_9 = 0;
      goto LAB_005462db;
    }
  }
  local_9 = 1;
LAB_005462db:
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00546306;
  puStack_20 = (undefined1 *)0x5462f6;
  FUN_0054b528(*(int **)(param_4 + -4));
  puStack_20 = (undefined1 *)0x5462fe;
  FUN_00403094(local_14);
  return;
}


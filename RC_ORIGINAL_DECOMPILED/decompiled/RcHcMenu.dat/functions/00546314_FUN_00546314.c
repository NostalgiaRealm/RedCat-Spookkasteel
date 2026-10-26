/*
 * FUN_00546314 at 00546314
 * undefined __register FUN_00546314(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00546314-00546450
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00546314(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  byte local_15;
  int *local_14;
  int local_10;
  undefined1 local_9;
  int *local_8;
  
  local_10 = 0;
  puStack_1c = (undefined1 *)0x546330;
  local_8 = param_1;
  local_14 = (int *)FUN_0049206c(*(int **)(*(int *)(param_4 + -4) + 0x1c));
  puStack_1c = (undefined1 *)0x54633e;
  FUN_0054b510(*(uint *)(param_4 + -4));
  puStack_20 = &LAB_00546451;
  uStack_24 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_24;
  puStack_1c = &stack0xfffffffc;
  local_15 = FUN_00547e4c(*(int **)(param_4 + -4));
  local_15 = local_15 ^ 1;
  FUN_0054a2f8(*(int **)(param_4 + -4),(int)local_14);
  while( true ) {
    iVar4 = FUN_00494814(local_14,local_8,*(uint *)(*(int *)(param_4 + -4) + 0x3c),8);
    if (((iVar4 < 1) || (*(int *)(*(int *)(param_4 + -4) + 0x80) <= local_10)) || (local_15 != 0))
    break;
    local_15 = FUN_00547e4c(*(int **)(param_4 + -4));
    local_15 = local_15 ^ 1;
    uVar3 = FUN_0054a2f8(*(int **)(param_4 + -4),(int)local_14);
    bVar2 = SCARRY4(local_10,1);
    local_10 = local_10 + 1;
    if (bVar2) {
      thunk_FUN_00402874(uVar3);
    }
  }
  cVar1 = FUN_00494528(local_14,local_8);
  if (cVar1 == '\0') {
    bVar2 = FUN_005461b8(local_14,local_8,extraout_ECX,param_4);
    if (!bVar2) {
      FUN_00547c54(*(int **)(param_4 + -4));
    }
  }
  if (*(int *)(*(int *)(param_4 + -4) + 0x80) <= local_10) {
    iVar4 = FUN_00494814(local_14,local_8,*(uint *)(*(int *)(param_4 + -4) + 0x3c),8);
    if (iVar4 != 0) {
      local_9 = 0;
      goto LAB_0054642d;
    }
  }
  local_9 = 1;
LAB_0054642d:
  *in_FS_OFFSET = uStack_24;
  puStack_1c = &LAB_00546458;
  puStack_20 = (undefined1 *)0x546448;
  FUN_0054b528(*(int **)(param_4 + -4));
  puStack_20 = (undefined1 *)0x546450;
  FUN_00403094(local_14);
  return;
}


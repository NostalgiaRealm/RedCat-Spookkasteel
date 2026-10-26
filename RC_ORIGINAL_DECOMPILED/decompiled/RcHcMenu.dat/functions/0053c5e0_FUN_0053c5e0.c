/*
 * FUN_0053c5e0 at 0053c5e0
 * undefined __register FUN_0053c5e0(int * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 0053c5e0-0053c6d5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0053c5e0(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 extraout_ECX;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_20;
  undefined1 *puStack_1c;
  undefined1 *puStack_18;
  byte local_12;
  byte local_11;
  int *local_10;
  undefined1 local_9;
  int *local_8;
  
  puStack_18 = (undefined1 *)0x53c5f7;
  local_8 = param_1;
  local_10 = (int *)FUN_0049206c(*(int **)(*(int *)(param_4 + -4) + 0x1c));
  puStack_18 = (undefined1 *)0x53c605;
  FUN_0054b510(*(uint *)(param_4 + -4));
  puStack_1c = &LAB_0053c6d6;
  uStack_20 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_20;
  local_12 = 0;
  local_11 = 0;
  puStack_18 = &stack0xfffffffc;
  FUN_0054a2f8(*(int **)(param_4 + -4),(int)local_10);
  while( true ) {
    iVar3 = FUN_00494814(local_10,local_8,*(uint *)(*(int *)(param_4 + -4) + 0x3c),8);
    if ((iVar3 < 1) || (local_12 != 0)) break;
    local_11 = FUN_00547e4c(*(int **)(param_4 + -4));
    local_12 = local_11 ^ 1;
    FUN_0054a2f8(*(int **)(param_4 + -4),(int)local_10);
  }
  if (local_11 != 0) {
    cVar1 = FUN_00494528(local_10,local_8);
    if (cVar1 == '\0') {
      bVar2 = FUN_0053c4dc(local_10,local_8,extraout_ECX,param_4);
      if (!bVar2) {
        FUN_00547c54(*(int **)(param_4 + -4));
      }
    }
  }
  local_9 = FUN_00494528(local_10,local_8);
  *in_FS_OFFSET = uStack_20;
  puStack_18 = &LAB_0053c6dd;
  puStack_1c = (undefined1 *)0x53c6cd;
  FUN_0054b528(*(int **)(param_4 + -4));
  puStack_1c = (undefined1 *)0x53c6d5;
  FUN_00403094(local_10);
  return;
}


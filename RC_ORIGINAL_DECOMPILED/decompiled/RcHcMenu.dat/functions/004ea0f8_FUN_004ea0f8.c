/*
 * FUN_004ea0f8 at 004ea0f8
 * undefined __register FUN_004ea0f8(int param_1, byte * param_2)
 * Address ranges: 004ea0f8-004ea19d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004ea0f8(int param_1,byte *param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_2c;
  undefined1 *puStack_28;
  undefined1 *puStack_24;
  char *local_1c;
  char *local_18;
  int local_14;
  int local_10;
  byte *local_c;
  int local_8;
  
  puStack_24 = &stack0xfffffffc;
  local_18 = (char *)0x0;
  local_1c = (char *)0x0;
  puStack_28 = &LAB_004ea19e;
  uStack_2c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_2c;
  local_c = param_2;
  local_8 = param_1;
  iVar2 = (**(code **)(**(int **)(param_1 + 0x7c) + 0x14))();
  uVar3 = iVar2 - 1;
  if (SBORROW4(iVar2,1)) {
    uVar3 = thunk_FUN_00402874(uVar3);
  }
  if (-1 < (int)uVar3) {
    local_14 = uVar3 + 1;
    local_10 = 0;
    do {
      (**(code **)(**(int **)(local_8 + 0x7c) + 0xc))(*(int **)(local_8 + 0x7c),local_10,&local_18);
      pcVar1 = local_18;
      FUN_00409690(local_c,(int *)&local_1c);
      iVar2 = FUN_0040431c(local_1c,pcVar1);
      if (iVar2 == 1) {
        (**(code **)(**(int **)(local_8 + 0x7c) + 0x44))(*(int **)(local_8 + 0x7c),local_10);
        break;
      }
      local_10 = local_10 + 1;
      local_14 = local_14 + -1;
    } while (local_14 != 0);
  }
  *in_FS_OFFSET = uStack_2c;
  puStack_24 = &LAB_004ea1a5;
  puStack_28 = (undefined1 *)0x4ea19d;
  FUN_00403dd4((int *)&local_1c,2);
  return;
}


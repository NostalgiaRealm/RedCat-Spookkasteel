/*
 * FUN_00501074 at 00501074
 * undefined __register FUN_00501074(int param_1)
 * Address ranges: 00501074-00501139;00501141-00501156
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00501074(int param_1)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_24;
  undefined1 *puStack_20;
  undefined1 *puStack_1c;
  undefined4 uStack_18;
  undefined1 *puStack_14;
  undefined1 *puStack_10;
  int local_c;
  int local_8;
  
  puStack_10 = &stack0xfffffffc;
  local_c = 0;
  puStack_14 = &LAB_00501157;
  uStack_18 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_18;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(char *)(param_1 + 8) == '\0') {
    *(undefined1 *)(param_1 + 8) = 1;
    puStack_1c = (undefined1 *)0x5010a8;
    FUN_00501180(param_1);
    puVar1 = puStack_10;
  }
  puStack_10 = puVar1;
  puStack_1c = (undefined1 *)0x5010b6;
  FUN_005017d8(*(int *)(local_8 + 4),&local_c);
  if ((local_c != 0) && (*(int *)(*(int *)(local_8 + 4) + 0x234) == local_8)) {
    puStack_1c = (undefined1 *)0x5010dc;
    uVar2 = FUN_005013c0(*(int *)(local_8 + 4));
    if ((char)uVar2 != '\0') {
      puStack_20 = &LAB_0050113a;
      uStack_24 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_24;
      puStack_1c = &stack0xfffffffc;
      FUN_005013f8(*(int **)(local_8 + 4),'\x04');
      FUN_00501610(*(int **)(local_8 + 4));
      FUN_005015e0(*(int **)(local_8 + 4));
      *in_FS_OFFSET = uStack_24;
      puStack_1c = (undefined1 *)0x501141;
      puStack_20 = (undefined1 *)0x50112b;
      FUN_005013f8(*(int **)(local_8 + 4),'\0');
      puStack_20 = (undefined1 *)0x501139;
      (**(code **)(**(int **)(local_8 + 4) + 0xe8))();
      return;
    }
  }
  *in_FS_OFFSET = uStack_18;
  puStack_10 = &LAB_0050115e;
  puStack_14 = (undefined1 *)0x501156;
  FUN_00403db0(&local_c);
  return;
}


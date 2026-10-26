/*
 * FUN_00501180 at 00501180
 * undefined __register FUN_00501180(int param_1)
 * Address ranges: 00501180-0050120d;00501215-00501217
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00501180(int param_1)

{
  byte *pbVar1;
  undefined4 uVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  if (*(int *)(*(int *)(param_1 + 4) + 0x234) == param_1) {
    pbVar1 = (byte *)(*(int *)(param_1 + 4) + 0x25c);
    *pbVar1 = *pbVar1 | 0x20;
    puStack_c = (undefined1 *)0x5011b0;
    local_8 = param_1;
    uVar2 = FUN_005013c0(*(int *)(param_1 + 4));
    if ((char)uVar2 != '\0') {
      puStack_10 = &LAB_0050120e;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      puStack_c = &stack0xfffffffc;
      FUN_005013f8(*(int **)(local_8 + 4),'\x04');
      FUN_00501610(*(int **)(local_8 + 4));
      FUN_005015e0(*(int **)(local_8 + 4));
      *in_FS_OFFSET = uStack_14;
      puStack_c = (undefined1 *)0x501215;
      puStack_10 = (undefined1 *)0x5011ff;
      FUN_005013f8(*(int **)(local_8 + 4),'\0');
      puStack_10 = (undefined1 *)0x50120d;
      (**(code **)(**(int **)(local_8 + 4) + 0xe8))();
      return;
    }
  }
  return;
}


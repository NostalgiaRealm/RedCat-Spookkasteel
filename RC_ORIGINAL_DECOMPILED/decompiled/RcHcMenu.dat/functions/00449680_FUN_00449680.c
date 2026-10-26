/*
 * FUN_00449680 at 00449680
 * undefined __register FUN_00449680(int param_1)
 * Address ranges: 00449680-0044976a;00449772-00449774
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00449680(int param_1)

{
  bool bVar1;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  if (*(char *)(param_1 + 0x200) == '\0') {
    puStack_c = (undefined1 *)0x44969f;
    local_8 = param_1;
    bVar1 = FUN_00438c84(param_1);
    if (bVar1) {
      puStack_10 = &LAB_0044976b;
      uStack_14 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_14;
      *(undefined1 *)(local_8 + 0x200) = 1;
      puStack_c = &stack0xfffffffc;
      bVar1 = FUN_00448c44(*(int *)(local_8 + 500));
      if (bVar1) {
        FUN_004492b0(*(int *)(local_8 + 0x1f0));
        FUN_004492b0(*(int *)(local_8 + 500));
      }
      else {
        bVar1 = FUN_00448c44(*(int *)(local_8 + 0x1f0));
        if (bVar1) {
          FUN_004492b0(*(int *)(local_8 + 500));
          FUN_004492b0(*(int *)(local_8 + 0x1f0));
        }
        else {
          FUN_004492b0(*(int *)(local_8 + 500));
          FUN_004492b0(*(int *)(local_8 + 0x1f0));
        }
      }
      *in_FS_OFFSET = uStack_14;
      *(undefined1 *)(local_8 + 0x200) = 0;
      return;
    }
  }
  return;
}


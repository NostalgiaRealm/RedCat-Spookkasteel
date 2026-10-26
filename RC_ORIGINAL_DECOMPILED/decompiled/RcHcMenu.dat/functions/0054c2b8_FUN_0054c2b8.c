/*
 * FUN_0054c2b8 at 0054c2b8
 * undefined __register FUN_0054c2b8(int param_1)
 * Address ranges: 0054c2b8-0054c325
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0054c2b8(int param_1)

{
  undefined1 *puVar1;
  char cVar2;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_14;
  undefined1 *puStack_10;
  undefined1 *puStack_c;
  int local_8;
  
  puStack_c = &stack0xfffffffc;
  puStack_10 = &LAB_0054c326;
  uStack_14 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_14;
  puVar1 = &stack0xfffffffc;
  local_8 = param_1;
  if (*(int *)(param_1 + 0x324) != 0) {
    cVar2 = (**(code **)(**(int **)(param_1 + 0x324) + 0x44))();
    puVar1 = puStack_c;
    if (cVar2 != '\0') {
      FUN_004cf660(*(int **)(local_8 + 0x324));
      puVar1 = puStack_c;
    }
  }
  puStack_c = puVar1;
  FUN_0040e4b4((undefined4 *)(local_8 + 0x324));
  FUN_0040e4b4((undefined4 *)(local_8 + 800));
  FUN_0054b7d4();
  *in_FS_OFFSET = uStack_14;
  return;
}


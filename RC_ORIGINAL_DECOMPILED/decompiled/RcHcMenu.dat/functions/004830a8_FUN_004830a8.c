/*
 * FUN_004830a8 at 004830a8
 * undefined __register FUN_004830a8(int param_1)
 * Address ranges: 004830a8-004830e7
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004830a8(int param_1)

{
  short sVar1;
  undefined4 local_30;
  undefined1 *puStack_2c;
  undefined1 local_24 [32];
  
  if (*(char *)(param_1 + 0x66) != '\0') {
    puStack_2c = local_24;
    local_30 = 0;
    sVar1 = thunk_FUN_0047940c(*(undefined4 *)(param_1 + 0x70));
    if (sVar1 == 0) {
      sVar1 = thunk_FUN_00479577(&local_30);
      if (sVar1 == 0) {
        *(undefined4 **)(param_1 + 0x74) = &local_30;
        *(undefined1 *)(param_1 + 100) = 1;
      }
    }
  }
  return;
}


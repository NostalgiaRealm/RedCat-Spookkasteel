/*
 * FUN_004695c4 at 004695c4
 * undefined __register FUN_004695c4(int param_1, byte param_2)
 * Address ranges: 004695c4-004695f9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004695c4(int param_1,byte param_2)

{
  uint uVar1;
  
  if (*(int *)(param_1 + 0x28) != 0) {
    uVar1 = FUN_004714b4(*(int *)(param_1 + 0x28));
    if ((char)uVar1 != '\0') {
      (**(code **)(**(int **)(param_1 + 0x28) + 0xac))
                (*(int **)(param_1 + 0x28),(&DAT_00570764)[param_2],0);
    }
  }
  return;
}


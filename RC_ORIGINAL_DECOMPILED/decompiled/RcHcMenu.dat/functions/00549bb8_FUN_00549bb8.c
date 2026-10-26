/*
 * FUN_00549bb8 at 00549bb8
 * undefined4 __register FUN_00549bb8(int param_1)
 * Address ranges: 00549bb8-00549bf9
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00549bb8(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    piVar1 = FUN_004b5b0c((int *)&DAT_004b28a0,'\x01',5,*(int *)(param_1 + 0x1c),'\x01');
    *(int **)(param_1 + 0x28) = piVar1;
  }
  return *(undefined4 *)(param_1 + 0x28);
}


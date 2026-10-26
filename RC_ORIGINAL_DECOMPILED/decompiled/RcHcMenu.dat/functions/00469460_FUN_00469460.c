/*
 * FUN_00469460 at 00469460
 * undefined4 __register FUN_00469460(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00469460-0046947c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00469460(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x6c) == 0) {
    piVar1 = FUN_00467f44((int *)&DAT_00462a18,'\x01',param_3);
    *(int **)(param_1 + 0x6c) = piVar1;
  }
  return *(undefined4 *)(param_1 + 0x6c);
}


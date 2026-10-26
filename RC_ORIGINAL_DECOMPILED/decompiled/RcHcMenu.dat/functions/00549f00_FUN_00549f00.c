/*
 * FUN_00549f00 at 00549f00
 * undefined4 __register FUN_00549f00(int param_1)
 * Address ranges: 00549f00-00549f36
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00549f00(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 0x68) == 0) {
    piVar1 = FUN_0045e14c((int *)&PTR_FUN_0045df38,'\x01',param_1);
    *(int **)(param_1 + 0x68) = piVar1;
  }
  return *(undefined4 *)(param_1 + 0x68);
}


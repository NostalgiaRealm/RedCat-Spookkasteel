/*
 * FUN_00467870 at 00467870
 * undefined4 __register FUN_00467870(int param_1)
 * Address ranges: 00467870-00467892
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00467870(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_00467918(param_1);
  if (((char)uVar1 != '\0') && (*(int *)(param_1 + 0x1c) == 0)) {
    uVar1 = FUN_0041300c(*(int *)(param_1 + 0x10));
    return uVar1;
  }
  return *(undefined4 *)(param_1 + 0x1c);
}


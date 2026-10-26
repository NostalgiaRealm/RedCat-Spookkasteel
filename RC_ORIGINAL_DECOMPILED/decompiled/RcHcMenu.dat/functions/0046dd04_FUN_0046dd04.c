/*
 * FUN_0046dd04 at 0046dd04
 * undefined4 __register FUN_0046dd04(int param_1)
 * Address ranges: 0046dd04-0046dd33
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0046dd04(int param_1)

{
  undefined4 uVar1;
  
  if ((*(int *)(param_1 + 0xec) == 0) && ((*(byte *)(*(int *)(param_1 + 0x28) + 0x20) & 2) == 0)) {
    uVar1 = (**(code **)(**(int **)(param_1 + 0x28) + 0xa4))(*(int **)(param_1 + 0x28),param_1);
    *(undefined4 *)(param_1 + 0xec) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0xec);
}


/*
 * FUN_0047052c at 0047052c
 * int * __register FUN_0047052c(int param_1)
 * Address ranges: 0047052c-0047053d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_0047052c(int param_1)

{
  int *piVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return (int *)0x0;
  }
  piVar1 = FUN_0046f0ec(*(int *)(param_1 + 4));
  return piVar1;
}


/*
 * FUN_005168b0 at 005168b0
 * int __register FUN_005168b0(int param_1, char param_2)
 * Address ranges: 005168b0-005168c1
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005168b0(int param_1,char param_2)

{
  if ((*(int *)(param_1 + 4) != 0) && (param_2 != '\0')) {
    return *(int *)(param_1 + 4);
  }
  return *(int *)(param_1 + 8);
}


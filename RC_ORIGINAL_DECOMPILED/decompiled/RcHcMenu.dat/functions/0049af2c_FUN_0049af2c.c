/*
 * FUN_0049af2c at 0049af2c
 * uint __register FUN_0049af2c(int param_1)
 * Address ranges: 0049af2c-0049af6e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0049af2c(int param_1)

{
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    local_c = FUN_0049af8c(param_1,0,*(int *)(param_1 + 0x40) + -1);
  }
  else {
    local_c = FUN_0041b688(*(uint *)(param_1 + 0x84));
  }
  return local_c;
}


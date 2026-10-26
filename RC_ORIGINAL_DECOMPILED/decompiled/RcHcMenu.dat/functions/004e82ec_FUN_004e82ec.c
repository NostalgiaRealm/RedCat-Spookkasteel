/*
 * FUN_004e82ec at 004e82ec
 * uint __register FUN_004e82ec(int param_1)
 * Address ranges: 004e82ec-004e831a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_004e82ec(int param_1)

{
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0x54) == '\0') {
    local_c = *(uint *)(param_1 + 0x48);
  }
  else {
    local_c = (uint)(byte)*PTR_DAT_00572214;
  }
  return local_c;
}


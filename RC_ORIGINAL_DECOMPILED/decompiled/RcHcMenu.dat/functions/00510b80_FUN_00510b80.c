/*
 * FUN_00510b80 at 00510b80
 * uint __register FUN_00510b80(int param_1)
 * Address ranges: 00510b80-00510bb4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00510b80(int param_1)

{
  undefined4 local_c;
  
  if (*(char *)(param_1 + 0x288) == '\0') {
    local_c = *(uint *)(param_1 + 0x27c);
  }
  else {
    local_c = (uint)(byte)*PTR_DAT_00572214;
  }
  return local_c;
}


/*
 * FUN_1002b103 at 1002b103
 * undefined FUN_1002b103(void)
 * Address ranges: 1002b103-1002b12a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_1002b103(int param_1)

{
  undefined4 *puVar1;
  
  if (param_1 == 1) {
    puVar1 = (undefined4 *)FUN_1002b3dc();
    *puVar1 = 0x21;
  }
  else if ((1 < param_1) && (param_1 < 4)) {
    puVar1 = (undefined4 *)FUN_1002b3dc();
    *puVar1 = 0x22;
    return;
  }
  return;
}


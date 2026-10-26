/*
 * FUN_00405d70 at 00405d70
 * undefined2 __register FUN_00405d70(int param_1)
 * Address ranges: 00405d70-00405d88
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_00405d70(int param_1)

{
  undefined2 *puVar1;
  
  if ((*(byte *)(param_1 + 1) & 0x20) != 0) {
    puVar1 = (undefined2 *)FUN_00405d4c(param_1);
    return *puVar1;
  }
  return 0;
}


/*
 * FUN_00498b58 at 00498b58
 * undefined __register FUN_00498b58(int param_1)
 * Address ranges: 00498b58-00498ba2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00498b58(int param_1)

{
  undefined1 *puVar1;
  int local_c;
  
  local_c = 0;
  do {
    puVar1 = (undefined1 *)(param_1 + local_c * 4);
    puVar1[2] = (undefined1)local_c;
    puVar1[1] = (undefined1)local_c;
    *puVar1 = (undefined1)local_c;
    puVar1[3] = 0;
    local_c = local_c + 1;
  } while (local_c != 0x100);
  return;
}


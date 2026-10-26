/*
 * FUN_00498acc at 00498acc
 * int __register FUN_00498acc(uint param_1)
 * Address ranges: 00498acc-00498b16
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00498acc(uint param_1)

{
  undefined4 local_10;
  undefined4 local_c;
  
  local_10 = 0;
  while ((local_10 < 0x1f && ((1 << ((byte)local_10 & 0x1f) & param_1) == 0))) {
    local_10 = local_10 + 1;
  }
  local_c = 0;
  while ((1 << ((byte)local_10 & 0x1f) & param_1) != 0) {
    local_10 = local_10 + 1;
    local_c = local_c + 1;
  }
  return local_c;
}


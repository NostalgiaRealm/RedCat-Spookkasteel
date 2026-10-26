/*
 * FUN_00498bf8 at 00498bf8
 * undefined __register FUN_00498bf8(int param_1, int param_2)
 * Address ranges: 00498bf8-00498c2f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00498bf8(int param_1,int param_2)

{
  uint uVar1;
  undefined4 local_10;
  
  local_10 = 0;
  do {
    uVar1 = FUN_00498bd0(*(undefined4 *)(param_1 + local_10 * 4));
    *(uint *)(param_2 + local_10 * 4) = uVar1;
    local_10 = local_10 + 1;
  } while (local_10 != 0x100);
  return;
}


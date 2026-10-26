/*
 * FUN_00494278 at 00494278
 * int __register FUN_00494278(int param_1)
 * Address ranges: 00494278-004942b0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_00494278(int param_1)

{
  undefined **ppuVar1;
  int local_10;
  
  local_10 = param_1;
  while( true ) {
    ppuVar1 = (undefined **)FUN_0040301c(local_10);
    if (ppuVar1 == &PTR_FUN_0048e834) break;
    local_10 = FUN_0040301c(local_10);
  }
  return local_10;
}


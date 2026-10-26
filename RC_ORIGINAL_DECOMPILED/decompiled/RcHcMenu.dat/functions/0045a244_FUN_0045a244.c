/*
 * FUN_0045a244 at 0045a244
 * bool __register FUN_0045a244(int param_1)
 * Address ranges: 0045a244-0045a263
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_0045a244(int param_1)

{
  undefined1 local_8;
  
  local_8 = (char)*(undefined4 *)(param_1 + 4);
  return local_8 == '\a';
}


/*
 * FUN_0048b588 at 0048b588
 * undefined1 __register FUN_0048b588(undefined4 param_1, uint param_2)
 * Address ranges: 0048b588-0048b5be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined1 FUN_0048b588(undefined4 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined1 local_d;
  
  if ((param_2 - 2 < 5) || (param_2 - 2 == 0xf)) {
    local_d = 1;
  }
  else {
    uVar1 = FUN_004958c8(param_1,param_2);
    local_d = (undefined1)uVar1;
  }
  return local_d;
}


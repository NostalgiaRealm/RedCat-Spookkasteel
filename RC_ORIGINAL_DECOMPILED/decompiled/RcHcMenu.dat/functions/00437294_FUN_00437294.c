/*
 * FUN_00437294 at 00437294
 * undefined4 __register FUN_00437294(int param_1, int param_2)
 * Address ranges: 00437294-004372b5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00437294(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if (*(undefined4 **)(param_1 + 0x140) == (undefined4 *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00412384(*(undefined4 **)(param_1 + 0x140),param_2);
  }
  return uVar1;
}


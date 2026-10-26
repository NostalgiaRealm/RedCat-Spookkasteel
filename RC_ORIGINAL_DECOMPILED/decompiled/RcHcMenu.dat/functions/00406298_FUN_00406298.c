/*
 * FUN_00406298 at 00406298
 * undefined4 __register FUN_00406298(int param_1)
 * Address ranges: 00406298-0040629f
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00406298(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (param_1 != 0) {
    uVar1 = *(undefined4 *)(param_1 + -4);
  }
  return uVar1;
}


/*
 * FUN_004b3178 at 004b3178
 * undefined4 __register FUN_004b3178(int param_1)
 * Address ranges: 004b3178-004b31a3
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004b3178(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_004b30c0((int *)&PTR_FUN_004b2824,'\x01',*(undefined4 **)(param_1 + 4),
                       (undefined4 *)(param_1 + 8));
  return uVar1;
}


/*
 * FUN_00471334 at 00471334
 * undefined4 __register FUN_00471334(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00471334-00471350
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00471334(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x7c) == 0) {
    uVar1 = FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',param_3);
    *(undefined4 *)(param_1 + 0x7c) = uVar1;
  }
  return *(undefined4 *)(param_1 + 0x7c);
}


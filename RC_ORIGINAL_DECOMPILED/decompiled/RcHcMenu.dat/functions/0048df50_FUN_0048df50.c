/*
 * FUN_0048df50 at 0048df50
 * undefined2 __register FUN_0048df50(byte * param_1)
 * Address ranges: 0048df50-0048dfa2
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined2 FUN_0048df50(byte *param_1)

{
  uint uVar1;
  
  if (*param_1 == 0) {
    FUN_00403d94("PropRefTop: PropRef is empty");
  }
  uVar1 = *param_1 - 1;
  if (SBORROW4((uint)*param_1,1)) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  if (9 < uVar1) {
    uVar1 = thunk_FUN_00402874(uVar1);
  }
  return *(undefined2 *)(param_1 + uVar1 * 2 + 2);
}


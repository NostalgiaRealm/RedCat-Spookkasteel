/*
 * FUN_00402800 at 00402800
 * undefined __register FUN_00402800(int param_1)
 * Address ranges: 00402800-00402815
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00402800(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_FUN_0056f028)();
    if (iVar1 != 0) {
      FUN_00402874(CONCAT31((int3)((uint)iVar1 >> 8),2));
      return;
    }
  }
  return;
}


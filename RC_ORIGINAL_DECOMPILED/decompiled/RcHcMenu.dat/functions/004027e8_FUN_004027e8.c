/*
 * FUN_004027e8 at 004027e8
 * undefined __register FUN_004027e8(int param_1)
 * Address ranges: 004027e8-004027fd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004027e8(int param_1)

{
  int iVar1;
  
  if (param_1 != 0) {
    iVar1 = (*(code *)PTR_FUN_0056f024)();
    if (iVar1 == 0) {
      FUN_00402874(1);
      return;
    }
  }
  return;
}


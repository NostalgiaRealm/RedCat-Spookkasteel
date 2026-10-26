/*
 * FUN_00543a24 at 00543a24
 * undefined __register FUN_00543a24(int param_1)
 * Address ranges: 00543a24-00543a4e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00543a24(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  
  FUN_005428e0();
  iVar1 = FUN_00543878(param_1);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_00543878(param_1);
    FUN_004f12dc(puVar2);
  }
  return;
}


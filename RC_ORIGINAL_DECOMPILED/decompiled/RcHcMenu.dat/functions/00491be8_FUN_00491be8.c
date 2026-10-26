/*
 * FUN_00491be8 at 00491be8
 * undefined4 __register FUN_00491be8(undefined4 * param_1)
 * Address ranges: 00491be8-00491c21
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00491be8(undefined4 *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  
  bVar1 = FUN_0049191c((int)param_1);
  if (!bVar1) {
    FUN_00403d94(" Internal inconsistency");
  }
  uVar2 = (**(code **)*param_1)();
  return uVar2;
}


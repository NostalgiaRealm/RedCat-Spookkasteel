/*
 * FUN_004a4a44 at 004a4a44
 * undefined __register FUN_004a4a44(int param_1)
 * Address ranges: 004a4a44-004a4aad
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004a4a44(int param_1)

{
  undefined4 uVar1;
  undefined4 local_1d4 [115];
  int local_8;
  
  local_8 = param_1;
  if (param_1 == 0) {
    FUN_00403d94(" Self = nil: ClearFile");
  }
  uVar1 = FUN_00409dd0(*(undefined **)(local_8 + 4));
  if ((char)uVar1 != '\0') {
    FUN_00406dc2(local_1d4,*(char **)(local_8 + 4));
    FUN_0040704a((undefined *)local_1d4);
    FUN_004028b8();
    FUN_00406e64((undefined *)local_1d4);
    FUN_004028b8();
  }
  return;
}


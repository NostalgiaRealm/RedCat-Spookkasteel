/*
 * FUN_00491e60 at 00491e60
 * bool __register FUN_00491e60(int param_1, byte * param_2)
 * Address ranges: 00491e60-00491eab
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_00491e60(int param_1,byte *param_2)

{
  int iVar1;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  
  FUN_0048e078((undefined4 *)param_2);
  iVar1 = FUN_00491e30(param_1,extraout_EDX,extraout_ECX);
  iVar1 = FUN_0048ec24(iVar1);
  if (0 < iVar1) {
    FUN_0048e0c0((int)param_2,*(undefined4 *)(param_1 + 0x34));
    FUN_0048de00(param_2,0);
  }
  return 0 < iVar1;
}


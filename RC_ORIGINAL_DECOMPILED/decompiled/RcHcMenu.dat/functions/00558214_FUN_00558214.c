/*
 * FUN_00558214 at 00558214
 * undefined __register FUN_00558214(int param_1, undefined4 param_2, undefined4 param_3)
 * Address ranges: 00558214-0055825a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00558214(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  
  FUN_0049cb24(*(int *)(param_1 + 0x194),'\0',param_3);
  FUN_0049cb50(*(int *)(param_1 + 0x198),*(int *)(param_1 + 400),extraout_ECX);
  FUN_0049cb24(*(int *)(param_1 + 0x198),'\x01',extraout_ECX_00);
  return;
}


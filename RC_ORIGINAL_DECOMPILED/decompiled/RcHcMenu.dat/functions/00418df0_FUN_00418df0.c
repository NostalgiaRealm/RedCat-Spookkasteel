/*
 * FUN_00418df0 at 00418df0
 * undefined __register FUN_00418df0(int param_1, undefined * param_2, uint param_3)
 * Address ranges: 00418df0-00418e35
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418df0(int param_1,undefined *param_2,uint param_3)

{
  undefined4 *puVar1;
  uint local_c;
  
  local_c = param_3;
  local_c = FUN_00404030((int)param_2);
  if (0xff < (int)local_c) {
    local_c = 0xff;
  }
  FUN_00417624(param_1,&local_c,1);
  puVar1 = (undefined4 *)FUN_004041f4(param_2);
  FUN_00417624(param_1,puVar1,local_c);
  return;
}


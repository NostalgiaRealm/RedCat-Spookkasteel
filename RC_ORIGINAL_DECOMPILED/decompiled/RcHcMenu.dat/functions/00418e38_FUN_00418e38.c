/*
 * FUN_00418e38 at 00418e38
 * undefined __register FUN_00418e38(int param_1, undefined4 * param_2, uint param_3)
 * Address ranges: 00418e38-00418e91
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00418e38(int param_1,undefined4 *param_2,uint param_3)

{
  undefined4 extraout_ECX;
  uint local_c;
  
  local_c = param_3;
  local_c = FUN_00404030((int)param_2);
  if ((int)local_c < 0x100) {
    FUN_00418ed0(param_1,6,extraout_ECX);
    FUN_00417624(param_1,&local_c,1);
  }
  else {
    FUN_00418ed0(param_1,0xc,extraout_ECX);
    FUN_00417624(param_1,&local_c,4);
  }
  FUN_00417624(param_1,param_2,local_c);
  return;
}


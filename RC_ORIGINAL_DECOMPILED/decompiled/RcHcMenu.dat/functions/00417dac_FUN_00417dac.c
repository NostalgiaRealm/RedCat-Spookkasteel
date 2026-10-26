/*
 * FUN_00417dac at 00417dac
 * undefined __register FUN_00417dac(int param_1, int param_2, undefined4 param_3)
 * Address ranges: 00417dac-00417e1d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00417dac(int param_1,int param_2,undefined4 param_3)

{
  int local_8;
  
  local_8 = param_2;
  if ((-0x81 < param_2) && (param_2 < 0x80)) {
    FUN_00418ed0(param_1,2,param_3);
    FUN_00417624(param_1,&local_8,1);
    return;
  }
  if ((param_2 < -0x8000) || (0x7fff < param_2)) {
    FUN_00418ed0(param_1,4,param_3);
    FUN_00417624(param_1,&local_8,4);
  }
  else {
    FUN_00418ed0(param_1,3,param_3);
    FUN_00417624(param_1,&local_8,2);
  }
  return;
}


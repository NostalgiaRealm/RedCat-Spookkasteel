/*
 * FUN_00417e20 at 00417e20
 * undefined __register FUN_00417e20(int param_1, undefined4 param_2, undefined4 param_3, uint param_4, int param_5)
 * Address ranges: 00417e20-00417e76
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00417e20(int param_1,undefined4 param_2,undefined4 param_3,uint param_4,int param_5)

{
  if (param_5 == -1) {
    if (param_4 < 0x80000000) goto LAB_00417e5a;
  }
  else if (param_5 < -1) goto LAB_00417e5a;
  if (param_5 == 0) {
    if (param_4 < 0x80000000) {
LAB_00417e4c:
      FUN_00417dac(param_1,param_4,param_3);
      return;
    }
  }
  else if (param_5 < 1) goto LAB_00417e4c;
LAB_00417e5a:
  FUN_00418ed0(param_1,0x13,param_3);
  FUN_00417624(param_1,&param_4,8);
  return;
}


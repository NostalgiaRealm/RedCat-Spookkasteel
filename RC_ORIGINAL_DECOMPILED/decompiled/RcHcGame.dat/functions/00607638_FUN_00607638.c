/*
 * FUN_00607638 at 00607638
 * undefined FUN_00607638(void)
 * Address ranges: 00607638-00607675
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_00607638(char *param_1,char *param_2,char *param_3,char *param_4)

{
  uint uVar1;
  
  for (; param_1 != param_2; param_1 = param_1 + 1) {
    if (param_3 == param_4) goto LAB_00607669;
    if (*param_1 < *param_3) goto LAB_0060765a;
    if (*param_3 < *param_1) {
      return 1;
    }
    param_3 = param_3 + 1;
  }
  if (param_3 == param_4) {
LAB_00607669:
    uVar1 = (uint)(param_1 != param_2);
  }
  else {
LAB_0060765a:
    uVar1 = 0xffffffff;
  }
  return uVar1;
}


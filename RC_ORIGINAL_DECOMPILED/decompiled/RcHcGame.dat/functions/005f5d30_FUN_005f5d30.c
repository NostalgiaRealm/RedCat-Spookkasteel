/*
 * FUN_005f5d30 at 005f5d30
 * undefined FUN_005f5d30(void)
 * Address ranges: 005f5d30-005f5d85
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

short * __thiscall FUN_005f5d30(short *param_1,int *param_2)

{
  char cVar1;
  
  if (param_2 != (int *)0x0) {
    *param_1 = 0;
    cVar1 = (**(code **)(*param_2 + 0x18))();
    while (cVar1 == '\0') {
      param_1[*param_1 + 0xc] = (short)param_2[9];
      *(int *)(param_1 + *param_1 * 2 + 2) = param_2[1];
      *param_1 = *param_1 + 1;
      param_2 = (int *)param_2[2];
      cVar1 = (**(code **)(*param_2 + 0x18))();
    }
    return param_1;
  }
  *param_1 = 0xff;
  return param_1;
}


/*
 * FUN_1000b1d0 at 1000b1d0
 * undefined FUN_1000b1d0(void)
 * Address ranges: 1000b1d0-1000b27b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000b1d0(undefined4 param_1,undefined4 param_2,float *param_3)

{
  char *pcVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  undefined4 local_10;
  undefined4 uStack_c;
  
  *param_3 = 0.0;
  param_3[1] = 0.0;
  param_3[2] = 0.0;
  pcVar1 = (char *)FUN_1000b0e0(param_1,param_2);
  if ((pcVar1 != (char *)0x0) && (*pcVar1 != '\0')) {
    local_10 = 0;
    uStack_c = 0;
    local_18 = 0;
    uStack_14 = 0;
    local_20 = 0;
    uStack_1c = 0;
    FUN_1002836b(pcVar1,s__lf__lf__lf_10038518,&local_20,&local_18,&local_10);
    *param_3 = (float)(double)CONCAT44(uStack_1c,local_20);
    param_3[1] = (float)(double)CONCAT44(uStack_14,local_18);
    param_3[2] = (float)(double)CONCAT44(uStack_c,local_10);
    return 1;
  }
  return 0;
}


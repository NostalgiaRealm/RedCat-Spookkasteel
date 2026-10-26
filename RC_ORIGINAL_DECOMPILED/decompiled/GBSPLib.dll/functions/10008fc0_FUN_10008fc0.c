/*
 * FUN_10008fc0 at 10008fc0
 * undefined FUN_10008fc0(void)
 * Address ranges: 10008fc0-10009121
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_10008fc0(float *param_1,float *param_2,float *param_3,int param_4,int *param_5)

{
  int iVar1;
  int iVar2;
  float local_14;
  float local_10;
  float local_c;
  
  if (DAT_10037d04 == '\0') {
    iVar2 = FUN_1002770a(&DAT_10037b04,&DAT_10037fb4);
  }
  else {
    DAT_10037d04 = '\0';
    iVar2 = FUN_1002770a(&DAT_10037b04,&DAT_10037fbc);
    FUN_1002769d(iVar2,&DAT_10037fb8,0,0x3ff00000);
  }
  if (iVar2 != 0) {
    FUN_1002769d(iVar2,s__f__f__f_10037fa8,(double)*param_1,(double)param_1[1],(double)param_1[2]);
    local_14 = *param_3;
    local_10 = param_3[1];
    local_c = param_3[2];
    FUN_10008130(&local_14);
    FUN_1002769d(iVar2,s__f__f__f_10037fa8,(double)local_14,(double)local_10,(double)local_c);
    FUN_1002769d(iVar2,s__f__f__f_10037fa8,(double)*param_2,(double)param_2[1],(double)param_2[2]);
    FUN_1002769d(iVar2,&DAT_10037fa4,param_4);
    if (0 < param_4) {
      do {
        iVar1 = *param_5;
        FUN_1002769d(iVar2,s__f__f__f_10037fa8,(double)*(float *)(iVar1 + 8),
                     (double)*(float *)(iVar1 + 0xc),(double)*(float *)(iVar1 + 0x10));
        param_5 = param_5 + 1;
        param_4 = param_4 + -1;
      } while (param_4 != 0);
    }
    FUN_1002769d(iVar2,&DAT_10037ed4);
    FUN_10027620();
  }
  return;
}


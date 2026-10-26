/*
 * FUN_00437dac at 00437dac
 * undefined __register FUN_00437dac(int * param_1, int param_2)
 * Address ranges: 00437dac-00437de0
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00437dac(int *param_1,int param_2)

{
  undefined2 extraout_var;
  undefined2 extraout_var_00;
  undefined2 uVar1;
  
  FUN_00434028(param_1,param_2);
  uVar1 = extraout_var;
  if ((PTR_DAT_0057261c[9] != '\0') && (*(int *)(param_2 + 4) == 0)) {
    FUN_00435de4((int)param_1);
    uVar1 = extraout_var_00;
  }
  FUN_004357fc((int)param_1,CONCAT22(uVar1,0xb03d));
  return;
}


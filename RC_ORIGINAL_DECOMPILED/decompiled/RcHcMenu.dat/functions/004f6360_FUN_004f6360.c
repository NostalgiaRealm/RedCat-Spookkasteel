/*
 * FUN_004f6360 at 004f6360
 * undefined __register FUN_004f6360(int * param_1, int * param_2)
 * Address ranges: 004f6360-004f63ae
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6360(int *param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_004f60bc((int)param_1,(int)param_2,'\x01',(*(byte *)(param_1 + 8) & 0x10) == 0
                              );
  if (param_2 == piVar1) {
    piVar1 = (int *)0x0;
  }
  FUN_004f5be8((int)param_2,'\0');
  param_2[0x7d] = 0;
  FUN_0041251c((int *)param_1[0x90],(int)param_2);
  FUN_004f6404(param_1,piVar1);
  return;
}


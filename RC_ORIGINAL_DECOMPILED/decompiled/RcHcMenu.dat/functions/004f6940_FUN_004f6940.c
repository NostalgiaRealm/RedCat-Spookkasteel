/*
 * FUN_004f6940 at 004f6940
 * undefined __register FUN_004f6940(int * param_1, int param_2)
 * Address ranges: 004f6940-004f6976
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f6940(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  
  if (-1 < param_2) {
    iVar1 = FUN_004f6268((int)param_1);
    if (param_2 < iVar1) {
      piVar2 = (int *)FUN_004f6250((int)param_1,param_2);
      FUN_004f6404(param_1,piVar2);
      return;
    }
  }
  FUN_004f6404(param_1,(int *)0x0);
  return;
}


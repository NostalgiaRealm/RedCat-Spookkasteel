/*
 * FUN_004f68c0 at 004f68c0
 * undefined __register FUN_004f68c0(int * param_1, int param_2)
 * Address ranges: 004f68c0-004f6900
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004f68c0(int *param_1,int param_2)

{
  int *piVar1;
  int aiStack_10 [2];
  
  FUN_00433b14(param_1,param_2);
  FUN_00408570(*(undefined4 *)(param_2 + 8),aiStack_10);
  piVar1 = (int *)FUN_004f6830(param_1,aiStack_10);
  if ((piVar1 != (int *)0x0) && (*(char *)((int)param_1 + 0x20d) == '\0')) {
    FUN_00432da0(piVar1,'\0',-1);
  }
  return;
}


/*
 * FUN_004972bc at 004972bc
 * undefined __register FUN_004972bc(int * param_1, uint param_2)
 * Address ranges: 004972bc-00497307
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004972bc(int *param_1,uint param_2)

{
  bool bVar1;
  undefined3 extraout_var;
  uint uVar3;
  uint extraout_EDX;
  int *piVar2;
  
  piVar2 = param_1;
  if ((char)param_1[6] != '\0') {
    bVar1 = FUN_00497268(param_1,param_2);
    piVar2 = (int *)CONCAT31(extraout_var,bVar1);
    if (bVar1) {
      return;
    }
  }
  uVar3 = param_2 + 0x8000;
  if (0xffff < uVar3) {
    thunk_FUN_00402874((uint)piVar2);
    uVar3 = extraout_EDX;
  }
  FUN_0045db60(param_1,(short)uVar3 + -0x8000);
  return;
}


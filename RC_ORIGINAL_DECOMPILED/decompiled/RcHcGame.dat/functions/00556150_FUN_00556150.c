/*
 * FUN_00556150 at 00556150
 * undefined FUN_00556150(void)
 * Address ranges: 00556150-0055621b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __thiscall FUN_00556150(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  float10 fVar3;
  undefined4 uStack_4;
  
  uStack_4 = param_1;
  if (*(float *)(param_1 + 0x114) == 0.0) {
    fVar3 = (float10)FUN_005ad390(param_1 + 200,(int)&uStack_4 + 3);
    *(float *)(param_1 + 0x114) = (float)fVar3;
  }
  iVar2 = __ftol();
  piVar1 = param_2;
  *param_2 = iVar2;
  param_2[1] = (*(int *)(param_1 + 0xac) - iVar2) + -1;
  if (*(float *)(param_1 + 0x114) == 0.0) {
    fVar3 = (float10)FUN_005ad390(param_1 + 200,&param_2);
    *(float *)(param_1 + 0x114) = (float)fVar3;
  }
  iVar2 = __ftol();
  piVar1[2] = iVar2;
  piVar1[3] = (*(int *)(param_1 + 0xb0) - iVar2) + -1;
  return;
}


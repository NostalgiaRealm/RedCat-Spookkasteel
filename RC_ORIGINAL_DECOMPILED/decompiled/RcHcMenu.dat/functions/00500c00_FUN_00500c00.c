/*
 * FUN_00500c00 at 00500c00
 * undefined __register FUN_00500c00(int * param_1, int * param_2)
 * Address ranges: 00500c00-00500c59
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00500c00(int *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  
  FUN_004fe6d0(param_1,param_2);
  param_2[1] = param_2[1] | 4;
  if (param_1[0x88] != 0) {
    if ((*(char *)((int)param_1 + 0x1f6) == '\0') &&
       (cVar1 = (**(code **)(*param_1 + 0x4c))(), cVar1 != '\0')) {
      uVar2 = 1;
    }
    else {
      uVar2 = 0;
    }
    (**(code **)(*(int *)param_1[0x88] + 0x5c))((int *)param_1[0x88],uVar2);
    return;
  }
  return;
}


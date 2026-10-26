/*
 * FUN_00431178 at 00431178
 * int * __register FUN_00431178(POINT * param_1, undefined4 param_2)
 * Address ranges: 00431178-004311be
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_00431178(POINT *param_1,undefined4 param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int local_18 [2];
  
  piVar1 = FUN_00431144(param_1);
  piVar3 = (int *)0x0;
  if (piVar1 != (int *)0x0) {
    cVar4 = '\0';
    FUN_004322b8(piVar1,&param_1->x,local_18);
    piVar2 = (int *)FUN_004360a4((int)piVar1,local_18,param_2,cVar4);
    piVar3 = piVar1;
    if (piVar2 != (int *)0x0) {
      piVar3 = piVar2;
    }
  }
  return piVar3;
}


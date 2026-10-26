/*
 * FUN_005e95c0 at 005e95c0
 * undefined FUN_005e95c0(void)
 * Address ranges: 005e95c0-005e95f8
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int * FUN_005e95c0(undefined4 param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = FUN_005ec000(param_1);
  if (iVar2 != 0) {
    piVar3 = (int *)FUN_005ed300(param_2);
    if (piVar3 != (int *)0x0) {
      cVar1 = (**(code **)(*piVar3 + 0x44))();
      if (cVar1 != '\0') {
        return piVar3;
      }
    }
  }
  return (int *)0x0;
}


/*
 * FUN_005cc780 at 005cc780
 * undefined FUN_005cc780(void)
 * Address ranges: 005cc780-005cc7c5
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005cc780(undefined4 *param_1,int param_2)

{
  int *piVar1;
  undefined4 *puVar2;
  
  if (param_2 == 0) {
    param_1[1] = param_1;
    return param_1[3];
  }
  puVar2 = param_1;
  if (((int *)param_1[1])[3] == param_2) {
    puVar2 = *(undefined4 **)param_1[1];
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
  }
  else {
    do {
      if (puVar2 == (undefined4 *)0x0) {
        return 0;
      }
      piVar1 = puVar2 + 3;
      puVar2 = (undefined4 *)*puVar2;
    } while (*piVar1 != param_2);
  }
  param_1[1] = puVar2;
  return *(undefined4 *)((int)puVar2 + 0xc);
}


/*
 * FUN_10012480 at 10012480
 * undefined FUN_10012480(void)
 * Address ranges: 10012480-100124e6
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

bool FUN_10012480(int *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  if (*param_1 == -1) {
    return true;
  }
  puVar1 = (undefined4 *)param_1[3];
  while (puVar2 = puVar1, puVar2 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)*puVar2;
    if (((puVar2[0x11] == 0) && (puVar2[0xf] == 0)) && (puVar2[0x10] == 0)) {
      FUN_100122f0(param_1,puVar2);
    }
  }
  iVar3 = FUN_10012480(param_1[4]);
  if (iVar3 != 0) {
    iVar3 = FUN_10012480(param_1[5]);
    return iVar3 != 0;
  }
  return false;
}


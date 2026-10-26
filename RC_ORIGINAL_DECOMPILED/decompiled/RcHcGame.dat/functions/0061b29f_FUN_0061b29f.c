/*
 * FUN_0061b29f at 0061b29f
 * undefined FUN_0061b29f(void)
 * Address ranges: 0061b29f-0061b316
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_0061b29f(void)

{
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  iVar1 = 0;
  piVar4 = DAT_00747eb8;
  if (0 < DAT_00748ec0) {
    do {
      if (*piVar4 == 0) {
        pvVar2 = _malloc(0x20);
        DAT_00747eb8[iVar1] = (int)pvVar2;
        puVar3 = (undefined4 *)DAT_00747eb8[iVar1];
        if (puVar3 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
LAB_0061b2fa:
        if (puVar3 == (undefined4 *)0x0) {
          return (undefined4 *)0x0;
        }
        puVar3[4] = 0xffffffff;
        puVar3[1] = 0;
        puVar3[3] = 0;
        puVar3[2] = 0;
        *puVar3 = 0;
        puVar3[7] = 0;
        return puVar3;
      }
      if ((*(byte *)(*piVar4 + 0xc) & 0x83) == 0) {
        puVar3 = (undefined4 *)DAT_00747eb8[iVar1];
        goto LAB_0061b2fa;
      }
      iVar1 = iVar1 + 1;
      piVar4 = piVar4 + 1;
    } while (iVar1 < DAT_00748ec0);
  }
  return (undefined4 *)0x0;
}


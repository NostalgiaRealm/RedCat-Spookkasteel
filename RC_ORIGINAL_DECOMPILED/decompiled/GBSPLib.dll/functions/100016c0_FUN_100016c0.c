/*
 * FUN_100016c0 at 100016c0
 * undefined FUN_100016c0(void)
 * Address ranges: 100016c0-1000174e
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_100016c0(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  
  iVar4 = param_1[0xb];
  puVar1 = (undefined4 *)FUN_10001000(iVar4);
  puVar5 = param_1;
  puVar7 = puVar1;
  for (uVar3 = iVar4 * 0x14 + 0x30U >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  for (iVar4 = 0; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  iVar4 = 0;
  if (0 < (int)param_1[0xb]) {
    piVar6 = param_1 + 0xc;
    do {
      if ((*piVar6 != 0) &&
         (iVar2 = FUN_1000d6a0(*piVar6,(undefined1 *)(((int)puVar1 - (int)param_1) + (int)piVar6)),
         iVar2 == 0)) {
        (*DAT_1014e358)(s_Error_copying_brush__10036214);
        return (undefined4 *)0x0;
      }
      iVar4 = iVar4 + 1;
      piVar6 = piVar6 + 5;
    } while (iVar4 < (int)param_1[0xb]);
  }
  puVar1[3] = param_1[3];
  return puVar1;
}


/*
 * FUN_1000d990 at 1000d990
 * undefined FUN_1000d990(void)
 * Address ranges: 1000d990-1000da65
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_1000d990(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  
  puVar6 = param_1;
  if (param_1 == (undefined4 *)0x0) {
    return 1;
  }
  while ((((*(int *)puVar6[2] == -1 || (puVar6[0x11] != 0)) || (puVar6[0xf] != 0)) ||
         (puVar2 = param_1, puVar6[0x10] != 0))) {
LAB_1000da49:
    puVar6 = (undefined4 *)*puVar6;
    if (puVar6 == (undefined4 *)0x0) {
      return 1;
    }
  }
joined_r0x1000d9cf:
  if (puVar2 != puVar6) {
    if (((*(int *)puVar2[2] == -1) || (puVar2[0x11] != 0)) ||
       ((puVar2[0xf] != 0 ||
        ((puVar2[0x10] != 0 ||
         (puVar4 = (undefined4 *)FUN_1000db30(puVar6,puVar2), puVar4 == (undefined4 *)0x0))))))
    goto LAB_1000da1e;
    FUN_1000d500(puVar4[2]);
    iVar5 = FUN_1000e1c0(puVar4,0);
    if (iVar5 == 0) {
      FUN_1000d930(puVar4);
      puVar6[0x11] = 0;
      puVar2[0x11] = 0;
      goto LAB_1000da1e;
    }
    DAT_10312684 = DAT_10312684 + 1;
    puVar3 = (undefined4 *)*param_1;
    puVar2 = param_1;
    while (puVar1 = puVar3, puVar1 != (undefined4 *)0x0) {
      puVar2 = puVar1;
      puVar3 = (undefined4 *)*puVar1;
    }
    *puVar4 = 0;
    *puVar2 = puVar4;
  }
  goto LAB_1000da49;
LAB_1000da1e:
  puVar2 = (undefined4 *)*puVar2;
  goto joined_r0x1000d9cf;
}


/*
 * FUN_005b7f80 at 005b7f80
 * undefined FUN_005b7f80(void)
 * Address ranges: 005b7f80-005b819c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 * FUN_005b7f80(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar2 = (undefined4 *)FUN_005cf3b0(0x1d5e0);
  if (puVar2 == (undefined4 *)0x0) {
    FUN_005cf220(0x34,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_W_006a9528,0x137,&DAT_006b3f70,
                 0);
    return (undefined4 *)0x0;
  }
  puVar5 = puVar2;
  for (iVar3 = 0x7578; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar5 = puVar2 + 0x32;
  for (iVar3 = 0x3e; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar2[0x5a] = 1;
  puVar2[0x5b] = 1;
  puVar2[0x5c] = 0;
  puVar2[0x5d] = 1;
  puVar2[0x5e] = 1;
  puVar2[0x5f] = 1;
  puVar2[0x60] = 0;
  puVar2[0x61] = 0;
  puVar2[0x62] = 0;
  puVar2[99] = 0;
  puVar2[100] = 0;
  puVar2[0x65] = 0;
  puVar2[0x66] = 0;
  puVar2[0x68] = 0;
  puVar2[0x69] = 0;
  puVar2[0x6a] = 0;
  puVar2[0x6b] = 0;
  puVar2[0x6c] = 0;
  puVar2[0x6d] = 0;
  puVar2[0x6e] = 0;
  puVar2[0x6f] = 0;
  iVar3 = FUN_005cf3b0(0x2c);
  puVar2[0x45] = iVar3;
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  iVar3 = FUN_005cf3b0(puVar2[0x5a] * 0x50);
  puVar2[0x44] = iVar3;
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  iVar3 = FUN_005cf3b0(puVar2[0x5d] * 0x3c);
  puVar2[0x47] = iVar3;
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  iVar3 = FUN_005cf3b0(puVar2[0x5e] << 2);
  puVar2[0x48] = iVar3;
  if (iVar3 == 0) {
    return (undefined4 *)0x0;
  }
  puVar5 = (undefined4 *)puVar2[0x45];
  puVar4 = puVar5;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *puVar5 = 0xffffffff;
  puVar5[1] = 0xffffffff;
  puVar5[4] = 0xffffffff;
  puVar5 = (undefined4 *)puVar2[0x44];
  puVar4 = puVar5;
  for (iVar3 = 0x14; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *puVar5 = 0xffffffff;
  puVar5[2] = *param_1;
  puVar5[3] = param_1[1];
  puVar5[4] = param_1[2];
  puVar5[5] = *param_2;
  puVar5[6] = param_2[1];
  puVar5[7] = param_2[2];
  puVar5 = (undefined4 *)puVar2[0x47];
  puVar4 = puVar5;
  for (iVar3 = 0xf; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  *puVar5 = 0;
  puVar5[1] = *param_1;
  puVar5[2] = param_1[1];
  puVar5[3] = param_1[2];
  puVar5[4] = *param_2;
  puVar5[5] = param_2[1];
  uVar1 = param_2[2];
  puVar5[0xb] = 0;
  puVar5[0xc] = 0;
  puVar5[6] = uVar1;
  *(undefined4 *)puVar2[0x48] = 0xffffffff;
  puVar5 = puVar2 + 0x3d;
  for (iVar3 = 6; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = 0xffffffff;
    puVar5 = puVar5 + 1;
  }
  return puVar2;
}


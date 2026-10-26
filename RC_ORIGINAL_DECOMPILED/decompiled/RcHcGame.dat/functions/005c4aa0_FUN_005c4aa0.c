/*
 * FUN_005c4aa0 at 005c4aa0
 * undefined FUN_005c4aa0(void)
 * Address ranges: 005c4aa0-005c4b7d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * __fastcall FUN_005c4aa0(undefined4 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  
  piVar1 = (int *)FUN_005c6a40();
  if (*piVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x118a,
                 &DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  iVar2 = FUN_005c6a70();
  if (iVar2 * param_2 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_B_006a97ac,0x1191,
                 &DAT_006b3f70,0);
    return (undefined4 *)0x0;
  }
  puVar3 = (undefined4 *)FUN_005cf3b0(0x2c);
  if (puVar3 == (undefined4 *)0x0) {
    return (undefined4 *)0x0;
  }
  puVar5 = puVar3;
  for (iVar4 = 0xb; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar5 = 0;
    puVar5 = puVar5 + 1;
  }
  puVar3[2] = param_1;
  puVar3[3] = param_2;
  iVar2 = FUN_005cf3b0(iVar2 * param_2);
  puVar3[7] = iVar2;
  if (iVar2 == 0) {
    FUN_005cf400(puVar3);
    _DAT_007203c0 = 0;
    return (undefined4 *)0x0;
  }
  *puVar3 = 0;
  puVar3[4] = 0;
  puVar3[1] = 1;
  return puVar3;
}


/*
 * FUN_00411e38 at 00411e38
 * undefined __register FUN_00411e38(undefined * * param_1, undefined4 param_2, undefined4 param_3, int param_4)
 * Address ranges: 00411e38-00411ecd
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_00411e38(undefined **param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined **ppuVar1;
  int iVar2;
  HMODULE pHVar3;
  undefined4 extraout_ECX;
  undefined4 extraout_EDX;
  undefined4 *in_FS_OFFSET;
  undefined *puVar4;
  undefined4 uStack_11c;
  undefined1 *puStack_118;
  undefined1 *puStack_114;
  byte local_108 [256];
  undefined *local_8;
  
  puStack_114 = &stack0xfffffffc;
  local_8 = (undefined *)0x0;
  puStack_118 = &LAB_00411ece;
  uStack_11c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_11c;
  if ((param_1 != &PTR_FUN_00411384) && (param_1 != *(undefined ***)(param_4 + -8))) {
    iVar2 = param_4;
    ppuVar1 = (undefined **)FUN_0040301c((int)param_1);
    FUN_00411e38(ppuVar1,extraout_EDX,extraout_ECX,iVar2);
    FUN_00402fe0((int)param_1,local_108);
    FUN_00403fd4((int *)&local_8,local_108);
    puVar4 = local_8;
    iVar2 = FUN_004064f8(param_1);
    pHVar3 = (HMODULE)FUN_00406500(iVar2);
    FUN_00411cb0(puVar4,pHVar3,(undefined4 *)(param_4 + -4));
  }
  *in_FS_OFFSET = uStack_11c;
  puStack_114 = &LAB_00411ed5;
  puStack_118 = (undefined1 *)0x411ecd;
  FUN_00403db0((int *)&local_8);
  return;
}


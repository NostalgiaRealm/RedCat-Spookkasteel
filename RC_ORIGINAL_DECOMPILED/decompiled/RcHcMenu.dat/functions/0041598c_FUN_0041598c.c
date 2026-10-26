/*
 * FUN_0041598c at 0041598c
 * undefined __register FUN_0041598c(int param_1, int * param_2)
 * Address ranges: 0041598c-00415a2b
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_0041598c(int param_1,int *param_2)

{
  undefined1 *puVar1;
  bool bVar2;
  char cVar3;
  int *piVar4;
  uint extraout_ECX;
  uint extraout_ECX_00;
  uint extraout_ECX_01;
  uint extraout_ECX_02;
  uint extraout_ECX_03;
  uint extraout_ECX_04;
  uint extraout_ECX_05;
  uint extraout_ECX_06;
  uint extraout_ECX_07;
  uint uVar5;
  uint extraout_ECX_08;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 extraout_EDX_05;
  undefined4 extraout_EDX_06;
  undefined4 extraout_EDX_07;
  undefined4 uVar6;
  undefined4 extraout_EDX_08;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_1c;
  undefined1 *puStack_18;
  undefined1 *puStack_14;
  
  puStack_14 = (undefined1 *)0x41599f;
  (**(code **)(*param_2 + 0x14))();
  puStack_18 = &LAB_00415a2c;
  uStack_1c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_1c;
  puStack_14 = &stack0xfffffffc;
  bVar2 = FUN_004155a0(param_1,extraout_EDX,extraout_ECX);
  uVar5 = extraout_ECX_00;
  uVar6 = extraout_EDX_00;
  if (!bVar2) {
    FUN_00412f38(param_2);
    uVar5 = extraout_ECX_01;
    uVar6 = extraout_EDX_01;
  }
  while( true ) {
    bVar2 = FUN_004155a0(param_1,uVar6,uVar5);
    if (bVar2) break;
    cVar3 = FUN_00415850(param_1,extraout_EDX_08,extraout_ECX_08);
    if ((byte)(cVar3 - 2U) < 3) {
      FUN_00416230(param_1,extraout_EDX_02,extraout_ECX_02);
    }
    piVar4 = (int *)FUN_00412e80((int)param_2);
    FUN_004162e0(param_1,extraout_EDX_03,extraout_ECX_03);
    uVar5 = extraout_ECX_04;
    uVar6 = extraout_EDX_04;
    while( true ) {
      bVar2 = FUN_004155a0(param_1,uVar6,uVar5);
      if (bVar2) break;
      FUN_0041644c((int *)param_1,piVar4);
      uVar5 = extraout_ECX_05;
      uVar6 = extraout_EDX_05;
    }
    FUN_004162e8(param_1,extraout_EDX_06,extraout_ECX_06);
    uVar5 = extraout_ECX_07;
    uVar6 = extraout_EDX_07;
  }
  FUN_004162e8(param_1,extraout_EDX_08,extraout_ECX_08);
  puVar1 = puStack_14;
  *in_FS_OFFSET = uStack_1c;
  puStack_14 = &LAB_00415a33;
  puStack_18 = (undefined1 *)0x415a2b;
  (**(code **)(*param_2 + 0x18))(param_2,*param_2,puVar1);
  return;
}


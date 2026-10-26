/*
 * FUN_004120a4 at 004120a4
 * undefined4 __register FUN_004120a4(undefined4 * param_1, undefined4 * param_2)
 * Address ranges: 004120a4-00412186;004121ab-004121b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_004120a4(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  puStack_20 = (undefined1 *)0x4120bc;
  uVar1 = FUN_00402fdc(param_1);
  puStack_20 = (undefined1 *)0x4120c5;
  uVar2 = FUN_00402fdc(param_2);
  if (uVar1 == uVar2) {
    puStack_20 = (undefined1 *)0x4120d4;
    uVar1 = FUN_0041300c((int)param_1);
    puStack_20 = (undefined1 *)0x4120dd;
    uVar2 = FUN_0041300c((int)param_2);
    if (uVar1 == uVar2) {
      puStack_20 = (undefined1 *)0x4120f1;
      piVar3 = (int *)FUN_00403064((int *)&PTR_FUN_00410f54,'\x01',extraout_ECX);
      puStack_24 = &LAB_004121a4;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_2c = (undefined1 *)0x41210c;
      puStack_20 = &stack0xfffffffc;
      FUN_0041204c((int)piVar3,(int)param_1);
      puStack_2c = (undefined1 *)0x412118;
      piVar4 = (int *)FUN_00403064((int *)&PTR_FUN_00410f54,'\x01',extraout_ECX_00);
      puStack_30 = &LAB_00412187;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      puStack_2c = &stack0xfffffffc;
      FUN_0041204c((int)piVar4,(int)param_2);
      iVar5 = FUN_004147cc(piVar3);
      iVar6 = FUN_004147cc(piVar4);
      if (iVar5 == iVar6) {
        uVar1 = FUN_004147cc(piVar3);
        FUN_00409738((int *)piVar3[1],(int *)piVar4[1],uVar1);
      }
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_0041218e;
      puStack_30 = (undefined1 *)0x412186;
      uVar7 = FUN_00403094(piVar4);
      return uVar7;
    }
  }
  return uVar2 & 0xffffff00;
}


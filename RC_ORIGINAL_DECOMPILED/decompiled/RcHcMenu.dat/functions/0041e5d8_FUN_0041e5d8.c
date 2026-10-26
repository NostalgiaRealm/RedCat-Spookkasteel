/*
 * FUN_0041e5d8 at 0041e5d8
 * undefined1 __register FUN_0041e5d8(int * param_1, int * param_2)
 * Address ranges: 0041e5d8-0041e6eb;0041e710-0041e719
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated Delphi VMT 0x41a91c slot 6 for TGraphic. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated Delphi VMT 0x41a91c slot 6 for TGraphic.
   Original bytes unchanged; names and types still inferred. */

undefined1 FUN_0041e5d8(int *param_1,int *param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  if (param_2 != (int *)0x0) {
    puStack_20 = (undefined1 *)0x41e5f0;
    iVar4 = FUN_00402fdc(param_1);
    puStack_20 = (undefined1 *)0x41e5f9;
    iVar5 = FUN_00402fdc(param_2);
    if (iVar4 == iVar5) {
      bVar1 = true;
      goto LAB_0041e603;
    }
  }
  bVar1 = false;
LAB_0041e603:
  puStack_20 = (undefined1 *)0x41e60d;
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  if (cVar2 == '\0') {
    puStack_20 = (undefined1 *)0x41e618;
    cVar2 = (**(code **)(*param_2 + 0x1c))();
    if (cVar2 == '\0') {
      if (!bVar1) {
        return 0;
      }
      puStack_20 = (undefined1 *)0x41e656;
      piVar6 = (int *)FUN_00403064((int *)&PTR_FUN_00410f54,'\x01',extraout_ECX);
      puStack_24 = &LAB_0041e709;
      uStack_28 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_28;
      puStack_2c = (undefined1 *)0x41e671;
      puStack_20 = &stack0xfffffffc;
      (**(code **)(*param_1 + 0x44))(param_1,piVar6);
      puStack_2c = (undefined1 *)0x41e67d;
      piVar7 = (int *)FUN_00403064((int *)&PTR_FUN_00410f54,'\x01',extraout_ECX_00);
      puStack_30 = &LAB_0041e6ec;
      uStack_34 = *in_FS_OFFSET;
      *in_FS_OFFSET = &uStack_34;
      puStack_2c = &stack0xfffffffc;
      (**(code **)(*param_2 + 0x44))(param_2,piVar7);
      iVar4 = FUN_004147cc(piVar6);
      iVar5 = FUN_004147cc(piVar7);
      if (iVar4 == iVar5) {
        uVar8 = FUN_004147cc(piVar6);
        FUN_00409738((int *)piVar6[1],(int *)piVar7[1],uVar8);
      }
      *in_FS_OFFSET = uStack_34;
      puStack_2c = &LAB_0041e6f3;
      puStack_30 = (undefined1 *)0x41e6eb;
      uVar3 = FUN_00403094(piVar7);
      return uVar3;
    }
  }
  puStack_20 = (undefined1 *)0x41e623;
  cVar2 = (**(code **)(*param_1 + 0x1c))();
  if (cVar2 != '\0') {
    puStack_20 = (undefined1 *)0x41e62e;
    cVar2 = (**(code **)(*param_2 + 0x1c))();
    if (cVar2 != '\0') {
      return 1;
    }
  }
  return 0;
}


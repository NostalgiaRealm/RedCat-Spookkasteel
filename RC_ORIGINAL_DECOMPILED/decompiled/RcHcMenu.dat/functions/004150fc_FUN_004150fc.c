/*
 * FUN_004150fc at 004150fc
 * undefined __register FUN_004150fc(void)
 * Address ranges: 004150fc-00415216;00415270-00415287;004152ae-004152b4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void FUN_004150fc(void)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 extraout_ECX;
  undefined4 extraout_ECX_00;
  undefined4 extraout_ECX_01;
  undefined4 extraout_ECX_02;
  undefined4 extraout_ECX_03;
  undefined4 uVar6;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 uVar7;
  int iVar8;
  undefined4 *in_FS_OFFSET;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 *puStack_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 *puStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  undefined1 *puStack_2c;
  undefined4 uStack_28;
  undefined1 *puStack_24;
  undefined1 *puStack_20;
  
  if (DAT_0057361c == (code *)0x0) {
    return;
  }
  puStack_20 = (undefined1 *)0x41511c;
  FUN_0040e444(DAT_00573618);
  puStack_24 = &LAB_004152a7;
  uStack_28 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_28;
  puStack_2c = (undefined1 *)0x415134;
  puStack_20 = &stack0xfffffffc;
  piVar1 = (int *)FUN_00412824(DAT_00573630);
  puStack_30 = &LAB_00415288;
  uStack_34 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_34;
  if (piVar1[2] < 1) {
    *in_FS_OFFSET = uStack_34;
    puStack_2c = &LAB_0041528f;
    puStack_30 = (undefined1 *)0x415287;
    FUN_00412888(DAT_00573630);
    return;
  }
  puStack_38 = (undefined1 *)0x41515a;
  puStack_2c = &stack0xfffffffc;
  FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX);
  puStack_3c = &LAB_00415269;
  uStack_40 = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_40;
  puStack_44 = (undefined1 *)0x415177;
  puStack_38 = &stack0xfffffffc;
  piVar2 = (int *)FUN_00403064((int *)&PTR_FUN_0041077c,'\x01',extraout_ECX_00);
  puStack_48 = &LAB_00415217;
  uStack_4c = *in_FS_OFFSET;
  *in_FS_OFFSET = &uStack_4c;
  iVar8 = 0;
  puStack_44 = &stack0xfffffffc;
  do {
    while( true ) {
      if (piVar1[2] <= iVar8) {
        *in_FS_OFFSET = uStack_4c;
        puStack_44 = &LAB_0041521e;
        puStack_48 = (undefined1 *)0x415216;
        FUN_00403094(piVar2);
        return;
      }
      piVar3 = (int *)FUN_00412384(piVar1,iVar8);
      iVar4 = (*DAT_0057361c)(piVar3[4]);
      uVar6 = extraout_ECX_01;
      uVar7 = extraout_EDX;
      if (iVar4 == 0) break;
LAB_004151b8:
      if (iVar4 != 0) {
        iVar4 = FUN_00414fb4(iVar4,(char *)piVar3[5]);
        FUN_0040fa6c((int *)piVar3[1],(undefined4 *)piVar3[3],iVar4);
        uVar6 = extraout_ECX_03;
        uVar7 = extraout_EDX_01;
      }
      FUN_0041507c(piVar3[1],uVar7,uVar6,(int)&stack0xfffffffc);
      FUN_00412224(piVar1,iVar8);
      FUN_00403094(piVar3);
    }
    uVar5 = FUN_0040f9f8((int *)piVar3[1],(undefined4 *)piVar3[3]);
    uVar6 = extraout_ECX_02;
    uVar7 = extraout_EDX_00;
    if (uVar5 != 0) goto LAB_004151b8;
    FUN_004150b4(piVar3[1],extraout_EDX_00,extraout_ECX_02,(int)&stack0xfffffffc);
    iVar8 = iVar8 + 1;
  } while( true );
}


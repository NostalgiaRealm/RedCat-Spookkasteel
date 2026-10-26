/*
 * FUN_0061212b at 0061212b
 * undefined FUN_0061212b(void)
 * Address ranges: 0061212b-0061230d
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_0061212b(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  char local_e8;
  char local_e7;
  char local_e6;
  undefined1 local_84 [8];
  undefined1 local_7c [8];
  undefined1 local_74 [16];
  undefined1 local_64 [8];
  undefined1 local_5c [8];
  undefined1 local_54 [8];
  undefined1 local_4c [8];
  undefined1 local_44 [16];
  undefined1 local_34 [8];
  undefined1 local_2c [24];
  undefined1 local_14 [8];
  undefined1 local_c [8];
  
  pcVar2 = DAT_00710054;
  cVar1 = *DAT_00710054;
  DAT_00710054 = DAT_00710054 + 1;
  if (cVar1 == '\0') {
LAB_006122ff:
    DAT_00710054 = pcVar2;
    uVar3 = 2;
    goto LAB_00612301;
  }
  if (cVar1 == '0') {
    uVar3 = FUN_00611cc9(local_7c);
    goto LAB_006122ee;
  }
  if (cVar1 == '1') {
    if (*DAT_00710054 == '@') {
      DAT_00710054 = pcVar2 + 2;
      puVar4 = &DAT_006920fc;
LAB_006122bc:
      FUN_00614e92(puVar4);
      return param_1;
    }
    puVar4 = (undefined1 *)FUN_006113d2(local_4c);
    puVar7 = local_5c;
    FUN_00614e92(&DAT_0065237c);
LAB_0061229e:
    uVar3 = FUN_006151fc(puVar7,puVar4);
LAB_006122ee:
    FUN_00614df0(uVar3);
    return param_1;
  }
  if (cVar1 == '2') {
    uVar3 = FUN_00611cc9(local_84);
    FUN_00614df0(uVar3);
    uVar3 = FUN_00611cc9(local_34);
    FUN_00614df0(uVar3);
    iVar5 = FUN_00615028();
    pcVar2 = DAT_00710054;
    if ((iVar5 == 0) || (iVar5 = FUN_00615028(), pcVar2 = DAT_00710054, iVar5 == 0))
    goto LAB_006122ff;
    iVar5 = FUN_006150e8(&local_e7,100);
    cVar1 = local_e6;
    if (iVar5 != 0) {
      local_e8 = local_e7;
      if (local_e7 == '-') {
        local_e6 = '.';
        local_e7 = cVar1;
      }
      else {
        local_e7 = '.';
      }
      puVar4 = local_14;
      puVar7 = local_74;
      puVar6 = local_64;
      uVar3 = 0x65;
      FUN_00614e92(&local_e8);
      FUN_0061517e(puVar6,uVar3);
      goto LAB_0061229e;
    }
  }
  else if (cVar1 == 'D') {
    uVar3 = FUN_00611cc9(local_54);
    FUN_00614df0(uVar3);
    if ((DAT_00710064._1_1_ & 0x40) != 0) {
      FUN_006150e8(local_2c,0x10);
      uVar3 = FUN_0060ae85(local_2c);
      puVar4 = (undefined1 *)(*DAT_00710068)(uVar3);
      if (puVar4 != (undefined1 *)0x0) goto LAB_006122bc;
    }
    puVar4 = local_c;
    puVar7 = local_14;
    FUN_00614e92("`template-parameter");
    uVar3 = FUN_006151fc(puVar7,puVar4);
    FUN_00614df0(uVar3);
    uVar3 = FUN_006151bd(local_44,&DAT_00652438);
    goto LAB_006122ee;
  }
  uVar3 = 1;
LAB_00612301:
  FUN_00614fc6(uVar3);
  return param_1;
}


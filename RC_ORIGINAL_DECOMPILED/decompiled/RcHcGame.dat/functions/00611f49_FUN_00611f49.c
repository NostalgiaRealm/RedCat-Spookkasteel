/*
 * FUN_00611f49 at 00611f49
 * undefined FUN_00611f49(void)
 * Address ranges: 00611f49-0061212a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00611f49(undefined4 param_1)

{
  char cVar1;
  char *pcVar2;
  DName *pDVar3;
  undefined4 uVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined1 local_90 [16];
  undefined1 local_80 [8];
  undefined1 local_78 [24];
  undefined1 local_60 [8];
  undefined1 local_58 [8];
  undefined1 local_50 [16];
  undefined1 local_40 [8];
  undefined1 local_38 [24];
  undefined1 local_20 [8];
  int local_18;
  undefined1 local_14 [4];
  byte local_10;
  DName local_c [8];
  
  local_18 = 1;
  FUN_00614dc3();
  do {
    if ((((local_10 & 0xf) != 0) || (*DAT_00710054 == '\0')) || (*DAT_00710054 == '@')) {
      FUN_00614df0(local_14);
      return param_1;
    }
    if (local_18 == 0) {
      FUN_006152a2(0x2c);
    }
    else {
      local_18 = 0;
    }
    pcVar2 = DAT_00710054;
    iVar5 = *DAT_00710054 + -0x30;
    if ((iVar5 < 0) || (9 < iVar5)) {
      FUN_00614dc3();
      cVar1 = *DAT_00710054;
      if (cVar1 == 'X') {
        DAT_00710054 = DAT_00710054 + 1;
        puVar8 = &DAT_00652430;
LAB_0061205f:
        FUN_006154a5(puVar8);
      }
      else {
        if ((cVar1 == '$') && (DAT_00710054[1] != '$')) {
          DAT_00710054 = DAT_00710054 + 1;
          uVar4 = FUN_0061212b(local_50);
        }
        else if (cVar1 == '?') {
          uVar4 = FUN_00611cc9(local_80);
          FUN_00614df0(uVar4);
          if ((DAT_00710064._1_1_ & 0x40) == 0) {
            puVar7 = local_20;
            puVar6 = local_40;
            FUN_00614e92("`template-parameter");
            uVar4 = FUN_006151fc(puVar6,puVar7);
            FUN_00614df0(uVar4);
            puVar7 = local_58;
          }
          else {
            FUN_006150e8(local_90,0x10);
            uVar4 = FUN_0060ae85(local_90);
            puVar8 = (undefined *)(*DAT_00710068)(uVar4);
            if (puVar8 != (undefined *)0x0) goto LAB_0061205f;
            puVar7 = local_20;
            puVar6 = local_38;
            FUN_00614e92("`template-parameter");
            uVar4 = FUN_006151fc(puVar6,puVar7);
            FUN_00614df0(uVar4);
            puVar7 = local_60;
          }
          uVar4 = FUN_006151bd(puVar7,&DAT_00652438);
        }
        else {
          uVar4 = FUN_00614dc3();
          uVar4 = FUN_0061349a(local_78,uVar4);
        }
        FUN_006154c8(uVar4);
      }
      if ((1 < (int)DAT_00710054 - (int)pcVar2) && (*(int *)DAT_00710050 != 9)) {
        Replicator::operator+=(DAT_00710050,local_c);
      }
      pDVar3 = local_c;
    }
    else {
      DAT_00710054 = DAT_00710054 + 1;
      pDVar3 = Replicator::operator[](DAT_00710050,iVar5);
    }
    FUN_00615373(pDVar3);
  } while( true );
}


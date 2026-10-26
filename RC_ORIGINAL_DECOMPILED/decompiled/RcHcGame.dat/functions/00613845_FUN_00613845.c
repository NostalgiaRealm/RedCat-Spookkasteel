/*
 * FUN_00613845 at 00613845
 * undefined FUN_00613845(void)
 * Address ranges: 00613845-00613b49
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_00613845(undefined4 param_1,undefined4 param_2)

{
  byte bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  char *pcVar7;
  undefined1 local_38 [8];
  undefined1 local_30 [8];
  undefined1 local_28 [8];
  undefined1 local_20 [8];
  undefined1 local_18 [8];
  undefined1 local_10 [11];
  byte local_5;
  
  if (*DAT_00710054 == 0) {
    puVar4 = local_38;
    FUN_00614fc6(2);
    uVar2 = FUN_006151fc(puVar4,param_2);
    FUN_00614df0(uVar2);
    puVar4 = local_28;
    goto LAB_00613b3a;
  }
  bVar1 = *DAT_00710054;
  DAT_00710054 = DAT_00710054 + 1;
  FUN_00614dc3();
  uVar5 = (uint)bVar1;
  switch(uVar5) {
  case 0x43:
  case 0x44:
  case 0x45:
    pcVar7 = &DAT_006525e8;
    break;
  case 0x46:
  case 0x47:
    pcVar7 = "short";
    break;
  case 0x48:
  case 0x49:
    pcVar7 = (char *)&PTR_DAT_006aa49c;
    break;
  case 0x4a:
  case 0x4b:
    pcVar7 = &DAT_006525d8;
    break;
  default:
    DAT_00710054 = DAT_00710054 + -1;
    uVar2 = FUN_00613bc3(local_28);
    FUN_006154c8(uVar2);
    iVar3 = FUN_0061503c();
    if (iVar3 == 0) goto LAB_006138e4;
    goto LAB_00613a93;
  case 0x4d:
    pcVar7 = s_float_006aa494;
    break;
  case 0x4e:
    goto switchD_00613881_caseD_4e;
  case 0x4f:
    FUN_006154a5("long ");
    goto switchD_00613881_caseD_4e;
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
    if ((uVar5 & 3) != 0xffffffff) {
      FUN_00614dc3();
      FUN_00614df0(param_2);
      iVar3 = FUN_0061503c();
      if (iVar3 != 0) {
        if ((bVar1 & 1) == 0) {
          if ((bVar1 & 2) != 0) {
            FUN_006154a5("volatile");
          }
        }
        else {
          FUN_006154a5("const");
          if ((bVar1 & 2) != 0) {
            FUN_00615307(" volatile");
          }
        }
      }
      uVar2 = FUN_006141a0(local_38,local_18,local_28,1);
      FUN_00614df0(uVar2);
      puVar4 = local_20;
      goto LAB_00613b3a;
    }
    goto LAB_006138e4;
  case 0x5f:
    local_5 = *DAT_00710054;
    DAT_00710054 = DAT_00710054 + 1;
    switch(local_5) {
    case 0x44:
    case 0x45:
      pcVar7 = "__int8";
      break;
    case 0x46:
    case 0x47:
      pcVar7 = "__int16";
      break;
    case 0x48:
    case 0x49:
      pcVar7 = "__int32";
      break;
    case 0x4a:
    case 0x4b:
      pcVar7 = "__int64";
      break;
    case 0x4c:
    case 0x4d:
      pcVar7 = "__int128";
      break;
    case 0x4e:
      pcVar7 = &DAT_006525b4;
      break;
    default:
      pcVar7 = s_UNKNOWN_006a211c;
      break;
    case 0x57:
      pcVar7 = "wchar_t";
    }
  }
  FUN_006154a5(pcVar7);
LAB_006138e4:
  if (uVar5 == 0x43) {
    puVar4 = local_10;
    puVar6 = local_38;
    FUN_00614e92("signed ");
    uVar2 = FUN_006151fc(puVar6,puVar4);
    FUN_00614df0(uVar2);
    puVar4 = local_28;
LAB_00613a51:
    FUN_006154c8(puVar4);
  }
  else {
    if ((((uVar5 == 0x45) || (uVar5 == 0x47)) || (uVar5 == 0x49)) || (uVar5 == 0x4b)) {
      puVar4 = local_10;
      puVar6 = local_38;
      FUN_00614e92("unsigned ");
      uVar2 = FUN_006151fc(puVar6,puVar4);
      FUN_00614df0(uVar2);
      puVar4 = local_20;
      goto LAB_00613a51;
    }
    if ((uVar5 == 0x5f) &&
       (((local_5 == 0x45 || (local_5 == 0x47)) ||
        ((local_5 == 0x49 || ((local_5 == 0x4b || (local_5 == 0x4d)))))))) {
      puVar4 = local_10;
      puVar6 = local_30;
      FUN_00614e92("unsigned ");
      uVar2 = FUN_006151fc(puVar6,puVar4);
      FUN_00614df0(uVar2);
      puVar4 = local_18;
      goto LAB_00613a51;
    }
  }
  iVar3 = FUN_0061503c();
  if (iVar3 == 0) {
    puVar4 = local_38;
    FUN_00614dcd(0x20);
    uVar2 = FUN_006151fc(puVar4,param_2);
    FUN_00614df0(uVar2);
    FUN_00615373(local_28);
  }
LAB_00613a93:
  puVar4 = local_10;
LAB_00613b3a:
  FUN_00614df0(puVar4);
  return param_1;
switchD_00613881_caseD_4e:
  FUN_00615307("double");
  goto LAB_006138e4;
}


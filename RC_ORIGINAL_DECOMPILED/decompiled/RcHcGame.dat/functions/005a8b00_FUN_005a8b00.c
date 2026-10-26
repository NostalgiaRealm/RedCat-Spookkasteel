/*
 * FUN_005a8b00 at 005a8b00
 * undefined FUN_005a8b00(void)
 * Address ranges: 005a8b00-005a9505
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005a8b00(undefined4 param_1,int param_2)

{
  char cVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined1 local_2c [4];
  undefined4 *local_28;
  undefined4 local_24;
  uint local_20;
  undefined1 local_1c [4];
  undefined4 *local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_00645930;
  local_c = ExceptionList;
  switch(param_1) {
  case 8:
    return 0xe;
  case 9:
    return 0xf;
  default:
    ExceptionList = &local_c;
    if (param_2 == 0) goto LAB_005a938d;
    local_2c[0] = (undefined1)param_2;
    uVar3 = 0xffffffff;
    local_28 = (undefined4 *)0x0;
    pcVar6 = &DAT_006b3f70;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar3 - 1;
    local_24 = 0;
    local_20 = 0;
    ExceptionList = &local_c;
    uVar3 = FUN_0040ce00();
    if (uVar3 < uVar4) {
      FUN_005fe5fb();
    }
    if (((local_28 == (undefined4 *)0x0) || (cVar1 = *(char *)((int)local_28 + -1), cVar1 == '\0'))
       || (cVar1 == -1)) {
      if (uVar4 != 0) {
        if ((0x1f < local_20) || (local_20 < uVar4)) {
          FUN_004040a0(1);
          goto LAB_005a9301;
        }
        goto LAB_005a930f;
      }
      FUN_004040a0(1);
    }
    else if (uVar4 == 0) {
      *(char *)((int)local_28 + -1) = cVar1 + -1;
      FUN_004040a0(0);
    }
    else {
LAB_005a9301:
      FUN_00401a60(uVar4);
LAB_005a930f:
      puVar5 = (undefined4 *)&DAT_006b3f70;
      puVar7 = local_28;
      for (uVar3 = uVar4 >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
        *puVar7 = *puVar5;
        puVar5 = puVar5 + 1;
        puVar7 = puVar7 + 1;
      }
      for (uVar3 = uVar4 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
        puVar5 = (undefined4 *)((int)puVar5 + 1);
        puVar7 = (undefined4 *)((int)puVar7 + 1);
      }
      FUN_00404190(uVar4);
    }
    uStack_4 = 0;
    pcVar2 = (code *)FUN_005a07f0(s_a_TranslationNr____0_006a87fc,
                                  s_D__Work_RCHorror_AdamSource_Davi_006a84a8,0x371,local_2c);
    (*pcVar2)();
    uStack_4 = 0xffffffff;
    if (local_28 != (undefined4 *)0x0) {
      cVar1 = *(char *)((int)local_28 + -1);
      if ((cVar1 == '\0') || (cVar1 == -1)) {
        FUN_005fe5f0((char *)((int)local_28 + -1));
      }
      else {
        *(char *)((int)local_28 + -1) = cVar1 + -1;
      }
    }
    local_28 = (undefined4 *)0x0;
    local_24 = 0;
    local_20 = 0;
LAB_005a938d:
    cVar1 = FUN_005a96a0(0x70,0x79,0x3b,param_1,&param_2);
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return param_2;
    }
    cVar1 = FUN_005a96a0(0x67,0x69,0x47,param_1,&param_2);
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return param_2;
    }
    cVar1 = FUN_005a96a0(100,0x66,0x4b,param_1,&param_2);
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return param_2;
    }
    cVar1 = FUN_005a96a0(0x61,99,0x4f,param_1,&param_2);
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return param_2;
    }
    cVar1 = FUN_005a96d0(s_1234567890_006a87f0,2,param_1,&param_2);
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return param_2;
    }
    cVar1 = FUN_005a96d0(s_QWERTYUIOP_006a87e4,0x10,param_1,&param_2);
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return param_2;
    }
    cVar1 = FUN_005a96d0(s_ASDFGHJKL___006a87d8,0x1e,param_1,&param_2);
    if (cVar1 != '\0') {
      ExceptionList = local_c;
      return param_2;
    }
    cVar1 = FUN_005a96d0(s_ZXCVBNM_006a87d0,0x2c,param_1,&param_2);
    if (cVar1 == '\0') {
      ExceptionList = local_c;
      return -1;
    }
    ExceptionList = local_c;
    return param_2;
  case 0xd:
    if (param_2 == 0) {
      return 0x1c;
    }
    if (param_2 == 1) {
      return 0x9c;
    }
    break;
  case 0x10:
    if (param_2 == 0) {
      return 0x2a;
    }
    if (param_2 == 1) {
      return 0x36;
    }
    break;
  case 0x11:
    if (param_2 == 0) {
      return 0x1d;
    }
    if (param_2 == 1) {
      return 0x9d;
    }
    break;
  case 0x12:
    if (param_2 == 0) {
      return 0x38;
    }
    if (param_2 == 1) {
      return 0xb8;
    }
    break;
  case 0x13:
    return 0xc5;
  case 0x14:
    return 0x3a;
  case 0x1b:
    return 1;
  case 0x20:
    return 0x39;
  case 0x21:
    if (param_2 == 0) {
      return 0xc9;
    }
    if (param_2 == 1) {
      return 0x49;
    }
    break;
  case 0x22:
    if (param_2 == 0) {
      return 0xd1;
    }
    if (param_2 == 1) {
      return 0x51;
    }
    break;
  case 0x23:
    if (param_2 == 0) {
      return 0xcf;
    }
    if (param_2 == 1) {
      return 0x4f;
    }
    break;
  case 0x24:
    if (param_2 == 0) {
      return 199;
    }
    if (param_2 == 1) {
      return 0x47;
    }
    break;
  case 0x25:
    if (param_2 == 0) {
      return 0xcb;
    }
    if (param_2 == 1) {
      return 0x4b;
    }
    break;
  case 0x26:
    if (param_2 == 0) {
      return 200;
    }
    if (param_2 == 1) {
      return 0x48;
    }
    break;
  case 0x27:
    if (param_2 == 0) {
      return 0xcd;
    }
    if (param_2 == 1) {
      return 0x4d;
    }
    break;
  case 0x28:
    if (param_2 == 0) {
      return 0xd0;
    }
    if (param_2 == 1) {
      return 0x50;
    }
    break;
  case 0x2c:
    return 0xb7;
  case 0x2d:
    if (param_2 == 0) {
      return 0xd2;
    }
    if (param_2 == 1) {
      return 0x52;
    }
    break;
  case 0x2e:
    if (param_2 == 0) {
      return 0xd3;
    }
    if (param_2 == 1) {
      return 0x53;
    }
    break;
  case 0x6a:
    return 0x37;
  case 0x6b:
    if (param_2 == 0) {
      return 0xd;
    }
    if (param_2 == 1) {
      return 0x4e;
    }
    break;
  case 0x6d:
    if (param_2 == 0) {
      return 0xc;
    }
    if (param_2 == 1) {
      return 0x4a;
    }
    break;
  case 0x6e:
    if (param_2 == 0) {
      return 0x34;
    }
    if (param_2 == 1) {
      return 0x53;
    }
    break;
  case 0x6f:
    if (param_2 == 0) {
      return 0x35;
    }
    if (param_2 == 1) {
      return 0xb5;
    }
    break;
  case 0x7a:
    return 0x57;
  case 0x7b:
    return 0x58;
  case 0x90:
    return 0x45;
  case 0x91:
    return 0x46;
  case 0xa0:
    return 0x2a;
  case 0xa1:
    return 0x36;
  case 0xa2:
    return 0x1d;
  case 0xa3:
    return 0x9d;
  case 0xa4:
    return 0x38;
  case 0xa5:
    return 0xb8;
  case 0xba:
    return 0x27;
  case 0xbb:
    return 0xd;
  case 0xbc:
    return 0x33;
  case 0xbd:
    return 0xc;
  case 0xbe:
    return 0x34;
  case 0xbf:
    return 0x35;
  case 0xc0:
    return 0x29;
  case 0xdb:
    return 0x1a;
  case 0xdc:
    return 0x2b;
  case 0xdd:
    return 0x1b;
  case 0xde:
    return 0x28;
  }
  local_1c[0] = (undefined1)param_2;
  uVar3 = 0xffffffff;
  local_18 = (undefined4 *)0x0;
  pcVar6 = &DAT_006b3f70;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  uVar3 = ~uVar3 - 1;
  local_14 = 0;
  local_10 = 0;
  ExceptionList = &local_c;
  if ((((uVar3 < 0xfffffffe) ||
       (ExceptionList = &local_c, FUN_005fe5fb(), local_18 == (undefined4 *)0x0)) ||
      (cVar1 = *(char *)((int)local_18 + -1), cVar1 == '\0')) || (cVar1 == -1)) {
    if (uVar3 == 0) {
      FUN_004040a0(1);
      goto LAB_005a9083;
    }
    if ((0x1f < local_10) || (local_10 < uVar3)) {
      FUN_004040a0(1);
      goto LAB_005a9052;
    }
  }
  else {
    if (uVar3 == 0) {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
      FUN_004040a0(0);
      goto LAB_005a9083;
    }
LAB_005a9052:
    FUN_00401a60(uVar3);
  }
  puVar5 = (undefined4 *)&DAT_006b3f70;
  puVar7 = local_18;
  for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
    *puVar7 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar7 = puVar7 + 1;
  }
  for (uVar4 = uVar3 & 3; uVar4 != 0; uVar4 = uVar4 - 1) {
    *(undefined1 *)puVar7 = *(undefined1 *)puVar5;
    puVar5 = (undefined4 *)((int)puVar5 + 1);
    puVar7 = (undefined4 *)((int)puVar7 + 1);
  }
  *(undefined1 *)((int)local_18 + uVar3) = 0;
  local_14 = uVar3;
LAB_005a9083:
  uStack_4 = 1;
  pcVar2 = (code *)FUN_005a07f0(s_false_0068d2d0,s_D__Work_RCHorror_AdamSource_Davi_006a84a8,0x396,
                                local_1c);
  (*pcVar2)();
  if (local_18 != (undefined4 *)0x0) {
    cVar1 = *(char *)((int)local_18 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)((int)local_18 + -1));
    }
    else {
      *(char *)((int)local_18 + -1) = cVar1 + -1;
    }
  }
  ExceptionList = local_c;
  return -1;
}


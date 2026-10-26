/*
 * FUN_005e06b0 at 005e06b0
 * undefined FUN_005e06b0(void)
 * Address ranges: 005e06b0-005e0a79
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

void __fastcall FUN_005e06b0(float *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  float local_6c [9];
  float local_48 [9];
  float local_24 [9];
  
  uVar4 = 0;
  switch(param_2) {
  case 0:
    if (DAT_0070f8c0 <= param_1[0xb]) {
      uVar1 = 0;
    }
    else {
      uVar1 = 2;
    }
    if (DAT_0070f8c0 <= param_1[0x14]) {
      uVar4 = 0;
    }
    else {
      uVar4 = 4;
    }
    uVar4 = param_1[2] < DAT_0070f8c0 | uVar1 | uVar4;
  case 1:
    if (DAT_0070f8b0 <= *param_1) {
      uVar1 = 0;
    }
    else {
      uVar1 = 8;
    }
    if (DAT_0070f8b0 <= param_1[9]) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x10;
    }
    if (DAT_0070f8b0 <= param_1[0x12]) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x20;
    }
    uVar4 = uVar4 | uVar1 | uVar2 | uVar3;
  case 2:
    if (*param_1 <= DAT_0070f8b4) {
      uVar1 = 0;
    }
    else {
      uVar1 = 0x40;
    }
    if (param_1[9] <= DAT_0070f8b4) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0x80;
    }
    if (param_1[0x12] <= DAT_0070f8b4) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0x100;
    }
    uVar4 = uVar4 | uVar1 | uVar2 | uVar3;
  case 3:
    break;
  case 4:
    goto switchD_005e06c4_caseD_4;
  default:
    goto switchD_005e06c4_default;
  }
  if (DAT_0070f8b8 <= param_1[1]) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x200;
  }
  if (DAT_0070f8b8 <= param_1[10]) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x400;
  }
  if (DAT_0070f8b8 <= param_1[0x13]) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x800;
  }
  uVar4 = uVar4 | uVar1 | uVar2 | uVar3;
switchD_005e06c4_caseD_4:
  if (param_1[1] <= DAT_0070f8bc) {
    uVar1 = 0;
  }
  else {
    uVar1 = 0x1000;
  }
  if (param_1[10] <= DAT_0070f8bc) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0x2000;
  }
  if (param_1[0x13] <= DAT_0070f8bc) {
    uVar3 = 0;
  }
  else {
    uVar3 = 0x4000;
  }
  uVar3 = uVar4 | uVar1 | uVar2 | uVar3;
  if (uVar3 == 0) {
switchD_005e06c4_default:
    if (DAT_0070f8d0 != 0) {
      (**(code **)(DAT_0070f8c4 + 0x80))(DAT_0070f8d0);
      return;
    }
    (**(code **)(DAT_0070f8c4 + 0x78))(0);
switchD_005e086e_caseD_7:
    return;
  }
  iVar6 = 0;
switchD_005e086e_default:
  switch(uVar3 & 7) {
  case 0:
    goto switchD_005e086e_caseD_0;
  case 1:
    goto switchD_005e086e_caseD_1;
  case 2:
    pfVar7 = param_1;
    pfVar8 = local_6c;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_005e0ab0(param_1 + 9,iVar6);
    param_1 = param_1 + 0x12;
    pfVar7 = param_1;
    pfVar8 = local_24;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_005e06b0();
    pfVar7 = local_48;
    pfVar8 = local_6c;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    break;
  case 3:
    pfVar7 = param_1 + 0x12;
    pfVar8 = local_6c;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_005e0ab0(param_1 + 0x12,iVar6);
    FUN_005e0ab0(param_1 + 0x12,iVar6);
    FUN_005e06b0();
    return;
  case 4:
    pfVar7 = param_1 + 9;
    pfVar8 = local_6c;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_005e0ab0(param_1 + 0x12,iVar6);
    pfVar7 = param_1;
    pfVar8 = local_24;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_005e06b0();
    pfVar7 = local_48;
    pfVar8 = local_6c;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    param_1 = param_1 + 0x12;
    break;
  case 5:
    pfVar7 = param_1 + 9;
    pfVar8 = local_6c;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_005e0ab0(param_1 + 0x12,iVar6);
    param_1 = param_1 + 9;
    goto LAB_005e0a1e;
  case 6:
    pfVar7 = param_1;
    pfVar8 = local_6c;
    for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
      *pfVar8 = *pfVar7;
      pfVar7 = pfVar7 + 1;
      pfVar8 = pfVar8 + 1;
    }
    FUN_005e0ab0(param_1 + 9,iVar6);
    param_1 = param_1 + 0x12;
LAB_005e0a1e:
    FUN_005e0ab0(param_1,iVar6);
    FUN_005e06b0();
    return;
  case 7:
    goto switchD_005e086e_caseD_7;
  default:
    goto switchD_005e086e_default;
  }
  goto LAB_005e08cc;
switchD_005e086e_caseD_0:
  uVar3 = uVar3 >> 3;
  iVar6 = iVar6 + 1;
  goto switchD_005e086e_default;
switchD_005e086e_caseD_1:
  pfVar7 = param_1 + 0x12;
  pfVar8 = local_6c;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar8 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar8 = pfVar8 + 1;
  }
  FUN_005e0ab0(param_1 + 0x12,iVar6);
  pfVar7 = param_1 + 9;
  pfVar8 = local_24;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar8 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar8 = pfVar8 + 1;
  }
  FUN_005e06b0();
  pfVar7 = local_48;
  pfVar8 = local_6c;
  for (iVar5 = 9; iVar5 != 0; iVar5 = iVar5 + -1) {
    *pfVar8 = *pfVar7;
    pfVar7 = pfVar7 + 1;
    pfVar8 = pfVar8 + 1;
  }
  param_1 = param_1 + 9;
LAB_005e08cc:
  FUN_005e0ab0(param_1,iVar6);
  FUN_005e06b0();
  return;
}


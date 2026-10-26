/*
 * FUN_10003c10 at 10003c10
 * undefined4 __stdcall FUN_10003c10(void)
 * Address ranges: 10003c10-10003f32
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10003c10(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 auStack_8c [5];
  undefined4 uStack_78;
  uint uStack_24;
  undefined4 auStack_10 [4];
  
  FUN_100020f0(s_____D3DMain_CreateBuffers_____10014dd0);
  if (DAT_100274bc != (int *)0x0) {
    (**(code **)(*DAT_100274bc + 8))(DAT_100274bc);
    DAT_100274bc = (int *)0x0;
  }
  if (DAT_100274b4 != (int *)0x0) {
    (**(code **)(*DAT_100274b4 + 8))(DAT_100274b4);
    DAT_100274b4 = (int *)0x0;
  }
  if (DAT_100274b0 != (int *)0x0) {
    (**(code **)(*DAT_100274b0 + 8))(DAT_100274b0);
    DAT_100274b0 = (int *)0x0;
  }
  iVar1 = 0x1f;
  if (DAT_1002a6c8 == 0) {
    puVar2 = auStack_8c;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    auStack_8c[0] = 0x7c;
    auStack_8c[1] = 1;
    uStack_24 = 0x2200;
    iVar1 = (**(code **)(*DAT_100274a8 + 0x18))(DAT_100274a8,auStack_8c,&DAT_100274b0,0);
    if (iVar1 == 0) {
      auStack_8c[1] = 7;
      auStack_8c[3] = DAT_10027074;
      auStack_8c[2] = DAT_10027078;
      uStack_24 = 0x6040;
      iVar1 = FUN_10003f40(auStack_8c,&DAT_100274b4);
      if (iVar1 == 0) {
        iVar1 = FUN_10002d10(auStack_8c,DAT_100274b4);
        if (iVar1 == 0) {
          _DAT_100274c0 = uStack_24 >> 0xe & 1;
          iVar1 = (**(code **)(*DAT_100274a8 + 0x10))(DAT_100274a8,0,&DAT_100274bc,0);
          if (iVar1 == 0) {
            iVar1 = (**(code **)(*DAT_100274bc + 0x20))(DAT_100274bc,0,DAT_10026fe8);
            if (iVar1 == 0) {
              iVar1 = (**(code **)(*DAT_100274b0 + 0x70))(DAT_100274b0,DAT_100274bc);
              if (iVar1 == 0) goto LAB_10003d57;
              FUN_10001000(iVar1);
              pcVar4 = s_CreateBuffers__Attaching_clipper_100149cc;
            }
            else {
              FUN_10001000(iVar1);
              pcVar4 = s_CreateBuffers__Attaching_clipper_10014a0c;
            }
          }
          else {
            FUN_10001000(iVar1);
            pcVar4 = s_CreateBuffers__CreateClipper_fai_10014a48;
          }
        }
        else {
          FUN_10001000(iVar1);
          pcVar4 = s_CreateBuffers__Failed_to_get_sur_10014a74;
        }
      }
      else {
        if ((iVar1 == -0x7ff8fff2) || (iVar1 == -0x7789fe84)) goto LAB_10003dd3;
        FUN_10001000(iVar1);
        pcVar4 = s_CreateBuffers__CreateSurface_for_10014ac0;
      }
    }
    else {
      if ((iVar1 == -0x7ff8fff2) || (iVar1 == -0x7789fe84)) {
LAB_10003dd3:
        FUN_100020f0(s_CreateBuffers__There_was_not_eno_10014b04);
        goto LAB_10003ee9;
      }
      FUN_10001000(iVar1);
      pcVar4 = s_CreateBuffers__CreateSurface_for_10014bf8;
    }
  }
  else {
    puVar2 = auStack_8c;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    auStack_8c[0] = 0x7c;
    auStack_8c[1] = 0x21;
    uStack_78 = 1;
    uStack_24 = 0x6218;
    iVar1 = FUN_10003f40(auStack_8c,&DAT_100274b0);
    if (iVar1 == 0) {
      auStack_10[0] = 4;
      iVar1 = (**(code **)(*DAT_100274b0 + 0x30))(DAT_100274b0,auStack_10,&DAT_100274b4);
      if (iVar1 == 0) {
        iVar1 = FUN_10002d10(auStack_8c,DAT_100274b4);
        if (iVar1 == 0) {
          _DAT_100274c0 = uStack_24 >> 0xe & 1;
LAB_10003d57:
          puVar2 = auStack_8c;
          puVar3 = &DAT_10026fec;
          for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
          FUN_10002b40();
          return 1;
        }
        FUN_10001000(iVar1);
        pcVar4 = s_CreateBuffers__Failed_to_get_sur_10014c3c;
      }
      else {
        FUN_10001000(iVar1);
        pcVar4 = s_CreateBuffers__GetAttachedSurfac_10014c84;
      }
    }
    else {
      if ((iVar1 == -0x7ff8fff2) || (iVar1 == -0x7789fe84)) {
        FUN_100020f0(s_CreateBuffers__There_was_not_eno_10014cc8);
        goto LAB_10003ee9;
      }
      FUN_10001000(iVar1);
      pcVar4 = s_CreateBuffers__CreateSurface_for_10014d84;
    }
  }
  FUN_100020f0(pcVar4);
LAB_10003ee9:
  if (DAT_100274b0 != (int *)0x0) {
    (**(code **)(*DAT_100274b0 + 8))(DAT_100274b0);
    DAT_100274b0 = (int *)0x0;
  }
  if (DAT_100274b4 != (int *)0x0) {
    (**(code **)(*DAT_100274b4 + 8))(DAT_100274b4);
    DAT_100274b4 = (int *)0x0;
  }
  if (DAT_100274bc != (int *)0x0) {
    (**(code **)(*DAT_100274bc + 8))(DAT_100274bc);
    DAT_100274bc = (int *)0x0;
  }
  return 0;
}


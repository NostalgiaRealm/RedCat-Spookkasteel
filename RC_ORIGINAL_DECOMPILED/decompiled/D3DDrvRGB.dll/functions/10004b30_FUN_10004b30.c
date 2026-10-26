/*
 * FUN_10004b30 at 10004b30
 * undefined4 __stdcall FUN_10004b30(void)
 * Address ranges: 10004b30-10004eac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_10004b30(void)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  char *pcVar4;
  undefined4 auStack_8c [4];
  undefined4 auStack_7c [5];
  undefined4 uStack_68;
  uint uStack_24;
  undefined4 uStack_14;
  
  FUN_10002700(s_____D3DMain_CreateBuffers_____10017df8);
  if (DAT_1001bcc4 != (int *)0x0) {
    (**(code **)(*DAT_1001bcc4 + 8))();
    DAT_1001bcc4 = (int *)0x0;
  }
  if (DAT_1001bcbc != (int *)0x0) {
    (**(code **)(*DAT_1001bcbc + 8))();
    DAT_1001bcbc = (int *)0x0;
  }
  if (DAT_1001bcb8 != (int *)0x0) {
    (**(code **)(*DAT_1001bcb8 + 8))();
    DAT_1001bcb8 = (int *)0x0;
  }
  iVar1 = 0x1f;
  if (DAT_1001eee0 == 0) {
    puVar2 = auStack_7c;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    auStack_7c[0] = 0x7c;
    auStack_7c[1] = 1;
    uStack_14 = 0x2200;
    iVar1 = (**(code **)(*DAT_1001bcb0 + 0x18))(DAT_1001bcb0,auStack_7c,&DAT_1001bcb8);
    if (iVar1 == 0) {
      auStack_8c[2] = DAT_1001b480;
      auStack_8c[3] = DAT_1001b47c;
      auStack_8c[1] = 7;
      uStack_24 = 0x6040;
      iVar1 = (**(code **)(*DAT_1001bcb0 + 0x18))(DAT_1001bcb0,auStack_8c,&DAT_1001bcbc,0);
      if (iVar1 == 0) {
        puVar2 = auStack_8c;
        for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        auStack_8c[0] = 0x7c;
        iVar1 = (**(code **)(*DAT_1001bcbc + 0x58))(DAT_1001bcbc,auStack_8c);
        if (iVar1 == 0) {
          _DAT_1001bcc8 = uStack_24 >> 0xe & 1;
          iVar1 = (**(code **)(*DAT_1001bcb0 + 0x10))(DAT_1001bcb0,0,&DAT_1001bcc4,0);
          if (iVar1 == 0) {
            iVar1 = (**(code **)(*DAT_1001bcc4 + 0x20))(DAT_1001bcc4,0,DAT_1001b3f0);
            if (iVar1 == 0) {
              iVar1 = (**(code **)(*DAT_1001bcb8 + 0x70))(DAT_1001bcb8,DAT_1001bcc4);
              if (iVar1 == 0) goto LAB_10004c9d;
              FUN_10001000(iVar1);
              pcVar4 = s_CreateBuffers__Attaching_clipper_100182d4;
            }
            else {
              FUN_10001000(iVar1);
              pcVar4 = s_CreateBuffers__Attaching_clipper_10018298;
            }
          }
          else {
            FUN_10001000(iVar1);
            pcVar4 = s_CreateBuffers__CreateClipper_fai_1001826c;
          }
        }
        else {
          FUN_10001000(iVar1);
          pcVar4 = s_CreateBuffers__Failed_to_get_sur_10018220;
        }
      }
      else {
        if ((iVar1 == -0x7ff8fff2) || (iVar1 == -0x7789fe84)) {
          FUN_10002700(s_CreateBuffers__There_was_not_eno_100180e8);
          goto LAB_10004e62;
        }
        FUN_10001000(iVar1);
        pcVar4 = s_CreateBuffers__CreateSurface_for_100181dc;
      }
    }
    else {
      if ((iVar1 == -0x7ff8fff2) || (iVar1 == -0x7789fe84)) {
        FUN_10002700(s_CreateBuffers__There_was_not_eno_10017fb0);
        goto LAB_10004e62;
      }
      FUN_10001000(iVar1);
      pcVar4 = s_CreateBuffers__CreateSurface_for_100180a4;
    }
  }
  else {
    puVar2 = auStack_7c;
    for (; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
    }
    auStack_7c[0] = 0x7c;
    auStack_7c[1] = 0x21;
    uStack_68 = 1;
    uStack_14 = 0x6218;
    iVar1 = (**(code **)(*DAT_1001bcb0 + 0x18))(DAT_1001bcb0,auStack_7c,&DAT_1001bcb8);
    if (iVar1 == 0) {
      iVar1 = (**(code **)(*DAT_1001bcb8 + 0x30))(DAT_1001bcb8,&stack0xffffff64,&DAT_1001bcbc);
      if (iVar1 == 0) {
        puVar2 = auStack_8c;
        for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
          *puVar2 = 0;
          puVar2 = puVar2 + 1;
        }
        auStack_8c[0] = 0x7c;
        iVar1 = (**(code **)(*DAT_1001bcbc + 0x58))(DAT_1001bcbc,auStack_8c);
        if (iVar1 == 0) {
          _DAT_1001bcc8 = uStack_24 >> 0xe & 1;
LAB_10004c9d:
          puVar2 = auStack_8c;
          puVar3 = &DAT_1001b3f4;
          for (iVar1 = 0x1f; iVar1 != 0; iVar1 = iVar1 + -1) {
            *puVar3 = *puVar2;
            puVar2 = puVar2 + 1;
            puVar3 = puVar3 + 1;
          }
          FUN_10003060();
          return 1;
        }
        FUN_10001000(iVar1);
        pcVar4 = s_CreateBuffers__Failed_to_get_sur_10017f68;
      }
      else {
        FUN_10001000(iVar1);
        pcVar4 = s_CreateBuffers__GetAttachedSurfac_10017f20;
      }
    }
    else {
      if ((iVar1 == -0x7ff8fff2) || (iVar1 == -0x7789fe84)) {
        FUN_10002700(s_CreateBuffers__There_was_not_eno_10017e18);
        goto LAB_10004e62;
      }
      FUN_10001000(iVar1);
      pcVar4 = s_CreateBuffers__CreateSurface_for_10017ed4;
    }
  }
  FUN_10002700(pcVar4);
LAB_10004e62:
  if (DAT_1001bcb8 != (int *)0x0) {
    (**(code **)(*DAT_1001bcb8 + 8))(DAT_1001bcb8);
    DAT_1001bcb8 = (int *)0x0;
  }
  if (DAT_1001bcbc != (int *)0x0) {
    (**(code **)(*DAT_1001bcbc + 8))(DAT_1001bcbc);
    DAT_1001bcbc = (int *)0x0;
  }
  if (DAT_1001bcc4 != (int *)0x0) {
    (**(code **)(*DAT_1001bcc4 + 8))(DAT_1001bcc4);
    DAT_1001bcc4 = (int *)0x0;
  }
  return 0;
}


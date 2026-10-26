/*
 * FUN_005536e0 at 005536e0
 * undefined FUN_005536e0(void)
 * Address ranges: 005536e0-005539ac
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

char FUN_005536e0(void)

{
  char cVar1;
  char cVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined4 uVar8;
  int *piVar9;
  float10 fVar10;
  undefined1 local_35;
  float local_34;
  float local_30;
  undefined1 local_2c [16];
  undefined1 auStack_1c [4];
  int iStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0063e320;
  local_c = ExceptionList;
  if (DAT_006ba779 != '\0') {
    return DAT_006ba77a;
  }
  ExceptionList = &local_c;
  fVar10 = (float10)FUN_005539b0();
  local_30 = (float)fVar10;
  iVar4 = FUN_00558930();
  if (*(float *)(iVar4 + 0x60) == 0.0) {
    fVar10 = (float10)FUN_005ad390(iVar4 + 0x14,&local_35);
    *(float *)(iVar4 + 0x60) = (float)fVar10;
    local_34 = (float)fVar10;
  }
  else {
    local_34 = *(float *)(iVar4 + 0x60);
  }
  DAT_006ba779 = 1;
  cVar2 = FUN_005539e0();
  if ((cVar2 == '\0') && (local_34 <= local_30)) {
    iVar5 = FUN_00557970();
    iVar4 = *(int *)(iVar5 + 100);
    if (iVar4 == -0x80000000) {
      puVar6 = *(undefined1 **)(iVar5 + 0x18);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      iVar4 = FUN_0060af10(puVar6);
      *(int *)(iVar5 + 100) = iVar4;
    }
    if (2 < iVar4) {
      iVar5 = FUN_00559230();
      iVar4 = *(int *)(iVar5 + 100);
      if (iVar4 == -0x80000000) {
        puVar6 = *(undefined1 **)(iVar5 + 0x18);
        if (puVar6 == (undefined1 *)0x0) {
          puVar6 = &DAT_0064a3b4;
        }
        iVar4 = FUN_0060af10(puVar6);
        *(int *)(iVar5 + 100) = iVar4;
      }
      DAT_006ba77a = '\0';
      if (iVar4 == 0) goto LAB_005537d0;
    }
  }
  DAT_006ba77a = '\x01';
LAB_005537d0:
  iVar5 = FUN_00516fb0();
  iVar4 = *(int *)(iVar5 + 100);
  if (iVar4 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    iVar5 = FUN_00559230();
    iVar4 = *(int *)(iVar5 + 100);
    if (iVar4 == -0x80000000) {
      puVar6 = *(undefined1 **)(iVar5 + 0x18);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      iVar4 = FUN_0060af10(puVar6);
      *(int *)(iVar5 + 100) = iVar4;
    }
    iVar7 = FUN_00557970();
    iVar5 = *(int *)(iVar7 + 100);
    if (iVar5 == -0x80000000) {
      puVar6 = *(undefined1 **)(iVar7 + 0x18);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      iVar5 = FUN_0060af10(puVar6);
      *(int *)(iVar7 + 100) = iVar5;
    }
    uVar3 = FUN_005539e0(iVar5,3,iVar4);
    uVar8 = FUN_005ae390(local_2c,s_CAdamSoundSystem__GetUseLowQuali_006a2034,DAT_006ba77a,
                         (double)local_30,(double)local_34,uVar3);
    local_4 = 0;
    FUN_005aff00(uVar8);
    local_4 = 0xffffffff;
    FUN_004040a0(1);
  }
  piVar9 = DAT_006b915c;
  if (DAT_006b915c == (int *)0x0) {
    piVar9 = (int *)FUN_004bc480();
  }
  cVar2 = (**(code **)(*piVar9 + 0x10))(DAT_006ba77a);
  local_30 = (float)CONCAT31(local_30._1_3_,cVar2);
  if (cVar2 == DAT_006ba77a) {
    ExceptionList = local_c;
    return DAT_006ba77a;
  }
  iVar5 = FUN_00516fb0();
  iVar4 = *(int *)(iVar5 + 100);
  if (iVar4 == -0x80000000) {
    puVar6 = *(undefined1 **)(iVar5 + 0x18);
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &DAT_0064a3b4;
    }
    iVar4 = FUN_0060af10(puVar6);
    *(int *)(iVar5 + 100) = iVar4;
  }
  if (iVar4 != 0) {
    uVar8 = FUN_005ae390(auStack_1c,s_CAdamSoundSystem__GetUseLowQuali_006a1fc4,DAT_006ba77a,
                         (uint)local_30 & 0xff);
    local_4 = 1;
    FUN_005aff00(uVar8);
    if (iStack_18 != 0) {
      cVar1 = *(char *)(iStack_18 + -1);
      if ((cVar1 != '\0') && (cVar1 != -1)) {
        *(char *)(iStack_18 + -1) = cVar1 + -1;
        DAT_006ba77a = cVar2;
        ExceptionList = local_c;
        return cVar2;
      }
      FUN_005fe5f0((char *)(iStack_18 + -1));
    }
  }
  DAT_006ba77a = cVar2;
  ExceptionList = local_c;
  return cVar2;
}


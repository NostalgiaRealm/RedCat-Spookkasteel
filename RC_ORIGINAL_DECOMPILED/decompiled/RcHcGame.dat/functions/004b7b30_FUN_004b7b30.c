/*
 * FUN_004b7b30 at 004b7b30
 * undefined FUN_004b7b30(void)
 * Address ranges: 004b7b30-004b7d62
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 * Analysis note: Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ecd8 slot 1 for .?AVCAdamTextureTextScrollAnimationCell@@. Original bytes unchanged; names and types still inferred.
 */

/* Recovered original virtual function entry from validated MSVC RTTI/vtable 0x64ecd8 slot 1 for
   .?AVCAdamTextureTextScrollAnimationCell@@. Original bytes unchanged; names and types still
   inferred. */

void __thiscall FUN_004b7b30(int param_1)

{
  char cVar1;
  uint uVar2;
  byte *pbVar3;
  int iVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  char *pcVar12;
  int iVar13;
  bool bVar14;
  bool bVar15;
  undefined1 uStack00000010;
  undefined1 local_2c [4];
  int local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined1 auStack_1c [4];
  int iStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *pvStack_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0062efb0;
  pvStack_c = ExceptionList;
  if (_uStack00000010 != 0) {
    uVar9 = *(uint *)(*(int *)(param_1 + 0x80) + 8);
    pbVar3 = *(byte **)(*(int *)(param_1 + 0x80) + 4);
    if (pbVar3 == (byte *)0x0) {
      pbVar3 = &DAT_0064a3b4;
    }
    uVar2 = *(uint *)(_uStack00000010 + 100);
    uVar8 = uVar2;
    if (uVar9 <= uVar2) {
      uVar8 = uVar9;
    }
    bVar14 = false;
    iVar4 = 0;
    bVar15 = true;
    pbVar11 = *(byte **)(_uStack00000010 + 0x60);
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      bVar14 = *pbVar11 < *pbVar3;
      bVar15 = *pbVar11 == *pbVar3;
      pbVar11 = pbVar11 + 1;
      pbVar3 = pbVar3 + 1;
    } while (bVar15);
    if (!bVar15) {
      iVar4 = (1 - (uint)bVar14) - (uint)(bVar14 != 0);
    }
    if (((iVar4 == 0) && (uVar9 <= uVar2)) && (ExceptionList = &pvStack_c, uVar2 == uVar9))
    goto LAB_004b7c21;
  }
  local_2c[0] = uStack00000010;
  uVar9 = 0xffffffff;
  local_28 = 0;
  pcVar12 = &DAT_006b3f70;
  do {
    if (uVar9 == 0) break;
    uVar9 = uVar9 - 1;
    cVar1 = *pcVar12;
    pcVar12 = pcVar12 + 1;
  } while (cVar1 != '\0');
  local_24 = 0;
  local_20 = 0;
  ExceptionList = &pvStack_c;
  FUN_004040f0(&DAT_006b3f70,~uVar9 - 1);
  local_4 = 0;
  pcVar5 = (code *)FUN_005a07f0(s_go____0____go_>GetName____m_Text_00696d74,
                                s_D__Work_RCHorror_AdamSource_Adam_00697140,0x3d,local_2c);
  (*pcVar5)();
  local_4 = 0xffffffff;
  if (local_28 != 0) {
    cVar1 = *(char *)(local_28 + -1);
    if ((cVar1 == '\0') || (cVar1 == -1)) {
      FUN_005fe5f0((char *)(local_28 + -1));
    }
    else {
      *(char *)(local_28 + -1) = cVar1 + -1;
    }
  }
LAB_004b7c21:
  if (_uStack00000010 != 0) {
    iVar4 = FUN_0060a6f2(_uStack00000010,0,&CAdamGO::RTTI_Type_Descriptor,
                         &CAdamTextureTextScrollAnimator::RTTI_Type_Descriptor,0);
    if (iVar4 == 0) {
      puVar6 = *(undefined1 **)(*(int *)(param_1 + 0x80) + 4);
      if (puVar6 == (undefined1 *)0x0) {
        puVar6 = &DAT_0064a3b4;
      }
      uVar7 = FUN_005ae390(auStack_1c,s_Couldn_t_cast_CAdamTextureAnimat_00696d24,puVar6);
      local_4 = 1;
      pcVar5 = (code *)FUN_005a07f0(s_textAnimator____NULL_006970f4,
                                    s_D__Work_RCHorror_AdamSource_Adam_00697140,0x46,uVar7);
      (*pcVar5)();
      local_4 = 0xffffffff;
      if (iStack_18 != 0) {
        cVar1 = *(char *)(iStack_18 + -1);
        if ((cVar1 == '\0') || (cVar1 == -1)) {
          FUN_005fe5f0((char *)(iStack_18 + -1));
        }
        else {
          *(char *)(iStack_18 + -1) = cVar1 + -1;
        }
      }
      iStack_18 = 0;
      uStack_14 = 0;
      uStack_10 = 0;
    }
    FUN_004b8580(param_1 + 0x70,1,*(undefined4 *)(param_1 + 0x58),*(undefined4 *)(param_1 + 0x5c),
                 *(undefined4 *)(param_1 + 0x68),*(undefined4 *)(param_1 + 0x6c),0,0,1);
  }
  iVar10 = *(int *)(param_1 + 0x68) + *(int *)(param_1 + 0x84);
  iVar4 = *(int *)(param_1 + 100);
  iVar13 = *(int *)(param_1 + 0x6c) + *(int *)(param_1 + 0x88);
  *(int *)(param_1 + 0x68) = iVar10;
  *(int *)(param_1 + 0x6c) = iVar13;
  if (iVar4 <= iVar10) {
    *(int *)(param_1 + 0x68) = (iVar10 - *(int *)(param_1 + 0x54)) - iVar4;
  }
  iVar10 = *(int *)(param_1 + 0x60);
  if (iVar10 <= iVar13) {
    *(int *)(param_1 + 0x6c) = (iVar13 - *(int *)(param_1 + 0x50)) - iVar10;
  }
  if (*(int *)(param_1 + 0x68) < -*(int *)(param_1 + 0x54)) {
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x54) + iVar4 + *(int *)(param_1 + 0x68);
  }
  if (*(int *)(param_1 + 0x6c) < -*(int *)(param_1 + 0x50)) {
    *(int *)(param_1 + 0x6c) = *(int *)(param_1 + 0x50) + iVar10 + *(int *)(param_1 + 0x6c);
  }
  ExceptionList = pvStack_c;
  return;
}


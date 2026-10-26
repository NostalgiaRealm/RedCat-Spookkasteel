/*
 * FUN_005bc220 at 005bc220
 * undefined FUN_005bc220(void)
 * Address ranges: 005bc220-005bc33a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 FUN_005bc220(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined *local_8;
  undefined4 local_4;
  
  local_8 = &DAT_006ac67c;
  local_4 = DAT_006b06c4;
  iVar1 = FUN_005cd0a0(0,&local_8,1);
  if (iVar1 == 0) {
    FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,0x49b,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar1 = FUN_005c41c0();
  *(int *)(param_1 + 0x336c0) = iVar1;
  if (iVar1 == 0) {
    uVar6 = 0x4a1;
  }
  else {
    iVar1 = FUN_005c3cf0(0,0);
    if (iVar1 == 0) {
      uVar6 = 0x4c0;
    }
    else {
      iVar1 = FUN_005bb870(param_1,*(undefined4 *)(param_1 + 0x336c0));
      if (iVar1 != 0) {
        FUN_005cd320();
        uVar3 = 0;
        puVar4 = (uint *)(param_1 + 0x336c4);
        iVar5 = 0x80;
        iVar1 = 0;
        do {
          iVar2 = iVar1 + 8;
          *puVar4 = iVar1 << 0x10 | uVar3;
          if (0x3ff < iVar2) {
            uVar3 = uVar3 + 0xe;
            iVar2 = 0;
          }
          puVar4 = puVar4 + 1;
          iVar5 = iVar5 + -1;
          iVar1 = iVar2;
        } while (iVar5 != 0);
        return 1;
      }
      uVar6 = 0x4c6;
    }
  }
  FUN_005cf220(0xffffffff,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_E_006a956c,uVar6,
               &DAT_006b3f70,0);
  FUN_005cd320();
  return 0;
}


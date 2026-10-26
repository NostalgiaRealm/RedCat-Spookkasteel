/*
 * FUN_005be7a0 at 005be7a0
 * undefined FUN_005be7a0(void)
 * Address ranges: 005be7a0-005be957
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

undefined4 __fastcall FUN_005be7a0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_c;
  undefined4 local_8;
  byte local_4;
  
  iVar1 = FUN_005bd630();
  if (iVar1 == 0) {
    FUN_005cf220(0x47,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x75e,&DAT_006b3f70,
                 0);
    return 0;
  }
  iVar1 = FUN_005cd390(0xc);
  if (iVar1 == 0) {
    FUN_005cf220(0x47,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x764,&DAT_006b3f70,
                 0);
    return 0;
  }
  *(undefined4 *)(param_1 + 0x14) = local_8;
  if ((local_4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else {
    iVar1 = FUN_005d6f50();
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 == 0) {
      FUN_005cf220(0x47,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x76e,
                   &DAT_006b3f70,0);
      return 0;
    }
  }
  if ((local_4 & 2) == 0) {
    *(undefined4 *)(param_1 + 0x1c) = 0;
  }
  else {
    iVar1 = FUN_005d1b20();
    *(int *)(param_1 + 0x1c) = iVar1;
    if (iVar1 == 0) {
      FUN_005cf220(0x47,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x77c,
                   &DAT_006b3f70,0);
      return 0;
    }
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  iVar1 = FUN_005cf3b0(local_c * 4);
  *(int *)(param_1 + 0x20) = iVar1;
  if (iVar1 == 0) {
    FUN_005cf220(0x41,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x78a,&DAT_006b3f70,
                 0);
  }
  else {
    iVar1 = 0;
    if (0 < local_c) {
      do {
        uVar2 = FUN_005c6290();
        *(undefined4 *)(*(int *)(param_1 + 0x20) + iVar1 * 4) = uVar2;
        if (*(int *)(*(int *)(param_1 + 0x20) + iVar1 * 4) == 0) {
          FUN_005cf220(0x47,&DAT_006b3f70,s_C__Genesis3D_OpenSource_Source_A_006a9718,0x793,
                       &DAT_006b3f70,0);
          return 0;
        }
        iVar1 = iVar1 + 1;
        *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 1;
      } while (iVar1 < local_c);
      return 1;
    }
  }
  return 1;
}


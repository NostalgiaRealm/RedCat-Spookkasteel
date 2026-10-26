/*
 * FUN_005d1b20 at 005d1b20
 * undefined FUN_005d1b20(void)
 * Address ranges: 005d1b20-005d1e14
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_005d1b20(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  undefined4 uVar6;
  int local_134;
  int local_130;
  int local_12c;
  int local_128;
  uint local_124;
  undefined1 local_120 [30];
  char acStack_102 [9];
  undefined1 local_f9 [249];
  
  iVar2 = FUN_005cd390(4);
  if (iVar2 == 0) {
    FUN_005cf220(0x5d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac4f8 + 8,0x196,
                 &DAT_006b3f70,0);
    return 0;
  }
  if (local_134 != 0x4b4c4253) {
    if (local_134 == 0x424b4253) {
      iVar2 = FUN_005d1e20();
      return iVar2;
    }
    FUN_005cf220(0x5f,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac4f8 + 8,0x1f2,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar2 = 0;
  local_128 = 0;
  local_130 = FUN_005d1900();
  if (local_130 == 0) {
    FUN_005cf220(0x5b,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac4f8 + 8,0x1a3,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar3 = FUN_005cd370(0x20);
  if (iVar3 == 0) {
    FUN_005cf220(0x5d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac4f8 + 8,0x1aa,
                 &DAT_006b3f70,0);
    return 0;
  }
  iVar3 = FUN_0060b449(local_120,s__X__X_006a979c,&local_134,&local_124);
  if (iVar3 != 2) {
    FUN_005cf220(0x5d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac4f8 + 8,0x1af,
                 &DAT_006b3f70,0);
    return 0;
  }
  local_124 = local_124 | local_134 << 8;
  if (0xef < local_124) {
    do {
      iVar3 = FUN_005cd370(0xff);
      if (iVar3 == 0) {
        uVar6 = 0x1bc;
LAB_005d1d75:
        FUN_005cf220(0x5d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac4f8 + 8,uVar6,
                     &DAT_006b3f70,0);
        break;
      }
      iVar3 = FUN_0060d260(acStack_102 + 2,s_Strings_006ac530,7);
      if (iVar3 == 0) {
        iVar3 = FUN_0060b449(local_f9,&DAT_00690818,&local_12c);
        if (iVar3 != 1) {
          uVar6 = 0x1c4;
          goto LAB_005d1d75;
        }
        iVar2 = 0;
        if (0 < local_12c) {
          while (iVar3 = FUN_005cd370(0xff), iVar3 != 0) {
            if (acStack_102[2] != '\0') {
              uVar4 = 0xffffffff;
              pcVar5 = acStack_102 + 2;
              do {
                if (uVar4 == 0) break;
                uVar4 = uVar4 - 1;
                cVar1 = *pcVar5;
                pcVar5 = pcVar5 + 1;
              } while (cVar1 != '\0');
              acStack_102[~uVar4] = '\0';
              if (acStack_102[2] != '\0') {
                uVar4 = 0xffffffff;
                pcVar5 = acStack_102 + 2;
                do {
                  if (uVar4 == 0) break;
                  uVar4 = uVar4 - 1;
                  cVar1 = *pcVar5;
                  pcVar5 = pcVar5 + 1;
                } while (cVar1 != '\0');
                if (acStack_102[~uVar4] == '\r') {
                  acStack_102[~uVar4] = '\0';
                }
              }
            }
            iVar3 = FUN_005d19e0();
            if ((iVar3 == 0) || (iVar2 = iVar2 + 1, local_12c <= iVar2)) goto LAB_005d1d49;
          }
          FUN_005cf220(0x5d,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac4f8 + 8,0x1cb,
                       &DAT_006b3f70,0);
        }
LAB_005d1d49:
        iVar2 = local_128 + 1;
        local_128 = iVar2;
      }
    } while (iVar2 < 1);
    if (iVar2 != 1) {
      FUN_005cf220(0x5f,&DAT_006b3f70,s_Eclipse_C__Genesis3D_OpenSource__006ac4f8 + 8,0x1e9,
                   &DAT_006b3f70,0);
      FUN_005c8f80();
      return 0;
    }
  }
  return local_130;
}


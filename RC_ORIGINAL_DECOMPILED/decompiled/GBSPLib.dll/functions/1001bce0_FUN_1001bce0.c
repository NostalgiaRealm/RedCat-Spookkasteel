/*
 * FUN_1001bce0 at 1001bce0
 * undefined FUN_1001bce0(void)
 * Address ranges: 1001bce0-1001bfd4
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

int FUN_1001bce0(void)

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
  
  iVar2 = FUN_10014a00(4);
  if (iVar2 == 0) {
    FUN_10015fb0(0x5d,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x195,&DAT_10265ce0,0);
    return 0;
  }
  if (local_134 != 0x4b4c4253) {
    if (local_134 == 0x424b4253) {
      iVar2 = FUN_1001c110();
      return iVar2;
    }
    FUN_10015fb0(0x5f,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x1f1,&DAT_10265ce0,0);
    return 0;
  }
  iVar2 = 0;
  local_128 = 0;
  local_130 = FUN_1001bb20();
  if (local_130 == 0) {
    FUN_10015fb0(0x5b,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x1a2,&DAT_10265ce0,0);
    return 0;
  }
  iVar3 = FUN_100149e0(0x20);
  if (iVar3 == 0) {
    FUN_10015fb0(0x5d,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x1a9,&DAT_10265ce0,0);
    return 0;
  }
  iVar3 = FUN_1002836b(local_120,s__X__X_1003a6b0,&local_134,&local_124);
  if (iVar3 != 2) {
    FUN_10015fb0(0x5d,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x1ae,&DAT_10265ce0,0);
    return 0;
  }
  local_124 = local_124 | local_134 << 8;
  if (0xef < local_124) {
    do {
      iVar3 = FUN_100149e0(0xff);
      if (iVar3 == 0) {
        uVar6 = 0x1bb;
LAB_1001bf35:
        FUN_10015fb0(0x5d,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,uVar6,&DAT_10265ce0,0);
        break;
      }
      iVar3 = FUN_10033390(acStack_102 + 2,s_Strings_1003c720,7);
      if (iVar3 == 0) {
        iVar3 = FUN_1002836b(local_f9,&DAT_1003a694,&local_12c);
        if (iVar3 != 1) {
          uVar6 = 0x1c3;
          goto LAB_1001bf35;
        }
        iVar2 = 0;
        if (0 < local_12c) {
          while (iVar3 = FUN_100149e0(0xff), iVar3 != 0) {
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
            iVar3 = FUN_1001bba0();
            if ((iVar3 == 0) || (iVar2 = iVar2 + 1, local_12c <= iVar2)) goto LAB_1001bf09;
          }
          FUN_10015fb0(0x5d,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x1ca,&DAT_10265ce0,0);
        }
LAB_1001bf09:
        iVar2 = local_128 + 1;
        local_128 = iVar2;
      }
    } while (iVar2 < 1);
    if (iVar2 != 1) {
      FUN_10015fb0(0x5f,&DAT_10265ce0,s___Actor_strblock_c_1003c70c,0x1e8,&DAT_10265ce0,0);
      FUN_1001bb60();
      return 0;
    }
  }
  return local_130;
}


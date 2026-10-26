/*
 * FUN_0060ef73 at 0060ef73
 * undefined FUN_0060ef73(void)
 * Address ranges: 0060ef73-0060f17a
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

uint FUN_0060ef73(byte *param_1,int *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  uint local_c;
  byte *local_8;
  
  local_c = 0;
  bVar5 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_8 = pbVar1 + 1;
    if (DAT_006b28bc < 2) {
      uVar2 = (byte)PTR_DAT_006b26b0[(uint)bVar5 * 2] & 8;
    }
    else {
      uVar2 = FUN_0060e0ee(bVar5,8);
    }
    if (uVar2 == 0) break;
    bVar5 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar5 == 0x2d) {
    param_4 = param_4 | 2;
LAB_0060efce:
    bVar5 = *local_8;
    local_8 = pbVar1 + 2;
  }
  else if (bVar5 == 0x2b) goto LAB_0060efce;
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (int *)0x0) {
      *param_2 = (int)param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (bVar5 != 0x30) {
      param_3 = 10;
      goto LAB_0060f038;
    }
    if ((*local_8 != 0x78) && (*local_8 != 0x58)) {
      param_3 = 8;
      goto LAB_0060f038;
    }
    param_3 = 0x10;
  }
  if (((param_3 == 0x10) && (bVar5 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58)))) {
    bVar5 = local_8[1];
    local_8 = local_8 + 2;
  }
LAB_0060f038:
  uVar2 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    uVar6 = (uint)bVar5;
    if (DAT_006b28bc < 2) {
      uVar3 = (byte)PTR_DAT_006b26b0[uVar6 * 2] & 4;
    }
    else {
      uVar3 = FUN_0060e0ee(uVar6,4);
    }
    if (uVar3 == 0) {
      if (DAT_006b28bc < 2) {
        uVar6 = *(ushort *)(PTR_DAT_006b26b0 + uVar6 * 2) & 0x103;
      }
      else {
        uVar6 = FUN_0060e0ee(uVar6,0x103);
      }
      if (uVar6 == 0) {
LAB_0060f0e4:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (int *)0x0) {
            local_8 = param_1;
          }
          local_c = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_c)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_c)))))))) {
          DAT_0070ff98 = 0x22;
          if ((param_4 & 1) == 0) {
            local_c = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_c = 0xffffffff;
          }
        }
        if (param_2 != (int *)0x0) {
          *param_2 = (int)local_8;
        }
        if ((param_4 & 2) == 0) {
          return local_c;
        }
        return -local_c;
      }
      iVar4 = FUN_0061cdac((int)(char)bVar5);
      uVar6 = iVar4 - 0x37;
    }
    else {
      uVar6 = (int)(char)bVar5 - 0x30;
    }
    if (param_3 <= uVar6) goto LAB_0060f0e4;
    if ((local_c < uVar2) ||
       ((local_c == uVar2 && (uVar6 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_c = local_c * param_3 + uVar6;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar5 = *local_8;
    local_8 = local_8 + 1;
  } while( true );
}


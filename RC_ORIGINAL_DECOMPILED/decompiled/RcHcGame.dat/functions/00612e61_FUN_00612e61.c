/*
 * FUN_00612e61 at 00612e61
 * undefined FUN_00612e61(void)
 * Address ranges: 00612e61-0061313c
 * Origin: Ghidra decompiler; identifiers and types may be inferred.
 */

/* WARNING: Removing unreachable block (ram,0x006130e1) */
/* WARNING: Removing unreachable block (ram,0x006130bb) */
/* WARNING: Removing unreachable block (ram,0x006130ca) */
/* WARNING: Removing unreachable block (ram,0x0061308f) */
/* WARNING: Removing unreachable block (ram,0x006130f0) */
/* WARNING: Removing unreachable block (ram,0x0061309e) */
/* WARNING: Removing unreachable block (ram,0x00612fea) */

uint FUN_00612e61(void)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  uint uVar5;
  
  uVar2 = 0;
  if (*DAT_00710054 == '_') {
    DAT_00710054 = DAT_00710054 + 1;
    uVar2 = 0x4000;
  }
  cVar1 = *DAT_00710054;
  if ((cVar1 < 'A') || ('Z' < cVar1)) {
    if (cVar1 != '$') {
      if ((cVar1 < '0') || ('8' < cVar1)) {
        return (cVar1 != '\0') + 0xfffe;
      }
      switch(cVar1) {
      case '0':
        uVar2 = 0x800;
        break;
      case '1':
        uVar2 = 0x1000;
        break;
      case '2':
        uVar2 = 0;
        break;
      case '3':
        uVar2 = 0x4000;
        break;
      case '4':
        uVar2 = 0x2000;
        break;
      case '5':
        uVar2 = 0x6000;
        break;
      case '6':
        uVar2 = 0x6800;
        break;
      case '7':
        uVar2 = 0x7000;
        break;
      case '8':
        uVar2 = 0x7800;
        break;
      default:
        goto switchD_0061307f_default;
      }
      goto LAB_00613138;
    }
    cVar1 = DAT_00710054[1];
    if (cVar1 == '\0') {
      uVar2 = 0xfffe;
      goto LAB_00613048;
    }
    if ('/' < cVar1) {
      if (cVar1 < '6') {
        if (((int)cVar1 - 0x30U & 1) == 0) {
          uVar2 = uVar2 | 0x8d00;
        }
        else {
          uVar2 = uVar2 | 0xad00;
        }
        uVar3 = (int)cVar1 - 0x30U & 6;
        if (uVar3 == 0) {
          if ((uVar2 & 0x8000) == 0) {
            uVar2 = uVar2 | 0x800;
          }
          else {
            uVar2 = uVar2 | 0x40;
          }
          goto LAB_00613048;
        }
        if (uVar3 == 2) {
          if ((uVar2 & 0x8000) == 0) {
            uVar2 = uVar2 & 0xfffff7ff | 0x1000;
          }
          else {
            uVar2 = uVar2 | 0x80;
          }
          goto LAB_00613048;
        }
        if (uVar3 == 4) {
          if ((uVar2 & 0x8000) == 0) {
            uVar2 = uVar2 & 0xffffe7ff;
          }
          goto LAB_00613048;
        }
      }
      else {
        if (cVar1 == 'A') {
          uVar2 = uVar2 | 0x9000;
LAB_00613048:
          DAT_00710054 = DAT_00710054 + 2;
          return uVar2;
        }
        if (cVar1 == 'B') {
          uVar2 = uVar2 | 0x9800;
          goto LAB_00613048;
        }
        if (cVar1 == 'D') {
          uVar2 = uVar2 | 0x9100;
          goto LAB_00613048;
        }
        if (cVar1 == 'E') {
          uVar2 = uVar2 | 0x9200;
          goto LAB_00613048;
        }
      }
    }
  }
  else {
    uVar3 = (int)cVar1 - 0x41;
    pcVar4 = DAT_00710054 + 1;
    if ((uVar3 & 1) == 0) {
      uVar2 = uVar2 | 0x8000;
    }
    else {
      uVar2 = uVar2 | 0xa000;
    }
    if (0x17 < (int)uVar3) {
      DAT_00710054 = pcVar4;
      return uVar2;
    }
    if ((uVar2 & 0x8000) == 0) {
      uVar2 = uVar2 & 0xffff9fff;
    }
    else {
      uVar2 = uVar2 | 0x800;
    }
    uVar5 = uVar3 & 0x18;
    if (uVar5 == 0) {
      if ((uVar2 & 0x8000) == 0) {
        uVar2 = uVar2 | 0x800;
      }
      else {
        uVar2 = uVar2 | 0x40;
      }
    }
    else if (uVar5 == 8) {
      if ((uVar2 & 0x8000) == 0) {
        uVar2 = uVar2 & 0xfffff7ff | 0x1000;
      }
      else {
        uVar2 = uVar2 | 0x80;
      }
    }
    else {
      if (uVar5 != 0x10) goto switchD_0061307f_default;
      if ((uVar2 & 0x8000) == 0) {
        uVar2 = uVar2 & 0xffffe7ff;
      }
    }
    uVar3 = uVar3 & 6;
    if (uVar3 == 0) {
      DAT_00710054 = pcVar4;
      return uVar2;
    }
    if (uVar3 == 2) {
      if ((uVar2 & 0x8000) != 0) {
        DAT_00710054 = pcVar4;
        return uVar2 | 0x200;
      }
      DAT_00710054 = pcVar4;
      return uVar2 & 0xffff9fff;
    }
    if (uVar3 == 4) {
      DAT_00710054 = pcVar4;
      return uVar2 | 0x100;
    }
    if (uVar3 == 6) {
      DAT_00710054 = pcVar4;
      return uVar2 | 0x400;
    }
  }
switchD_0061307f_default:
  uVar2 = 0xffff;
LAB_00613138:
  DAT_00710054 = DAT_00710054 + 1;
  return uVar2;
}

